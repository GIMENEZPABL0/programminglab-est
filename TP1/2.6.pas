program twelve;

var
  character : char;
  text : string;
  cont : integer;
  first_letter,new_word : boolean;
  letter : char;
  letter_count : integer;
begin
  first_letter := true;
  new_word := true;
  letter_count := 0;
  cont := 0;
  write('Ingrese el texto letra por letra: ');
  repeat
  begin
    cont := cont + 1;
    readln(character);
    if not (character = '!') then insert(character,text,cont);
    if (first_letter) then begin letter := character; first_letter := false; end;
    if not (first_letter) and (new_word) and (letter = character) then begin
      letter_count := letter_count + 1;
      new_word := false;
    end;
    if (character = ' ') or (character = ';') or (character = ',') or (character = '.') then
    begin
      first_letter:= true;
      new_word := true;
    end;
  end;
  until (character = '!');
  write ('Las veces en la que la primera letra de una palabra se repitió más de dos veces: ',letter_count);
end.
