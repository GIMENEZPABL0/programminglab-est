program nine;
var
  day,raining_quantity : array[1..32] of integer;
  month,year,raining_day,raining_day_quantity,row_days,row_days_aux : integer;
  days_quantity,i : integer;

  function leapYear(year:integer):boolean;
  begin
   leapYear := (year MOD 400 = 0) OR ((year MOD 100 <> 0) AND (year MOD 4 = 0));
  end;

  function daysInAMonth(month,year:integer):integer;
  begin
    case month of
      1,3,5,7,8,10,12 : daysInAMonth := 31;
      4,6,9,11 : daysInAMonth := 30;
      2 : if not (leapYear(year)) then daysInAMonth := 28; else daysInAMonth := 29;
    end;
  end;

  begin
  row_days := 0;
  row_days_aux := 0;
  raining_day := 0;
  raining_day_quantity := 0;
  writeln('Ingrese el primer informe ( mes | año )');
  writeln('Mes: '); read(month);
  writeln('Año: '); read(year);
  writeln('Ingrese los informes ( dia | cantidad de lluvia )');
  days_quantity := daysInAMonth(month,year) - 1;
  for i := 0 to days_quantity do begin
    writeln('Dia: '); read(day[i+1]);
    writeln('Cantidad de lluvia: '); read(raining_quantity[i+1]);
    if (raining_quantity[i+1]) > 0 then begin
      row_days_aux := row_days_aux + 1;
      if (raining_quantity[i+1] > raining_day_quantity) then begin
        raining_day_quantity := raining_quantity[i+1];
        raining_day := day[i+1];
      end;
    end
    else row_days_aux := 0;
    if (row_days_aux > row_days) then begin
        row_days := row_days_aux;
      end;
    end;
  if (raining_day_quantity > 0) then begin
    writeln('El día más lluvioso fue el ',raining_day,'/',month,' con una lluvia de ',raining_day_quantity,' litros.');
    writeln('Hubo lluvias prolongadas de hasta ',row_days,' dias consecutivos.');
  end
  else writeln('No hubo lluvias en el mes ',month,'.');
end.
