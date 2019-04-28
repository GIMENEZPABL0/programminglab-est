program five;

var
  character : char;
  text : string;
  cont : integer;
  first_letter : boolean;
  letter : char;
  letter_count : integer;
begin
  first_letter := true;
  letter_count := 0;
  cont := 0;
  write('Ingrese el texto letra por letra: ');
  repeat
  begin
    cont := cont + 1;
    readln(character);
    if not (character = '!') then insert(character,text,cont);
    if (first_letter) then begin letter := character; first_letter := false; end;
    if not (first_letter) and (letter = character) then letter_count := letter_count + 1;
    if (character = ' ') or (character = ';') or (character = ',') or (character = '.') then
    begin
      first_letter:= true;
      writeln('La letra "',letter,'" estuvo presente en la palabra ',letter_count, ' veces');
      letter_count := 0;
    end;
  end;
  until (character = '!');
end.
