#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int numero = 0;
   int algarismoDeNumero = 0; /* Vai receber o algarismo mais a direita de numero */
   int numeroAoContario = 0;
   int auxiliar = 0; /* Vai receber o mesmo valor de numero a fim de que esse valor fique salvo, pois numero sofrerá alterações */
   int contador = 1; /* Variável que controla o nº de repetições do laço while */
   int resultado; /* Armazena o resultado da divisão de numero por numeroAoContrario. Caso seja 1, saberemos que é o mesmo valor */

    system("cls"); /* Limpa o prompt de comando */

    cout << "*------------------------------*\n";
    cout << "   IDENTIFICANDO UM PALINDROMO";
    cout << "\n*------------------------------*\n\n";

   cout << "Informe um valor inteiro de 5 digitos: ";
   cin >> numero;

   auxiliar = numero;

   while( contador <= 5 ) /* Enquanto contador menor ou igual a 5 */
   {
        algarismoDeNumero = numero % 10;

        if( contador == 1 )
            numeroAoContario =  numeroAoContario + algarismoDeNumero * 10000;
        else if( contador == 2 )
            numeroAoContario = numeroAoContario + algarismoDeNumero * 1000;
        else if( contador == 3 )
            numeroAoContario = numeroAoContario + algarismoDeNumero * 100;
        else if( contador == 4 )
            numeroAoContario = numeroAoContario + algarismoDeNumero * 10;
        else if( contador == 5 )
            numeroAoContario = numeroAoContario + algarismoDeNumero * 1;

        numero = numero / 10;
        contador++;
   }

    numero = auxiliar;
    resultado = numero / numeroAoContario;

    if( resultado == 1 )
        cout << "\nO valor informado e um palindromo!" << endl;
    else cout << "\n O valor informado NAO e um palindromo!" << endl;
    return 0;
}