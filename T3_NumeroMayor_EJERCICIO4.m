prompt=('ingrese el primer numero: ');
a=input(prompt); 
prompt='ingrese el segundo numero: ';
b=input(prompt); 
prompt=('ingrese el tercer numero: ');
c=input(prompt); 
if a>b & a>c 
disp(a) 
else
    if a>b
disp(c)
else
    if b>c
disp(b) 
else 
disp(c) 
end
end
end