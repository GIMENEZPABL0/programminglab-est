program seven;

var

  n : array[1..20] of real;
  prom,add : real;
  cont,i : integer;
begin
  cont := 0;
  add := 0;
  prom := 0;
  repeat
  cont:= cont + 1;
    write('Ingrese el número (pos.',cont,'): ');
    read(n[cont])
  until (n[cont]) = null;
  for i := 1 to length(n) do add := add + n[i];
  prom := add / length(n);
end.
