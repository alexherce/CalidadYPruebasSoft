#include <iostream>
#include "cifrado.h"

int main()
{
  string word = "RLCOPY";
  string cesar, vigenere;
  Cifrado cif;
  cif.cargar_diccionario();
  cif.cargar_encriptado(cesar, vigenere);


  cout << "Cesar: " + cesar << endl;
  cout << "Vigenere: " + vigenere << endl << endl;
  cout << "-------------------------------" << endl;

  cout << "Frase desencriptada:" << endl << cif.vigenere_decrypt(vigenere, cif.cesar_decrypt(cesar, 1)) << endl;

  return 0;
}
