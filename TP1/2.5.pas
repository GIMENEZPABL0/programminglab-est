program eleven;
var
  dec,bin:integer;
begin
  dec := 0;
  write('Ingrese el número binario (de a uno): ');
  repeat begin
    read(bin);
    if not (bin = 2) then dec := dec * 2 + bin;
  end; until (bin = 2);
  writeln('En decimal es: ',dec);
end.
