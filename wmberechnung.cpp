#include <bits/stdc++.h>
using namespace std;

//la web: https://www.losmundialesdefutbol.com/selecciones.php

int main(){
  map<string, int> partidos_jugados;
  map<string, int> partidos_ganados;
  //partidos_ganados = jugados/ganados
      //si en k,n n>4: hacia arriba
      //si en k,n n<5: hacia abajo
  map<string, int> mundiales_ganados;

  //def partidos_jugados
  partidos_jugados.insert(pair<string, int> ("KATAR", 0));
  partidos_jugados.insert(pair<string, int> ("ECUADOR", 10));
  partidos_jugados.insert(pair<string, int> ("SENEGAL", 8));
  partidos_jugados.insert(pair<string, int> ("NIEDERLANDE", 50));
  
  partidos_jugados.insert(pair<string, int> ("ENGLAND", 69));
  partidos_jugados.insert(pair<string, int> ("IRAN", 15));
  partidos_jugados.insert(pair<string, int> ("USA", 33));
  partidos_jugados.insert(pair<string, int> ("WALES", 5));
  
  partidos_jugados.insert(pair<string, int> ("ARGENTINIEN", 81));
  partidos_jugados.insert(pair<string, int> ("SAUDI ARABIEN", 16));
  partidos_jugados.insert(pair<string, int> ("MEXIKO", 57));
  partidos_jugados.insert(pair<string, int> ("POLEN", 34));
  
  partidos_jugados.insert(pair<string, int> ("FRANKREICH", 66));
  partidos_jugados.insert(pair<string, int> ("AUSTRALIEN",16));
  partidos_jugados.insert(pair<string, int> ("DÄNEMARK",20));
  partidos_jugados.insert(pair<string, int> ("TUNESIEN", 15));
  
  partidos_jugados.insert(pair<string, int> ("SPANIEN", 63));
  partidos_jugados.insert(pair<string, int> ("COSTA RICA", 18));
  partidos_jugados.insert(pair<string, int> ("DEUTSCHLAND", 109));
  partidos_jugados.insert(pair<string, int> ("JAPAN", 21));

  partidos_jugados.insert(pair<string, int> ("BELGIEN", 48));
  partidos_jugados.insert(pair<string, int> ("KANADA", 3));
  partidos_jugados.insert(pair<string, int> ("MAROKKO", 16));
  partidos_jugados.insert(pair<string, int> ("KROATIEN", 23));

  partidos_jugados.insert(pair<string, int> ("BRASILIEN", 1));
  partidos_jugados.insert(pair<string, int> ("SERBIEN", 3));
  partidos_jugados.insert(pair<string, int> ("SCHWEIZ", 2));
  partidos_jugados.insert(pair<string, int> ("KAMERUN", 6));

  partidos_jugados.insert(pair<string, int> ("PORTUGAL", 30));
  partidos_jugados.insert(pair<string, int> ("GHANA", 12));
  partidos_jugados.insert(pair<string, int> ("URUGUAY", 56));
  partidos_jugados.insert(pair<string, int> ("SÜDKOREA", 34));



  //def partidos_ganados
  partidos_ganados.insert(pair<string, int> ("KATAR", 0)); // 0/0
  partidos_ganados.insert(pair<string, int> ("ECUADOR", 3)); //10/4
  partidos_ganados.insert(pair<string, int> ("SENEGAL", 3)); //8/3
  partidos_ganados.insert(pair<string, int> ("NIEDERLANDE", 2)); // 50/27
  
  partidos_ganados.insert(pair<string, int> ("ENGLAND", 2)); // 69/29
  partidos_ganados.insert(pair<string, int> ("IRAN", 8)); // 15/2
  partidos_ganados.insert(pair<string, int> ("USA", 4)); // 33/8
  partidos_ganados.insert(pair<string, int> ("WALES", 5)); // 5/1
  
  partidos_ganados.insert(pair<string, int> ("ARGENTINIEN", 2)); // 81/43
  partidos_ganados.insert(pair<string, int> ("SAUDI ARABIEN", 5)); // 16/3
  partidos_ganados.insert(pair<string, int> ("MEXIKO", 6)); // 57/16
  partidos_ganados.insert(pair<string, int> ("POLEN", 2)); // 34/16
  
  partidos_ganados.insert(pair<string, int> ("FRANKREICH", 2)); // 66/34
  partidos_ganados.insert(pair<string, int> ("AUSTRALIEN", 8)); // 16/2
  partidos_ganados.insert(pair<string, int> ("DÄNEMARK", 2)); // 20/9
  partidos_ganados.insert(pair<string, int> ("TUNESIEN", 8)); // 15/2
  
  partidos_ganados.insert(pair<string, int> ("SPANIEN", 2)); // 63/30
  partidos_ganados.insert(pair<string, int> ("COSTA RICA", 4)); // 18/5
  partidos_ganados.insert(pair<string, int> ("DEUTSCHLAND", 2)); // 109/67
  partidos_ganados.insert(pair<string, int> ("JAPAN", 4)); // 21/5

  partidos_ganados.insert(pair<string, int> ("BELGIEN", 2)); // 48/20
  partidos_ganados.insert(pair<string, int> ("KANADA", 0)); // 3/0
  partidos_ganados.insert(pair<string, int> ("MAROKKO", 8)); // 16/2
  partidos_ganados.insert(pair<string, int> ("KROATIEN", 2)); // 23/11

  partidos_ganados.insert(pair<string, int> ("BRASILIEN", 1)); // 109/77
  partidos_ganados.insert(pair<string, int> ("SERBIEN", 3)); // 46/18
  partidos_ganados.insert(pair<string, int> ("SCHWEIZ", 2)); // 37/16
  partidos_ganados.insert(pair<string, int> ("KAMERUN", 6)); // 23/4

  partidos_ganados.insert(pair<string, int> ("PORTUGAL", 2)); // 30/15
  partidos_ganados.insert(pair<string, int> ("GHANA", 3)); // 12/4
  partidos_ganados.insert(pair<string, int> ("URUGUAY", 2)); // 56/24
  partidos_ganados.insert(pair<string, int> ("SÜDKOREA", 6)); // 34/6


  
  //def mundiales_ganados
  mundiales_ganados.insert(pair<string, int> ("KATAR", 0));
  mundiales_ganados.insert(pair<string, int> ("ECUADOR", 0));
  mundiales_ganados.insert(pair<string, int> ("SENEGAL", 0));
  mundiales_ganados.insert(pair<string, int> ("NIEDERLANDE", 0));
  
  mundiales_ganados.insert(pair<string, int> ("ENGLAND", 1));
  mundiales_ganados.insert(pair<string, int> ("IRAN", 0));
  mundiales_ganados.insert(pair<string, int> ("USA", 0));
  mundiales_ganados.insert(pair<string, int> ("WALES", 0));
  
  mundiales_ganados.insert(pair<string, int> ("ARGENTINIEN", 2));
  mundiales_ganados.insert(pair<string, int> ("SAUDI ARABIEN", 0));
  mundiales_ganados.insert(pair<string, int> ("MEXIKO", 0));
  mundiales_ganados.insert(pair<string, int> ("POLEN", 0));
  
  mundiales_ganados.insert(pair<string, int> ("FRANKREICH", 2));
  mundiales_ganados.insert(pair<string, int> ("AUSTRALIEN", 0));
  mundiales_ganados.insert(pair<string, int> ("DÄNEMARK", 0));
  mundiales_ganados.insert(pair<string, int> ("TUNESIEN", 0));
  
  mundiales_ganados.insert(pair<string, int> ("SPANIEN", 1));
  mundiales_ganados.insert(pair<string, int> ("COSTA RICA", 0));
  mundiales_ganados.insert(pair<string, int> ("DEUTSCHLAND", 4));
  mundiales_ganados.insert(pair<string, int> ("JAPAN", 0));

  mundiales_ganados.insert(pair<string, int> ("BELGIEN", 0));
  mundiales_ganados.insert(pair<string, int> ("KANADA", 0));
  mundiales_ganados.insert(pair<string, int> ("MAROKKO", 0));
  mundiales_ganados.insert(pair<string, int> ("KROATIEN", 0));

  mundiales_ganados.insert(pair<string, int> ("BRASILIEN", 5));
  mundiales_ganados.insert(pair<string, int> ("SERBIEN", 0));
  mundiales_ganados.insert(pair<string, int> ("SCHWEIZ", 0));
  mundiales_ganados.insert(pair<string, int> ("KAMERUN", 0));

  mundiales_ganados.insert(pair<string, int> ("PORTUGAL", 0));
  mundiales_ganados.insert(pair<string, int> ("GHANA", 0));
  mundiales_ganados.insert(pair<string, int> ("URUGUAY", 2));
  mundiales_ganados.insert(pair<string, int> ("SÜDKOREA", 0));
  

  //calculador
  cout << "The code is running correctly!!!" << endl << endl;
  cout << "This is a code that, with two given states, gives you the probability of which will win. This is calculed with the number of maches played, won and world cups won. All the data has been extracted from: https://www.losmundialesdefutbol.com/selecciones.php" << endl << endl << endl;
  cout << "Remember to type all input in CAPITAL LETTERS and in GERMAN" << endl << endl;

  string a, b;
  cout << "state 1:  ";
  cin >> a;
  if((a=="ERROR" || a=="error" || a == "Error") || (a == "CANCEL" || a == "cancel" || a== "Cancel")){
    cout << "CANCELED" << endl;
    return 0;
  }else{}
  cout << "state 2:  ";
  cin >> b;
  if((b=="ERROR" || b=="error" || b == "Error") || (b == "CANCEL" || b == "cancel" || b== "Cancel")){
    cout << "CANCELED" << endl;
    return 0;
  }else{}
  cout << endl;
  
  int points_a=0, points_b=0;


  //partidos_jugados
  //partidos_ganados
  //mundiales_ganados

  if(partidos_jugados[a]>partidos_jugados[b]){
    points_a++;
  }else if(partidos_jugados[a]<partidos_jugados[b]){
    points_b++;
  }else if(partidos_jugados[a] == partidos_jugados[b]){
    points_a++;
    points_b++;
  }

  if(partidos_ganados[a]>partidos_ganados[b]){
    points_a++;
  }else if(partidos_ganados[a]<partidos_ganados[b]){
    points_b++;
  }else if(partidos_ganados[a] == partidos_ganados[b]){
    points_a++;
    points_b++;
  }

  if(mundiales_ganados[a]>mundiales_ganados[b]){
    points_a++;
  }else if(mundiales_ganados[a]<mundiales_ganados[b]){
    points_b++;
  }else if(mundiales_ganados[a] == mundiales_ganados[b]){
    points_a++;
    points_b++;
  }
  points_a = points_b;

  if(points_a > points_b){
    cout << "1.  " << a << endl;
    // cout << partidos_jugados[a] << endl;
    // cout << partidos_ganados[a] << endl;
    // cout << mundiales_ganados[a] << endl;
    cout << "2.  " << b << endl;
    // cout << partidos_jugados[b] << endl;
    // cout << partidos_ganados[b] << endl;
    // cout << mundiales_ganados[b] << endl;
  }else if(points_a<points_b){
    cout << "1.  " << b << endl;
    // cout << partidos_jugados[b] << endl;
    // cout << partidos_ganados[b] << endl;
    // cout << mundiales_ganados[b] << endl;
    cout << "2.  " << a << endl;
    // cout << partidos_jugados[a] << endl;
    // cout << partidos_ganados[a] << endl;
    // cout << mundiales_ganados[a] << endl;
  }else if(points_a == points_b){
    cout << "EMPATE" << endl;
    cout << a << endl;
    cout << partidos_jugados[a] << endl;
    cout << partidos_ganados[a] << endl;
    cout << mundiales_ganados[a] << endl;
    cout << endl;
    cout << b << endl;
    cout << partidos_jugados[b] << endl;
    cout << partidos_ganados[b] << endl;
    cout << mundiales_ganados[b] << endl;
    cout << endl;
  }
  else {cout << "ERROR" << endl;}

  cout << endl;
}