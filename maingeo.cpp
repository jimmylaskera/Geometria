#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Geometria.h"
using namespace std;

int main (int argc, char* argv[])
{
	double temp = 0;

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

			temp = t.areaT(t.largura, t.altura);
			cout << "Area do triangulo: " << temp << endl;

			temp = t.perimetroT(t.largura);
			cout << "Perimetro do triangulo: " << temp << endl;
		}

		if (strcmp(argv[1], "retangulo") == 0) {
			Retangulo r( atof(argv[2]) , ( atof(argv[3]) ));

			temp = r.areaR(r.largura, r.altura);
			cout << "Area do retangulo: " << temp << endl;

			temp = r.perimetroR(r.largura, r.altura);
			cout << "Perimetro do retangulo: " << temp << endl;
		}

		if (strcmp(argv[1], "quadrado") == 0) {
			Quadrado q( atof(argv[2]) );

			temp = q.areaQ(q.lado);
			cout << "Area do quadrado: " << temp << endl;

			temp = q.perimetroQ(q.lado);
			cout << "Perimetro do quadrado: " << temp << endl;
		}

		if (strcmp(argv[1], "circulo") == 0) {
			Circulo c( atof(argv[2]) );

			temp = c.areaC(c.raio);
			cout << "Area do circulo: " << temp << endl;

			temp = c.perimetroC(c.raio);
			cout << "Perimetro do circulo: " << temp << endl;
		}

		if (strcmp(argv[1], "piramide") == 0) {
			Piramide prm( atof(argv[2]) );

			temp = prm.areaPrm(prm.base, prm.lateral.largura, prm.lateral.altura);
			cout << "Area da piramide: " << temp << endl;

			temp = prm.volumePrm(prm.base, prm.lateral.altura);
			cout << "Volume da piramide: " << temp << endl;
		}

		if (strcmp(argv[1], "cubo") == 0) {
			Cubo cube( atof(argv[2]) );

			temp = cube.areaCubo(cube.base);
			cout << "Area do cubo: " << temp << endl;

			temp = cube.volumeCubo(cube.base);
			cout << "Volume do cubo: " << temp << endl;
		}

		if (strcmp(argv[1], "paralelepipedo") == 0) {
			Paralelepipedo prl( atof(argv[2]), atof(argv[3]), atof(argv[4]) ) ;
			
			temp = prl.areaPrl(prl.largura, prl.altura, prl.comprimento);
			cout << "Area do paralelepipedo: " << temp << endl;

			temp = prl.volumePrl(prl.largura, prl.altura, prl.comprimento);
			cout << "Volume do paralelepipedo: " << temp << endl;
		}

		if (strcmp(argv[1], "esfera") == 0) {
			Esfera esf( atof(argv[2]) );

			temp = esf.areaEsf(esf.raio);
			cout << "Area da esfera: " << temp << endl;

			temp = esf.volumeEsf(esf.raio);
			cout << "Volume da esfera: " << temp << endl;
		}
	}

	return 0;
}
