#include <iostream>
#include <string>

#include "Empregado.hpp"

    double salarioHora;  
    double quotaMensalVendas;  

    double pagamentoMes(double horasTrabalhadas) {
      
      double horasExtras = horasTrabalhadas;

      /*Cálculo da hora extra é determinado pelo produto
      do salário pela metade das horas extras*/
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        horasExtras += x / 2;
      }
	    return horasExtras * salarioHora;
    }
	