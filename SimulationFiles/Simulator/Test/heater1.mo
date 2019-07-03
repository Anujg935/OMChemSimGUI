within Simulator.Test;

package heater1
  model ms
    extends Simulator.Streams.Material_Stream;
    //material stream extended
    extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
    //thermodynamic package Raoults law is extended
  end ms;

  model heat//instance of energy stream

    //instance of chemsep database
    import data = Simulator.Files.Chemsep_Database;
    //instance of methanol
    parameter data.Methanol meth;
    //instance of ethanol
    parameter data.Ethanol eth;
    //instance of water
    parameter data.Water wat;
    //instance of heater
    parameter Integer NOC = 3;
    parameter data.General_Properties comp[NOC] = {meth, eth, wat};
    Simulator.Unit_Operations.Heater heater1(pressDrop = 101325, eff = 1, NOC = NOC, comp = comp) annotation(
      Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
    //instances of composite material stream
    Simulator.Test.heater1.ms inlet(NOC = NOC, comp = comp) annotation(
      Placement(visible = true, transformation(origin = {-95, -1}, extent = {{-17, -17}, {17, 17}}, rotation = 0)));
    Simulator.Test.heater1.ms outlet(NOC = NOC, comp = comp, T(start = 353), compMolFrac(start = {{0.33, 0.33, 0.34}, {0.24, 0.31, 0.43}, {0.44, 0.34, 0.31}}), P(start = 101325)) annotation(
      Placement(visible = true, transformation(origin = {85, 1}, extent = {{-15, -15}, {15, 15}}, rotation = 0)));
  Simulator.Streams.Energy_Stream energy annotation(
      Placement(visible = true, transformation(origin = {-62, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
    equation
  connect(energy.outlet, heater1.energy) annotation(
      Line(points = {{-52, -44}, {0, -44}, {0, -10}}));
  connect(inlet.outlet, heater1.inlet) annotation(
      Line(points = {{-78, -1}, {-54, -1}, {-54, 0}, {-10, 0}}));
  connect(heater1.outlet, outlet.inlet) annotation(
      Line(points = {{10, 0}, {-10.5, 0}, {-10.5, 1}, {70, 1}}));
  equation
    inlet.compMolFrac[1, :] = {0.33, 0.33, 0.34};
//mixture molar composition
    inlet.P = 202650;
//input pressure
    inlet.T = 320;
//input temperature
    inlet.totMolFlo[1] = 100;
//input molar flow
    heater1.heatAdd = 2000000;
//heat added
  end heat;
end heater1;
