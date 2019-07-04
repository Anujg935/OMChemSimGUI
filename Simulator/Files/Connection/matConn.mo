within Simulator.Files.Connection;

connector matConn
  Real P(min = 0, start = 101325), T(min = 0, start = 273.15), mixMolFlo(min = 0, start = 100), mixMolEnth, mixMolEntr, mixMolFrac[3, connNOC](each min = 0, each max = 1, each start = 1 / (connNOC + 1)), vapPhasMolFrac(min = 0, max = 1, start = 0.5);
  parameter Integer connNOC(start = 2);
  annotation(
    Icon(coordinateSystem(initialScale = 0.1), graphics = {Rectangle(fillColor = {175, 175, 175}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}})}));
end matConn;
