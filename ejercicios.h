#ifndef ETPH_EJERCICIOS_H
#define ETPH_EJERCICIOS_H

#include <iostream>
#include <vector>
#include <math.h>
#include <tuple>
#include "definiciones.h"

using namespace std;

bool esEncuestaValida ( eph_i ti , eph_h th );
hogar mayorIngresoPorPersonaActiva ( eph_i ti , eph_h th );
float porcHogaresNoPropMiemMay3 ( eph_i ti , eph_h th );
bool generoGPosiblesClientes ( eph_i ti , eph_h th , int g);
void ordenarPorITF ( eph_i & ti , eph_h th );
lista_nivel_ed nivelEducativoXHogar ( eph_i ti , eph_h th );
lista_ev_hogares crecimientoHogarenoVsIngresos ( eph_i ti1 , eph_h th1 , eph_i ti2 ,eph_h th2 );

#endif //ETPH_EJERCICIOS_H
