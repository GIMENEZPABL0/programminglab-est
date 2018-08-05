PROGRAM three;

VAR
  a,b,c,raiz,valor1,valor2:real;
BEGIN
  writeln('teclea el valor de a:');
  readln(a);
  writeln('teclea el valor de b');
  readln(b);
  writeln('teclea el valor de c');
  readln(c);
  raiz:=b*b-4*a*c;
  IF raiz>=0 then
  BEGIN
    Valor1:=(-b+sqrt(raiz))/(2*a);
    Valor2:=(-b-sqrt(raiz))/(2*a);
    write('x1: ',valor1:1:2);
    readln;
    write('x2: ',valor2:1:2);
    readln;
  END
  ELSE
    writeln('La ecuacion no tiene solucion');
  END.
