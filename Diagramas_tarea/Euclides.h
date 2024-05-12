#pragma once

class Euclides {
	private:
		int m_a, m_b, m_r; 
		bool calcular = false;
		int mcd(int a, int b) const; 

	public:
		Euclides(int a, int b);
		void fijarAB(int a, int b); 
		int obtenerA() const {
			return m_a;
		}
		int obtenerB() const {
			return m_b;
		}
		int obtenerR(); 
};

