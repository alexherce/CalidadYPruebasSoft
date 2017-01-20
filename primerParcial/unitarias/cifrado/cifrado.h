#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Cifrado
{
  public:
    string key;
    vector<string> dict;
    vector<string> textoEncriptado;
    int cargar_diccionario();
    int cargar_encriptado(string & cesar, string & vigenere);
    string cesar_decrypt(string word, int key);
    string vigenere_decrypt(string text, string key);
};

int Cifrado::cargar_diccionario()
{
  int count = 0;
  string line;

  ifstream myfile ("../cifrado/diccionario.txt");
    if ( myfile.is_open() )
    {
         while ( ! myfile.eof() )
         {
               getline (myfile, line);
               dict.push_back(line);
               count++;
         }
         myfile.close();
    }else{
          cout << "Unable to open file." << endl;
          return 0;
    }
    cout << "Diccionario | Lineas cargadas: " << count << endl;
    return 1;
}

string Cifrado::cesar_decrypt(string word, int key)
{
  char ch;
  string result;
  string original = word;
  int keyAct = key;
  char cipher[word.length()];
  strcpy(cipher, word.c_str());
  int i;

  for (int i=0; i < strlen(cipher); i++)
    {
        if (cipher[i] >= 'A' && cipher[i] <= 'Z')
        {
            cipher[i] = (char)(((cipher[i] - key - 'A' + 26) % 26) + 'A');
        }
        else if (cipher[i] >= 'a' && cipher[i] <= 'z')
        {
            cipher[i] = (char)(((cipher[i] - key - 'a' + 26) % 26) + 'a');
        }
    }

    string str(cipher);
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if(std::find(dict.begin(), dict.end(), str) != dict.end())
    {
      transform(str.begin(), str.end(), str.begin(), ::toupper);
      cout << str << endl;
      return str;
    } else {
      if (key < 27)
      {
        return cesar_decrypt(original, key + 1);
      } else {
        return "Error!";
      }
    }
}

int Cifrado::cargar_encriptado(string & cesar, string & vigenere)
{
  int count = 0;
  string line;

  ifstream myfile ("../cifrado/encriptado.txt");
    if ( myfile.is_open() )
    {
         while ( ! myfile.eof() )
         {
               getline (myfile, line);
               if (!line.empty()) {
                 textoEncriptado.push_back(line);
                 count++;
                }
         }
         myfile.close();
    }else{
          cout << "Unable to open file." << endl;
          return 0;
    }
    cout << "Encriptado | Lineas cargadas: " << count << endl;

    cesar = textoEncriptado[0];
    vigenere = textoEncriptado[1];

    return 1;
}

string Cifrado::vigenere_decrypt(string text, string key)
{
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
    std::transform(key.begin(), key.end(), key.begin(), ::toupper);

    string out;

    for(int i = 0, j = 0; i < text.length(); ++i)
    {
      char c = text[i];

      if(c >= 'a' && c <= 'z')
        c += 'A' - 'a';
      else if(c < 'A' || c > 'Z')
        continue;

      out += (c - key[j] + 26) % 26 + 'A';
      j = (j + 1) % key.length();
    }

    return out;
}
