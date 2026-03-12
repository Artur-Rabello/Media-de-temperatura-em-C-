#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main(){
	
	setlocale(LC_ALL, ".UTF8");

    const int tam = 5;
    double temp[tam];
    double soma;
    double media;
    char resposta1;
    char resposta2;
	double maior;
    double menor;
    char conversao;
    double final;
    double maiorfinal;
    double menorfinal;
    
    
    while(true){
	
		soma = 0;
		
		for(int i = 0; i < tam; i++){
			cout << "Digite a temperatura " << i+1 << " em celsius : ";
			cin >> temp[i];
			soma += temp[i];
		}
		
		cout << "\nTemperatura digitadas:\n";
	
		for(int i = 0; i < tam; i++){
			cout << "temperatura" << i+1 << " : " << temp[i] << endl;
		}
		
		maior = temp[0];
		menor = temp[0];
		
		
		for(int i = 0; i < tam; i++){
			if (temp[i] > maior){
				maior = temp[i];
			}
			if (temp[i] < menor){
				menor = temp[i];
			}
		}
		
		
		media = soma / tam;
		
		cout << "\nA media das temperaturas em celsius é : " << media << endl;
		cout << "\nA maior temperatura em celsius é : " << maior << endl;
		cout << "\nA menor temperatura em celsius é : " << menor << endl;
		
		while(true){
		
			cout << "\nDeseja converter os resultados para farenheit ou kelvin? (s/n): ";
        	cin >> resposta1;
		
		
			if(resposta1 == 's' || resposta1 == 'S'){
			cout << "\nFarenheit ou kelvin (f/k) ou qq tecla pra sair :";
			cin >> conversao;
			
				if(conversao == 'f'){
				final = (media*1.8)+32;
				maiorfinal = (maior*1.8)+32;
				menorfinal = (menor*1.8)+32;
				
				cout << "\nTemperatura media em Farenheit : " << final;
				cout << "\nMaior temperatura em Farenheit : " << maiorfinal;
				cout << "\nMenor temperatura em Farenheit : " << menorfinal;
				continue;
				}
				
				if(conversao == 'k'){
				final = media + 273.15;
				maiorfinal = maior + 273.15;
				menorfinal = menor + 273.15;
				
				cout << "\nTemperatura media em kelvins : " << final;
				cout << "\nMaior temperatura em kelvins : " << maiorfinal;
				cout << "\nMenor temperatura em kelvins : " << menorfinal;
				continue;	
				}
				
				else{
					break;
				}
			
			}
			
			else{
				break;
			}
		}
	
	
	
		cout << "\nDeseja repetir? (s/n): ";
        cin >> resposta2;

        if(resposta2 != 's' && resposta2 != 'S'){
            break;
            
        }     

	}

	return 0;
}