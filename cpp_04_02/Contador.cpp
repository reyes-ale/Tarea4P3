#include "Contador.h"

Contador::Contador() {
	m_numObjIndividual = ++m_numObjGeneral;
}

 Contador :: ~Contador(){
	m_numObjIndividual = m_numObjGeneral--;
}

void Contador::Contar() {
	m_contObj++;
	m_contGen++;
}

int Contador::Obj() {
	return m_contObj;
}

int Contador::Gen() {
	return m_contGen;
}

int Contador::Numero_objeto() {
	return m_numObjIndividual;
}

//Inicialización de miembro static
int Contador::m_contGen = 0; 
int Contador::m_numObjGeneral= 0;