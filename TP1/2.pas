program two;
var
    num: array[1..999] of integer;
    i: integer;

begin
    for i := 1 to 999 do
    begin
        write('Deme el numero ',i,': ');
        readLn(num[i]);
        writeln(num[i]);
        if i > 2 then if array[i] < array[i-1] then halt(0);
    end;
end.
