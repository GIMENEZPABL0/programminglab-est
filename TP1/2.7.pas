program thirteen;

const N=256;

var a:ARRAY[1..N] of boolean;
    i,j,m:word;

begin
 for i:=1 TO N do A[i]:=TRUE;
 m:=trunc(sqrt(N));
 for i:=2 to m do
   if a[i] then for j:=2 to N DIV i do a[i*j]:=FALSE;
 for i:=1 to N do if a[i] then write(i:4);
end.
