#include <iostream>

#include "Fichier.h"

using namespace std;

int main()
{
   Fichier sap = Fichier::getInstance();

   sap.write("asfsdjiao");
}