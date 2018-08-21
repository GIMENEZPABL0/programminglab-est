program nine;
var
  numero:string;
  digito:longint;
  i,l:integer;

  begin
  writeln ('introdzca un numero en binario');
  readln (numero);
  l:=length (numero);
  for i:=1 to l do
  if (numero[i]='1') then
  digito:=digito+ power (2,(l-i));
  writeln ('el numero en decimal es ',digito);
  readln;
  end.
