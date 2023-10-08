#include "Veiculos.h"

Veiculos::Veiculos(int quantidade, const string cor, const string placa, float valor,
                   const string descricao, int codigo, int ano, const string tipo_combustivel){
                   	
    Quantidade = quantidade;
	Cor = cor;
	Placa = placa;
	Valor = valor;
	Descricao = descricao;
	Codigo = codigo;
	Ano = ano;
	Tipo_Combustivel = tipo_combustivel;

}

//Métodos get:

int Veiculos::getQuantidade()const{
	
    return Quantidade;
    
}

float Veiculos::getValor()const{
	
    return Valor;

}

string Veiculos::getDescricao()const{
	
    return Descricao;

}

int Veiculos::getCodigo()const{
	
    return Codigo;

}

int Veiculos::getAno()const{
	
    return Ano;

}

string Veiculos::getTipo_Combustivel()const{
	
    return Tipo_Combustivel;

}

string Veiculos::getPlaca()const{
	
    return Placa;

}

string Veiculos::getCor()const{
	
    return Cor;

}

// Métodos set:

void Veiculos::setQuantidade(int quantidade){
	
    Quantidade = quantidade;

}

void Veiculos::setValor(float valor){
	
    Valor = valor;

}

void Veiculos::setDescricao(const string descricao){
	
    Descricao = descricao;

}

void Veiculos::setCodigo(int codigo){
	
    Codigo = codigo;

}

void Veiculos::setAno(int ano){
	
    Ano = ano;

}

void Veiculos::setTipo_Combustivel(const string tipo_combustivel){
	
    Tipo_Combustivel = tipo_combustivel;

}

void Veiculos::setPlaca(const string placa){
	
    Placa = placa;

}

void Veiculos::setCor(const string cor){
	
    Cor = cor;

}
