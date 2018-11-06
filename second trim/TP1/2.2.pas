program eigth;
var
  cont,i : integer;
  text : string;

begin
  cont := 1;
  write('Ingrese el texto: ');readln(text);
  for i := 1 to length(text) do
  begin
    if (text[i] = ' ') or (text[i] = ';') or (text[i] = ',') then cont := cont + 1;
    if (text[i] = '.') then break;
  end;
  write('La cantidad de palabras en el texto introducido es de: ',cont,' palabras');
end.
