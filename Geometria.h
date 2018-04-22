/**
* @file Geometria.h
* @author Gerson David da Silva Santos
* @date 22/04/2018
*/

#ifndef GEOMETRIA_H
#define GEOMETRIA_H

class Triangulo
{
	public:
		double largura;
		double altura;

		Triangulo();
		Triangulo(double l);
		double areaT(double l, double h);
		double perimetroT(double l);
};

class Retangulo
{
	public:
		double largura;
		double altura;

		Retangulo();
		Retangulo(double l, double h);
		double areaR(double l, double h);
		double perimetroR(double l, double h);
};

class Quadrado
{
	public:
		double lado;

		Quadrado();
		Quadrado(double l);
		double areaQ(double l);
		double perimetroQ(double l);
};

class Circulo
{
	public:
		double raio;
		double pi = 3.1415;

		Circulo();
		Circulo(double r);
		double areaC(double r);
		double perimetroC(double r);
};

class Piramide
{
	public:
		double base;
		Triangulo lateral;

		Piramide();
		Piramide(double b);
		double areaPrm(double b, double l, double h);
		double volumePrm(double b, double h);
};

class Cubo
{
	public:
		double base;

		Cubo();
		Cubo(double b);
		double areaCubo(double b);
		double volumeCubo(double b);
};

class Paralelepipedo
{
	public:
		double largura;
		double altura;
		double comprimento;

		Paralelepipedo();
		Paralelepipedo(double l, double h, double c);
		double areaPrl(double l, double h, double c);
		double volumePrl(double l, double h, double c);
};

class Esfera
{
	public:
		double raio;
		double pi = 3.1415;

		Esfera();
		Esfera(double r);
		double areaEsf(double r);
		double volumeEsf(double r);
};

#endif