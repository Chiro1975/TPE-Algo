#include "ejercicios.h"



bool esEncuestaValida ( eph_i ti , eph_h th ) {
    //vector existe
    if (ti.size()<=0 || th.size()<=0){
        return false;
    }
    //esMatrizIndividuosValida
        for (int k=0;k<ti.size;k++) {
            if (ti[k].size()!=12]) {
            return false;
            }
        }
     //esMatrizHogarValida
        for (int i=0;i<ti.size;i++) {
            if (th[i].size()!=5]) {
            return false;
            }
        }
        if (!individuosValido(ti) || !hogarValido(th)){
            return false;
        }
        if (!hogaresUnicos(th){
            return false;
            }

        if (!individuoUnico(ti){
            return false;
            }

        if (!mismoPeriodo(ti, th) || !individuosConHogar(ti,th) || !hogarConIndividuo(ti,th) || !ingresoHogarenRango(ti,th)){
            return false;
        }


    }

bool individuoUnico (eph_i ti){
    for (int k=0;k<ti.size()-1;k++){
        for (int i=k;i<th.size();i++){
            if (ti[k][codosu]==ti[i+1][codosu] && ti[k][componente]==ti[i+1][componente]) {
                return false;
                    }
                }
        }
}
}

bool hogaresUnicos (eph_h th){
    for (int k=0;k<th.size()-1;k++){
        for (int i=k;i<th.size();i++){
            if (th[k][codosu]==th[i+1][codosu]) {
                return false;
                    }
                }
        }
}

bool mismoPeriodo (eph_i ti, eph_h th){
   //recorre Individuos
    for (int i=0;i<ti.size();i++){
        if (ti[0][@año]!=ti[j][@año] || ti[0][@trim]!=ti[j][@trim]){
            return false;
        }
    }
    for (int j=0;j<th.size();j++){
        if (th[0][@año]!=th[j][@año] || th[0][@trim]!=th[j][@trim]){
            return false;
        }
    }
        if (ti[0][@año]!=th[0][@año] || ti[0][@trimestre]!=th[0][@trimestre]) {
            return false;
        }
}

bool individuosConHogar (eph_i ti, eph_h th){
    int aux;
    for (int i=0; i<ti.size();i++){
    aux=0;
        for (int j=0; j<th.size();j++){
            if (ti[i][@codosu]==th[j][@codosu]) {
                aux=1;
                   }
                }
        if (aux==0){
                return false;
            }
        }
    }

bool hogarConIndividuo (eph_i ti, eph_h th){
    int aux=0;
    for (int i=0; i<th.size();i++){
        for (int j=0; j<ti.size();j++){
            if (th[i][@codosu]==ti[j][@codosu]) {
                aux=1;
                   }
                }
        if (aux==0){
                return false;
            }
        }
    }

int ingresoTotalHogar (eph_i ti, int codosu){
    int ingresos=0;
    for (int i=0; i<th.size();i++){
            if (ti[i][@codosu]==codosu) {
                ingresos=ingresos + ti[i][@itf];
            }
        }
      return ingresos;
    }



bool ingresoHogarenRango (eph_h th, eph_i ti){
    for (int i=0; i<ti.size();i++) {
        if (th[i][@itf]>=ingresoTotalHogar(ti, th[i][codosu])){
            return false;
        }

    }
}

bool individuoValido (eph_i ti){
            if (codosuValido(ti[codosu]) && componenteValido(ti[componente]) && añoValido(ti[año]) && trimestreEnRango(ti[trimestre]) && niveledEnRango(ti[nivelEd] &&)
                estadoEnRango(ti[estado]) && catOcupEnRango(ti[catOcup]) && edadEnRango(ti[edad]) && p21EnRango(ti[p21]) && pII7EnRango(ti[II7]) && horasEnRango(ti[horas]))
                {return true; }
    }

