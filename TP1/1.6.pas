program sixth;

var
  text : string;
  a,e,i,o,u,x,aux : integer;

begin
  writeln('Ingrese un texto: ');
  read(text);
  if (pos('.',text)) = 0 then aux := length(text)
  else aux:= pos('.',text);
  for x := 1 to aux do
    case text[x] of
      'a': a:= a+1;
      'e': e:= e+1;
      'i': i:= i+1;
      'o': o:= o+1;
      'u': u:= u+1;
    end;
    writeln('La vocal "a" se repite ',a,' veces');
    writeln('La vocal "e" se repite ',e,' veces');
    writeln('La vocal "i" se repite ',i,' veces');
    writeln('La vocal "o" se repite ',o,' veces');
    writeln('La vocal "u" se repite ',u,' veces');
end.
