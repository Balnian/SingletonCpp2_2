#pragma once

#include <string>
#include <fstream>
#include <memory>

using namespace std;

class Fichier
{
   static fstream file;
   Fichier();
   //static Fichier * Instance;
public:
   static Fichier& getInstance();

   void write(string str);
   ~Fichier();

};



