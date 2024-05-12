#pragma once
class Contador {
	int m_numObjIndividual; 
	int m_contObj = 0; 
	static int m_contGen;
	static int m_numObjGeneral;

  public:
	Contador(); 
	~Contador(); 
	void Contar();
	int Obj();
	int Gen();
	int Numero_objeto();
};