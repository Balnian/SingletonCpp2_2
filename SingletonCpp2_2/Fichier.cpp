#include "Fichier.h"

//Fichier* Fichier::Instance = NULL;

fstream Fichier::file;

Fichier::Fichier()
{
   try{
      file.open("UnFichier.txt",ios_base::out);
   }
   catch (...)
   {
      std::printf("U Fuck up");
   }
}


Fichier::~Fichier()
{
   file.close();
}

Fichier& Fichier::getInstance()
{
   static Fichier Instance;
   return Instance;
}

void Fichier::write(string str)
{
   if (file.is_open())
   {
      file << str << endl;
   }
   

}