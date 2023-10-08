#ifndef VEICULOS_H
#define VEICULOS_H

#include <string> // Tira isso

class Veiculos{
	
	public:
		
	    int Quantidade;
	    float Valor;
	    string Descricao;
	    string Placa;
	    string Cor;
	    int Codigo;
	    int Ano;
	    std::string Tipo_Combustivel;
		
	    Veiculos(int quantidade, const string cor, const string placa, float valor,
	             const string descricao, int codigo, int ano, const string tipo_combustivel);
	
	    int getQuantidade() const;
	    float getValor() const;
	    string getDescricao() const;
	    int getCodigo() const;
	    int getAno() const;
	    string getTipo_Combustivel() const;
	    string getPlaca() const;
	    string getCor() const;
	
	    void setQuantidade(int quantidade);
	    void setValor(float valor);
	    void setDescricao(const string descricao);
	    void setCodigo(int codigo);
	    void setAno(int ano);
	    void setTipo_Combustivel(const string tipo_combustivel);
	    void setPlaca(const string placa);
	    void setCor(const string cor);
	
};

#endif
