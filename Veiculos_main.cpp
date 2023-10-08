#include <iostream>
#include <iomanip>
#include <locale>
#include <string>

using namespace std;

#include "Veiculos.cpp"

int main(){

    Veiculos veiculo(1, "Azul", "ABC123", 25000.0, "Carro", 12345, 2023, "Gasolina");

	cout << "Descrição: " << veiculo.getDescricao() << endl;
    cout << "Quantidade: " << veiculo.getQuantidade() << endl;
    cout << "Cor: " << veiculo.getCor() << endl;
    cout << "Placa: " << veiculo.getPlaca() << endl;
    cout << "Valor: " << veiculo.getValor() << endl;
    cout << "Codigo: " << veiculo.getCodigo() << endl;
    cout << "Ano: " << veiculo.getAno() << endl;
    cout << "Tipo de Combustivel: " << veiculo.getTipo_Combustivel() << endl;

    return 0;
    
}
