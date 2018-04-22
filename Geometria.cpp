#include <iostream>
#include <cmath>
#include "Geometria.h"

Triangulo::Triangulo() {}

Triangulo::Triangulo(double l) {
	largura = l;
	altura = l/2 * sqrt(3);
}

double Triangulo::areaT(double l, double h) {
	return (l * h) / 2;
}

double Triangulo::perimetroT(double l) {
	return 3 * l;
}



Retangulo::Retangulo() {}

Retangulo::Retangulo(double l, double h) {
	largura = l;
	altura = h;
}

double Retangulo::areaR(double l, double h) {
	return l * h;
}

double Retangulo::perimetroR(double l, double h) {
	return 2*l + 2*h;
}



Quadrado::Quadrado() {}

Quadrado::Quadrado(double l) {
	lado = l;
}

double Quadrado::areaQ(double l) {
	return l * l;
}

double Quadrado::perimetroQ(double l) {
	return 4 * l;
}



Circulo::Circulo() {}

Circulo::Circulo(double r) {
	raio = r;
}

double Circulo::areaC(double r) {
	return pi * (r * r);
}

double Circulo::perimetroC(double r) {
	return 2 * pi * r;
}



Piramide::Piramide() {}

Piramide::Piramide(double b) {
	base = b;
	lateral.largura = b;
	lateral.altura = b/2 * sqrt(3);
}

double Piramide::areaPrm(double b, double l, double h) {
	return Quadrado.areaQ(b) + 4 * Triangulo.areaT(l, h);
}

double Piramide::volumePrm(double b, double h) {
	return (Quadrado.areaQ(b) * h) / 3;
}




Cubo::Cubo() {}

Cubo::Cubo(double b) {
	base.lado = b;
}

double Cubo::areaCubo(double b) {
	return 6 * Quadrado.areaQ(b);
}

double volumeCubo(double b) {
	return pow(b, 3);
}



Paralelepipedo::Paralelepipedo() {}

Paralelepipedo::Paralelepipedo(double l, double h, double c) {
	largura = l;
	altura = h;
	comprimento = c;
}

double Paralelepipedo::areaPrl(double l, double h, double c) {
	return 2*Retangulo.areaR(l, h) + 2*Retangulo.areaR(l, c) + 2*Retangulo.areaR(h, c);
}

double Paralelepipedo::volumePrl(double l, double h, double c) {
	return h * l * c;
}



Esfera::Esfera() {}

Esfera::Esfera(double r) {
	raio = r;
}

double Esfera::areaEsf(double r) {
	return 4 * pi * pow(r, 2);
}

double Esfera::volumeEsf(double r) {
	return (4 * pi * pow(r, 3)) / 3; 
}