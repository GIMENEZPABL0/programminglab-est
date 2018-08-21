program seven;
var
n,suma,prom : real;
cont: integer;
begin
  suma := 0;prom := 0;cont := -1;
  repeat
  begin
    cont := cont + 1;
    write('Ingrese un número: ');
    readln(n);
    suma := suma + n;
  end;
  until (n = 0);
  prom := (suma / cont);
  write('La suma de los números es de: ',suma);
  write('El promedio de los números es de: ',prom);
end.
