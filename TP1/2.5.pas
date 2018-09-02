program eleven;
uses SysUtils;
var
  bin : string;
  i,cont,dec : integer;

begin
  cont := 0;
  dec := 0;

  write ('Ingrese el número binario de a uno: ');
  REPEAT begin
    cont := cont + 1;
    read (bin[cont]);
  end until (bin[cont] = '2');

  for i := 1 to (length(bin) - 1) do begin
    dec := dec * 2 + StrToInt(bin[i]);
  end;

  writeln(dec);
end.
