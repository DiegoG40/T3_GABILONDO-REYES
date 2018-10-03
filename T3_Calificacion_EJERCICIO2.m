clear;
clc;

prompt=('Introduzca su calificacion: ');
Cal = input(prompt);
if Cal >= 70
    prompt=('Felicidades has aprobado.')
else 
    prompt=("Continua con tus estudios, necesitas esforzarte más.")
end