clear;
clc;

for n=1:1:1
    prompt=('Escriba un número: ');
    a=input(prompt);
    
   if  rem(a,2)==0
       disp(['Resultado ', num2str(n), ': ', num2str(a*a)])
   else
       disp(['Resultado ', num2str(n), ': ', num2str(a.^3)])
   end
end