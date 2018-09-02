program four;
var x,y,potencia:REAL;
begin
  write ('Introduce el numero a potenciar: '); read ( x );
  write ('Introduce el exponente: '); read ( y );
  potencia:=Exp(y*Ln(x));
  writeln ('El resultado de la potencia es: ',potencia:20:2);
end.
