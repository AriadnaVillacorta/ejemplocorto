#include <iostream>
#include <string>
using namespace std;

int main()
{

    string lugar, acompanante, actividadparque;
    string otrolugar, siguientelugar, veterinaria;
    string cafeteria, casa, actividadotra, lugar2;
    int paso;

    cout << "Mi fin de semana" << endl;
    cout << "El clima estaba bien, un pocoo nublado pero sin lluvia" << endl;

    // Se le pregunta al usuario el lugar donde fue
    cout << "A donde fuiste este fin de semana? (cine / parque / montana / restaurante)";
    cin >> lugar;

    // Utilizamos if, else if y else para las posibles opciones
    if (lugar == "cine")
    {
        cout << "Fuiste al cine a ver una pelicula." << endl;
    }
    else if (lugar == "parque")
    {
        cout << "Fuiste al parque a pasarear a tu perrito." << endl;
    }
    else if (lugar == "montana")
    {
        cout << "Fuiste a una montana, muy buena eleccion." << endl;
    }
    else if (lugar == "restaurante")
    {
        cout << "Fuiste a comer a un restaurante." << endl;
    }
    else
    {
        cout << "No se reconoce el lugar, pero espero haya sido lindo." << endl;
    }

    cout << "¿Con quien saliste? (Mama, Hermano, Amigos)";
    cin >> acompanante;

    if (acompanante == "Mama")
    {
        cout << "Saliste con tu Mama a pasear a tu perrito." << endl;
    }
    else if (acompanante == "Hermano")
    {
        cout << "Saliste con tu hermano a pasear a tu perrito." << endl;
    }
    else if (acompanante == "Amigos")
    {
        cout << "Saliste con tus amigos a pasear a tu perrito." << endl;
    }
    else
    {
        cout << "No se encontro el acompanante, pero seguro estuvo genial" << endl;
    }

    cout << "¿Que hiciste en el parque aparte de pasear al perrito? ( Caminar / Hablar / Jugar)";
    cin >> actividadparque;

    if (actividadparque == "Caminar")
    {
        cout << "Caminaste en el paruqe con el perrito" << endl;
    }
    else if (actividadparque == "Hablar")
    {
        cout << "Habalaste con" << acompanante << "mientras paseaban con el perrito" << endl;
    }
    else if (acompanante == "Jugar")
    {
        cout << "Jugaste con tu perrito en el parque" << endl;
    }
    else
    {
        cout << "No hiciste nada en particular solo disfruste" << endl;
    }

    cout << "¿Fuiste a otro lugar despues? (Si / No)";
    cin >> otrolugar;

    if (otrolugar == "Si")
    {
        cout << "¿A donde fuiste? (Veterinaria / Cafeteria / Casa)";
        cin >> siguientelugar;
    }
    if (siguientelugar == "Veterinaria")
    {
        cout << "La veterinaria estaba cerca o lejos de casa? ( Cerca / Lejos)";
        cin >> veterinaria;

        if (veterinaria == "Cerca")
        {
            cout << "Fuiste a una veterinaria cerca de casa." << endl;
        }
        else
        {
            cout << "Fuiste a una veterinaria lejos de casa." << endl;
        }
    }
    else if (siguientelugar == "Cafeteria")
    {
        cout << "¿A cuál cafetería fuiste? (JuanValdes/ Starbucks / SanMartin)";
        cin >> cafeteria;

        if (cafeteria == "JuanValdes")
        {
            cout << "Fuiste a Juan Valdes con tu " << acompanante << "." << endl;
        }
        else if (cafeteria == "Starbucks")
        {
            cout << "Fuiste a Starbucks con tu " << acompanante << "." << endl;
        }
        else if (cafeteria == "SanMartin")
        {
            cout << "Fuiste a San Martín con tu" << acompanante << "." << endl;
        }
        else
        {
            cout << "Fuiste a otra cafetería." << endl;
        }
    }
    else if (siguientelugar == "Casa")
    {
        cout << "Fuiste a descanzar a casa" << endl;
    }
    else
    {
        cout << "No se reconoció el lugar, pero seguro fue divertido." << endl;
    }

    // Actividad extra adicional
    cout << "¿Hiciste algo más después? (Cafeteria/ Comprar / Casa)";
    cin >> actividadotra;

    if (actividadotra == "Cafeteria")
    {
        cout << "¿A cuál cafetería fuiste? (JuanValdes/ Starbucks / SanMartin)";
        cin >> cafeteria;

        if (cafeteria == "JuanValdes")
        {
            cout << "Fuiste a Juan Valdes con tu " << acompanante << "." << endl;
        }
        else if (cafeteria == "Starbucks")
        {
            cout << "Fuiste a Starbucks con tu " << acompanante << "." << endl;
        }
        else if (cafeteria == "SanMartin")
        {
            cout << "Fuiste a San Martín con tu" << acompanante << "." << endl;
        }
        else
        {
            cout << "Fuiste a otra cafetería." << endl;
        }
    }
    else if (actividadotra == "Comprar")
    {
        cout << "Fuiste a comprar algo con tu" << acompanante << "." << endl;
    }
    else
    {
        cout << "No hiciste nada mas, fuiste a descansar a casa." << endl;
    }

    cout << "Luego de eso hiciste algo mas?(Si / No)";
    cin >> casa;

    if (casa == "Si")
    {
        cout << "A donde fuiste (Comprar / Casa)" << endl;
        cin >> lugar2;
    }
    if (lugar2 == "Comprar")
    {
        cout << "Fuiste a comprar con tu" << acompanante << "." << endl;
    }
    else
    {
        cout << "Fuiste a casa con tu" << acompanante << " y tu perrito." << endl;
    }

    // Actividad final en casa
    cout << "¿Qué hiciste al llegar a casa? (Descansar / Verpelicula / Dormir): ";
    cin >> casa;

    if (casa == "Descansar")
    {
        cout << "Te relajaste y descansaste después de todo." << endl;
    }
    else if (casa == "Verpelicula")
    {
        cout << "Viste una película en casa con tu " << acompanante << "." << endl;
    }
    else if (casa == "Dormir")
    {
        cout << "Te fuiste a dormir después de un día un poco cansado." << endl;
    }
    else
    {
        cout << "Al llegar a casa solo te pusiste cómoda." << endl;
    }

    // Utilizamos switch para poder ordenar y hacer un resumen del dia segun lo ingresado del usuario
    cout << "Resumen de la salida del dia" << endl;

    for (paso = 1; paso <= 5; paso++)
    {
        switch (paso)
        {
        case 1:
            cout << "1. Fuiste al" << lugar << "con tu " << acompanante << "." << endl;
            break;
        case 2:
            cout << "2. Fuiste al parque a hablar" << actividadparque << "con tu" << acompanante << endl;
            break;
        case 3:
            if (siguientelugar == "Veterinaria")
            {
                cout << "3. Fuiste a la veterinaria " << (veterinaria == "Cerca" ? "cerca de casa" : "lejos de casa") << "." << endl;
            }
            else if (siguientelugar == "Cafeteria")
            {
                cout << "3. Fuiste a tomar cafe en" << cafeteria << "con tu" << acompanante << "." << endl;
            }
            else if (siguientelugar == "Casa")
            {
                cout << "3. Fuiste a casa a descansar." << endl;
            }
            else
            {
                cout << "3. No se especifico bien a donde fuiste." << endl;
            }
            break;
        case 4:
            if (actividadotra == "Cafeteria")
            {
                cout << "4. Luego fuiste a tomar cafe" << cafeteria << " con tu " << acompanante << "." << endl;
            }
            else if (actividadotra == "Comprar")
            {
                cout << "4. Luego saliste de compra con tu" << acompanante << "." << endl;
            }
            else
            {
                cout << "4. Luego te fuiste a descansar a casa." << endl;
            }
            break;
        case 5:
            if (lugar2 == "Comprar")
            {
                cout << "5. Finalmente fuiste a comprar con tu" << acompanante << "y tu perrito, donde decidiste";
            }
            else
            {
                cout << "5. Finalmente, regresaste a casa con tu " << acompanante << " y tu perrito donde decidiste";
                if (casa == " Descansar ")
                    cout << " descansar." << endl;
                else if (casa == "Verpelicula")
                    cout << "ver una pelicula." << endl;
                else if (casa == "Dormir")
                    cout << "dormir" << endl;
                else
                    cout << " relajarte sin hacer mucho. " << endl;
            default:
                cout << "Tuviste un día muy bonito con tu perrito y tu " << acompanante << endl;
                break;
            }
        }
    }

    return 0;
}