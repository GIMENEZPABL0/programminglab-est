program five;

var

  text,ch: string;
  i,x,aux: integer;
  cont: array of integer;

begin
  x := 0;
  Write('Ingrese el texto: ');
  Read(text);
  for i := 1 to length(text) do
    if (i=1) then begin
    ch[x] := text[i];
    cont[x] := 0;
    end;
    if (text[i] = ' ') then x := x+1
    else
      if (text[i] = ch[x]) then cont[x] := cont[x] + 1;
  for i:= 1 to x do
    writeln('La letra ',ch[i],' aparece ',cont[i],' en la misma palabra');
end.
