within Simulator.Test;

package valve1
  model ms
    //This model will be instantiated in maintest model as outlet stream of valve. Dont run this model. Run maintest model for valve test
    extends Simulator.Streams.Material_Stream;
    //material stream extended
    extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
    //thermodynamic package Raoults law is extended
  end ms;

  model valve
    import data = Simulator.Files.Chemsep_Database;
    //instantiation of chemsep database
    parameter data.Methanol meth;
    //instantiation of methanol
    parameter data.Ethanol eth;
    //instantiation of ethanol
    parameter data.Water wat;
    //instantiation of water
    parameter Integer NOC = 3;
    parameter data.General_Properties comp[NOC] = {meth, eth, wat};
    Simulator.Unit_Operations.Valve valve1(NOC = NOC, comp = comp) annotation(
      Placement(visible = true, transformation(origin = {-4, 4}, extent = {{-14, -14}, {14, 14}}, rotation = 0)));
    ms inlet(NOC = NOC, comp = comp) annotation(
      Placement(visible = true, transformation(origin = {-74, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
    ms outlet(NOC = NOC, comp = comp, T(start = 352), compMolFrac(start = {{0.33, 0.33, 0.34}, {0.26, 0.32, 0.40}, {0.47, 0.34, 0.18}})) annotation(
      Placement(visible = true, transformation(origin = {66, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  equation
  connect(valve1.outlet, outlet.inlet) annotation(
      Line(points = {{10, 4}, {56, 4}}));
  connect(inlet.outlet, valve1.inlet) annotation(
      Line(points = {{-64, 4}, {-18, 4}}));
    inlet.compMolFrac[1, :] = {0.33, 0.33, 0.34};
//mixture molar composition
    inlet.P = 202650;
//input pressure
    valve1.pressDrop = 101325;
//Pressure Drop
    inlet.T = 372;
//input temperature
    inlet.totMolFlo[1] = 100;
//input molar flow
  end valve;
end valve1;