bool hogarValido (eph_h th){
            if (codosuValido(th[codosu]) && añoValido(th[año]) && trimestreEnRango(th[trimestre]) && itfEnRango(th[itf]) && pII7EnRango(th[II7]))
            {return true;}
}



bool codosuValido (int codosu){
    if (codosu>0){
        return true;
    }
}

bool componenteValido (int componente){
    if (componente>0){
        return true;
    }
}

bool añoValido (int año){
    if (año>0){
        return true;
    }
}

bool trimestreEnRango (int trimestre){
    if (trimestre>=1 && trimestre<=4){
        return true;
    }
}

bool nivelEdEnRango (int nivelEd){
    if (nivelEd>=-1 && nivelEd<=1){
        return true;
    }
}

bool estadoEnRango (int estado){
    if (estado>=-1 && estado]<=1){
        return true;
    }
}

bool catOcupEnRango (int catOcup){
    if (catOcup>=-1 && catOcup<=4){
        return true;
    }
}

bool edadEnRango (int edad){
    if (edad>=-1 && edad<=110){
        return true;
    }
}

bool p21EnRango (int p21){
    if (p21>=-1 ){
        return true;
    }
}

bool pII7EnRango (int II7){
    if (II7>=-1 && II7<=3){
        return true;
    }
}

bool horasEnRango (int horas){
    if (horas>=-1 && horas<56){
        return true;
    }
}

bool itfEnRango (int itf){
    if (itf>=0){
        return true;
    }
}




hogar mayorIngresoPorPersonaActiva ( eph_i ti , eph_h th ){
 ordenar(&th);
 int i=BinarySearch(maximo(ti),th);
    hogar result=th[i];
    return result;
}

int maximo(eph_h th){
    int maxi=0;
        for (int i=0;i<ti.size();i++){
            if (ti[i][@p21]>maxi){
                maxi=ti[i][@codosu];
            }
        } return maxi;
}


float porcHogaresNoPropMiemMay3 ( eph_i ti , eph_h th ){
    float porcentaje= ((cantidadHogares(ti,th) *100)/th.size())
    return porcentaje ;
}

int cantidadHogares ( eph_i ti, eph_h th,){
    int suma;
    for (int i=0;i<th.size();i++){
        if (th[i][ii7]!=1 && cantidadMiembros(th)>=3){
            suma += 1;

        }
    } return suma;

}



bool generoGPosiblesClientes ( eph_i ti , eph_h th , int g) {
   if (hogaresXGenero(ti,th,g)>hogaresxNoGenero(ti,th,g)){
        return true;
   }

    return true;
}

int hogaresXGenero(eph_i ti, eph_h th, int g){
    int sum;
    for (int i=0; i<ti.size(); i++){
        if (ti[i][@nivel_ed]=1 && ti[i][@estado]=1 && ti[i][@edad]<45 && ti[i][@ch4] == g && cantidadMiembros(ti[i][@codosu]) == 1){
            sum += 1;
        }
    }return sum;
}

int hogaresXNoGenero(eph_i ti, eph_h th, int g){
    int sum;
    for (int i=0; i<ti.size(); i++){
        if (ti[i][@nivel_ed]=1 && ti[i][@estado]=1 && ti[i][@edad]<45 && ti[i][@ch4] != g && cantidadMiembros(ti[i][@codosu]) == 1){
            sum += 1;
        }
    }return sum;
}

void ordenarPorITF ( eph_i & ti , eph_h th ){

}
lista_nivel_ed nivelEducativoXHogar ( eph_i ti , eph_h th ){

    lista_nivel_ed result = {{-1,-1},{-1,-1}};
    return result;

}
lista_ev_hogares crecimientoHogarenoVsIngresos ( eph_i ti1 , eph_h th1 , eph_i ti2 ,eph_h th2 ){

    lista_ev_hogares result = {{-1,-1,-1,-1},{-1,-1,-1,-1},{-1,-1,-1,-1},{-1,-1,-1,-1}};
    return result;
}

