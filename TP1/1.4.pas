PROGRAM four;
VAR x,y,potencia:REAL;
BEGIN
  WRITE ('Introduce el numero a potenciar: '); Read (x);
  WRITE ('Introduce el exponente: '); Read (y);
  potencia:=Exp(y*Ln(x));
  Writeln ('El resultado de la potencia es: ',potencia:20:2);
END.
