//alvina vania 140810180010
//tugas shift cipher code KRIPTO

#include <iostream> 
using namespace std; 
  
string encrypt(string text, int s) 
{ 
    string result = ""; 
  
    for (int i=0;i<text.length();i++) 
    { 
        if (isupper(text[i])) 
            result += char(int(text[i]+s-65)%26 +65); 
    else
        result += char(int(text[i]+s-97)%26 +97); 
    } 
    return result; 
} 

string decrypt(string text, int s) 
{ 
    string result = ""; 
  
    for (int i=0;i<text.length();i++) 
    { 
        if (isupper(text[i])) 
            result += char(int(text[i]-s-65)%26 +65); 
    else
        result += char(int(text[i]-s-97)%26 +97); 
    } 
    return result; 
} 
  
int main() 
{ 
    string text=""; 
    int s;
    cout << "ENKRIPSI dan DEKRIPSI KATA SHIFT CIPHER"<<endl;
    cout << "140810180010"<<endl;
    cout << "Masukan kata: "; cin >> text;
    cout << "Masukan berapa pergeseran(0-25): "; cin >> s;
    cout << "Ciphertext: " << encrypt(text, s)<<endl; 
    string c = encrypt(text,s);
    cout << "Plaintext: " << decrypt(c,s);
    return 0; 
}

