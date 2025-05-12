#include <iostream>
using namespace std;

int main(){
int paso;
float Nota;

cout <<"Podrias ingresar tu calificación final:";
cin>> Nota;

//Le damos asigancion a "paso" para que la calificacion que ingrese haga la toma de decision.
if (Nota >= 90 && Nota <= 100){
    paso=1;
}else if (Nota >= 85 && Nota < 90){
    paso=2;
}else if (Nota >= 80 && Nota < 85){
    paso=3;
}else if (Nota >= 70 && Nota < 80){
    paso=4;
}else if (Nota >=69 && Nota < 70){
    paso=5;
}else if (Nota >=0 && Nota  < 69 ) {
   paso=6;
}else{
    paso=7;
}

// switch para la toma de decision.
switch (paso){
{
    case 1:
       cout<<"A: Felicidades has sido aprobado con una excelente nota!"<<endl;
       break;
    case 2:
        cout<<"B: Felicidades has sido aprobado con una muy buena nota."<<endl;
        break;
    case 3:
            cout<<"C: Felicidades :), haz aprobado con una buena nota."<<endl;
        break;
    case 4:
        cout<<"D: Tu nota es regular."<<endl;
        break;
    case 5:
            cout<<"E: Tu nota es deficiente, debes esforzarte mas."<<endl;
        break;
    case 6:
            cout<<"F: Has sido reprobado, debes esforzarte lo suficiente."<<endl;
        break;
    case 7:
            cout<<"Nota inválida, la calificación debe estar entre 0 y 100."<< endl;
        break;
        
    
}

return 0;
}
}