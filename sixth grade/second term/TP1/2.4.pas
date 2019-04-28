program ten;
var
  fahrenheit : integer;

function fahrenheitToCelsius(fahrenheit:integer):real;
begin
    fahrenheitToCelsius := 5 / 9 * (fahrenheit-32);
end;

begin
  fahrenheit := 0;
  writeln('FAHRENHEIT | CELCIUS');
  repeat begin
    writeln(fahrenheit,' °F | ',fahrenheitToCelsius(fahrenheit):20:2,'°C.');
    fahrenheit := fahrenheit + 10; end;
  until (fahrenheit = 250);
end.
