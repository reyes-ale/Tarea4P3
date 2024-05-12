#pragma once
#include "Triangulo.h"

class Piramide {
	Triangulo m_t;
	float m_h, m_v;
	void volumen();

public:
	Piramide(Triangulo* t, float h); 
	void fijar_c(Triangulo* t);
	void fijar_h(int h);
	float obtener_h();
	float obtener_V(); 

};

