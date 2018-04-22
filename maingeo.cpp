#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Geometria.h"
using namespace std;

int main (int argc, char* argv[])
{
	if (argc == 0) {
		cout << "Este programa calcula informacoes basicas de formas geometricas presentes na Geometria plana e espacial. Para utiliza-lo, execute-o digitando a forma desejada, e suas dimensoes. O programa ira retornar os valores para area e perimetro da figura, caso seja uma forma plana, ou area e volume do objeto, caso seja uma forma espacial." << endl;
		cout << "Estas sao as formas disponiveis e as informacoes requeridas:" << endl << endl;
		cout << "'triangulo': recebe sua LARGURA, retorna sua area e perimetro. Tenha em mente que o triangulo representado e equilatero." << endl;
		cout << "'retangulo': recebe sua LARGURA e ALTURA, retorna sua area e perimetro." << endl;
		cout << "'quadrado': recebe sua LARGURA, retorna sua area e perimetro." << endl;
		cout << "'circulo': recebe seu RAIO, retorna sua area e perimetro." << endl << endl;
		cout << "'piramide': recebe a LARGURA DE SUA BASE, retorna sua area e volume. Tenha em mente que esta piramide possui uma base quadrada." << endl;
		cout << "'cubo': recebe a LARGURA, retorna sua area e volume." << endl;
		cout << "'paralelepipedo': recebe sua LARGURA, ALTURA e COMPRIMENTO, retorna sua area e volume." << endl;
		cout << "'esfera': recebe seu RAIO, retorna sua area e volume." << endl;
	} else {
		if (strcmp(argv[1], "triangulo") == 0) {
			Triangulo t( atof(argv[2]) );
			cout << "Area do triangulo: " << Triangulo.areaT(t.largura, t.altura) << endl;
			cout << "Perimetro do triangulo: " << Triangulo.perimetroT(t.largura, t.altura) << endl;
		}

		if (strcmp(argv[1], "retangulo") == 0) {
			Retangulo r( atof(argv[2]) , ( atof(argv[3]) ));
			cout << "Area do retangulo: " << Retangulo.areaR(r.largura, r.altura) << endl;
			cout << "Perimetro do retangulo: " << Retangulo.perimetroR(r.largura, r.altura) << endl;
		}

		if (strcmp(argv[1], "quadrado") == 0) {
			Quadrado q( atof(argv[2]) );
			cout << "Area do quadrado: " << Quadrado.areaQ(q.lado) << endl;
			cout << "Perimetro do quadrado: " << Quadrado.perimetroQ(q.lado) << endl;
		}

		if (strcmp(argv[1], "circulo") == 0) {
			Circulo c( atof(argv[2]) );
			cout << "Area do circulo: " << Circulo.areaC(c.raio) << endl;
			cout << "Perimetro do circulo: " << Circulo.perimetroC(c.raio) << endl;
		}

		if (strcmp(argv[1], "piramide") == 0) {
			Piramide prm( atof(argv[2]) );
			cout << "Area da piramide: " << Piramide.areaPrm(prm.base, prm.lateral.largura, prm.lateral.altura) << endl;
			cout << "Volume da piramide: " << Piramide.volumePrm(prm.base, prm.lateral.altura) << endl;
		}

		if (strcmp(argv[1], "cubo") == 0) {
			Cubo cube( atof(argv[2]) );
			cout << "Area do cubo: " << Cubo.areaCubo(cube.base) << endl;
			cout << "Volume do cubo: " << Cubo.volumeCubo(cube.base) << endl;
		}

		if (strcmp(argv[1], "paralelepipedo") == 0) {
			Paralelepipedo prl( atof(argv[2]), atof(argv[3]), atof(argv[4]) ) ;
			cout << "Area do paralelepipedo: " << Paralelepipedo.areaPrl(prl.largura, prl.altura, prl.comprimento) << endl;
			cout << "Volume do paralelepipedo: " << Paralelepipedo.volumePrl(prl.largura, prl.altura, prl.comprimento) << endl;
		}

		if (strcmp(argv[1], "esfera") == 0) {
			Esfera esf( atof(argv[2]) );
			cout << "Area da esfera: " << Esfera.areaEsf(esf.raio) << endl;
			cout << "Volume da esfera: " << Esfera.volumeEsf(esf.raio) << endl;
		}
	}

	return 0;
}
