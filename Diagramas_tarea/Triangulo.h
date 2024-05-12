#pragma once
class Triangulo {
	float m_a, m_b, m_h; 
	float heron(); 

public:
	Triangulo();
	Triangulo(float a, float b, float c);
	void fijar_a(int a);
	void fijar_b(int b);
	void fijar_c(int c);
	float obtener_a(); 
	float obtener_b();
	float obtener_c();
	float obtener_A();
};

