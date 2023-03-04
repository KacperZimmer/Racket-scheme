//
//  main.cpp
//  zadania c++
//
//  Created by Kacper Zimmer on 28/02/2023.
//
#include <iostream>
using namespace std;

int drwSqr(int n){
    // zad 2
    for (int i = 1; i <= n * n; i++){
        cout << "X ";
        if (i % n == 0){
            cout << endl;
        }
    }
    return 0;
}

int masa(){
//zad 3
    int waga;
    cout << "Ile ważysz? ";
    cin >> waga;
    return 100 - waga;
}

int arytmetyka(int n){
    //zad 4
    int x;
    int y;
    cout << "Podaj liczbe x";
    cin >> x;
    
    cout << "Podaj liczbe y";
    cin >> y;
    
    cout << x + y;
    cout << x - y;
    cout << x / y;
    cout << x * y;
    
    return 0;
    
    
}

int asciiPos(){
    //zad 5

    int liczba;

    cout << "Podaj liczbe (0-256): ";
    cin >> liczba;

    char znak = static_cast<char>(liczba);
    cout << "Znak ASCII dla liczby " << liczba << " to " << znak << std::endl;

    return 0;


}

int wiek(){
    //zad 8
    int wiek;
    cout << "Podaj swój wiek";
    cin >> wiek;
    
    if (wiek < 18){
        cout << "Jesteś Niepełnoletni";
    }
    
    return 0;
}

int piciPolo(int n){
    //zad 9
    int usAnswer;
    cout << "Podaj liczbę z zakresu 1 - 10";
    cin >> usAnswer;
    
    if (usAnswer == n){
        cout << "Zgadles";
    }else{
        cout << "Nie zgadłeś";
    }
    return 0;
}

bool divisibility(int n){
    //zad 10
    if (n % 2 == 0 and n % 5 == 0 and n % 7 == 0)
        return true;
    
    return false;
}
int counting(int n){
    //zad 11/12
    int sum = 0;
    for (int i = 0; i <= n; i++ ){
        sum += i;
    }
    return sum;
}

int countingBackwords(int n){
    //zad 13
    int sum = 0;
    for (int i = n; i >= 0; i-- ){
        sum += i;
    }
    return sum;
}
int printX(int n){
    //zad 14
    for (int i = 1; i <= n; i++){
        cout << "x";
    }
    return 0;
    
    
}
int charLimit(){
    char c = 0;
        while (c < c + 1) {
            c++;
            cout << "Max value of char: " << static_cast<int>(c) << endl;
        }
  
        return 0;
}

int wczytywanie(int x){
    cout << x << endl;
    return 0;
    
}


void tabliczka(){
    int size = 9;
    int tab[9][9];
    int wynik;
    
    
    for (int i = 0; i != 2; i++){
        for (int j = 1; j <= size; j++){
            
            tab[i][j] = j;
            
        }
        
    }
    
    // mnozenie
    // [[1 2 4 5 2 3 2] [1 4 2 1 2 3 2 1]]
   
    

    
   
    
    for (int i = 1; i <= size; i++ ){
        for (int j = 1; j <= size; j++){
            wynik = i * j;
            tab[i - 1][j - 1] = wynik;
            cout << tab[i - 1][j - 1] << endl;
            
            
        }
    }
}








int main(int argc, const char * argv[]) {
    tabliczka();
    
    
    return 0;

}

