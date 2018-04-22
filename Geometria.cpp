#include <iostream>
#include <cmath>
#include "Geometria.h"

/**
* @brief Construtor padrão da classe Triângulo
*/
Triangulo::Triangulo() {}

/**
* @brief Construtor que inicializa um Triângulo com os valores fornecidos
* @param l Define a Largura do triângulo, a partir deste valor a Altura é calculada.
*/
Triangulo::Triangulo(double l) {
	largura = l;
	altura = l/2 * sqrt(3);
}

/**
* @brief Calcula a área de um triângulo
* @param l Largura do triângulo
* @param h Altura do triângulo
* @return Solução
*/
double Triangulo::areaT(double l, double h) {
	return (l * h) / 2;
}

/**
* @brief Calcula o perímetro de um triângulo
* @param l Largura do triângulo
* @return Solução
*/
double Triangulo::perimetroT(double l) {
	return 3 * l;
}


/**
* @brief Construtor padrão da classe Retângulo
*/
Retangulo::Retangulo() {}

/**
* @brief Construtor que inicializa um Retângulo com os valores fornecidos
* @param l Define a Largura do retângulo.
* @param h Define a Altura do retângulo.
*/
Retangulo::Retangulo(double l, double h) {
	largura = l;
	altura = h;
}

/**
* @brief Calcula a área de um retângulo
* @param l Define a Largura do retângulo.
* @param h Define a Altura do retângulo.
* @return Solução
*/
double Retangulo::areaR(double l, double h) {
	return l * h;
}

/**
* @brief Calcula o perímetro de um retângulo
* @param l Define a Largura do retângulo.
* @param h Define a Altura do retângulo.
* @return Solução
*/
double Retangulo::perimetroR(double l, double h) {
	return 2*l + 2*h;
}


/**
* @brief Construtor padrão da classe Quadrado
*/
Quadrado::Quadrado() {}

/**
* @brief Construtor que inicializa um Quadrado com os valores fornecidos
* @param l Define a Largura do quadrado.
*/
Quadrado::Quadrado(double l) {
	lado = l;
}

/**
* @brief Calcula a área de um quadrado
* @param l Define a Largura do quadrado.
* @return Solução
*/
double Quadrado::areaQ(double l) {
	return l * l;
}

/**
* @brief Calcula o perímetro de um quadrado
* @param l Define a Largura do quadrado.
* @return Solução
*/
double Quadrado::perimetroQ(double l) {
	return 4 * l;
}


/**
* @brief Construtor padrão da classe Círculo
*/
Circulo::Circulo() {}

/**
* @brief Construtor que inicializa um Círculo com os valores fornecidos
* @param r Define o Raio do círculo.
*/
Circulo::Circulo(double r) {
	raio = r;
}

/**
* @brief Calcula a área de um círculo
* @param r Define o Raio do círculo.
* @return Solução
*/
double Circulo::areaC(double r) {
	return pi * (r * r);
}

/**
* @brief Calcula o perímetro de um círculo
* @param r Define o Raio do círculo.
* @return Solução
*/
double Circulo::perimetroC(double r) {
	return 2 * pi * r;
}


/**
* @brief Construtor padrão da classe Pirâmide
*/
Piramide::Piramide() {}

/**
* @brief Construtor que inicializa uma Pirâmide com os valores fornecidos
* @param b Define a Largura da base da pirâmide, a partir deste valor a Altura da pirâmide é calculada.
*/
Piramide::Piramide(double b) {
	base = b;
	lateral.largura = b;
	lateral.altura = b/2 * sqrt(3);
}

/**
* @brief Calcula a área de uma pirâmide
* @param b Define a largura da base.
* @param l Define a largura do triângulo da lateral
* @param h Define a altura da pirâmide
* @return Resultado
*/
double Piramide::areaPrm(double b, double l, double h) {
	return (b * b) + 4 * ((l * h) / 2);
}

/**
* @brief Calcula o volume de uma pirâmide
* @param b Define a largura da base.
* @param l Define a largura do triângulo da lateral
* @param h Define a altura da pirâmide
* @return Resultado
*/
double Piramide::volumePrm(double b, double h) {
	return ((b * b) * h) / 3;
}



/**
* @brief Construtor padrão da classe Cubo
*/
Cubo::Cubo() {}

/**
* @brief Construtor que inicializa um Cubo com os valores fornecidos
* @param b Define a Largura do cubo.
*/
Cubo::Cubo(double b) {
	base = b;
}

/**
* @brief Calcula a área de um cubo
* @param b Define a Largura do cubo.
* @return Solução
*/
double Cubo::areaCubo(double b) {
	return 6 * (b * b);
}

/**
* @brief Calcula o volume de um cubo
* @param b Define a Largura do cubo.
* @return Solução
*/
double Cubo::volumeCubo(double b) {
	return pow(b, 3);
}


/**
* @brief Construtor padrão da classe Paralelepípedo
*/
Paralelepipedo::Paralelepipedo() {}

/**
* @brief Construtor que inicializa um Paralelepípedo com os valores fornecidos
* @param l Define a Largura do paralelepípedo
* @param h Define a Altura do paralelepípedo
* @param c Define o Comprimento do paralelepípedo.
*/
Paralelepipedo::Paralelepipedo(double l, double h, double c) {
	largura = l;
	altura = h;
	comprimento = c;
}

/**
* @brief Calcula a área de um paralelepípedo
* @param l Define a Largura do paralelepípedo
* @param h Define a Altura do paralelepípedo
* @param c Define o Comprimento do paralelepípedo.
* @return Solução
*/
double Paralelepipedo::areaPrl(double l, double h, double c) {
	return 2*(l*h) + 2*(l*c) + 2*(h*c);
}

/**
* @brief Calcula o volume de um paralelepípedo
* @param l Define a Largura do paralelepípedo
* @param h Define a Altura do paralelepípedo
* @param c Define o Comprimento do paralelepípedo.
* @return Solução
*/
double Paralelepipedo::volumePrl(double l, double h, double c) {
	return h * l * c;
}

/**
* @brief Construtor padrão da classe Esfera
*/
Esfera::Esfera() {}

/**
* @brief Construtor que inicializa uma Esfera com os valores fornecidos
* @param r Define o raio da esfera.
*/
Esfera::Esfera(double r) {
	raio = r;
}

/**
* @brief Calcula a área de uma esfera
* @param r Define o raio da esfera.
* @return Solução
*/
double Esfera::areaEsf(double r) {
	return 4 * pi * pow(r, 2);
}

/**
* @brief Calcula o volume de uma esfera
* @param r Define o raio da esfera.
* @return Solução
*/
double Esfera::volumeEsf(double r) {
	return (4 * pi * pow(r, 3)) / 3; 
}