#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <sstream>

using namespace std;

int main2() {

	//cout << "coucou\n";
	string nomFichierSource;

	nomFichierSource = "nomcsv.csv";


	ifstream fichierSource(nomFichierSource, ios::in);
	ofstream fichierDest("FichierOut.xml");
	fichierDest << "<" + nomFichierSource + ">\n";

	if (fichierSource) {
		string ligne, ligneParLigne;
		list<string> ligneExplosee, colonnes;
		bool premiereLigne = true;
		cout << "ouverture fichier OK!\n";

		while (getline(fichierSource, ligneParLigne)) {    //ligne par ligne fichier
			stringstream tempSs = stringstream(ligneParLigne);
			while (getline(tempSs, ligne, ';')) {
				if (premiereLigne) {
					colonnes.push_back(ligne);
				} else {
					ligneExplosee.push_back(ligne);
					cout << ligne << "\n";
				}
			}
			premiereLigne = false;
			list<string>::iterator ci, li;
			for (ci = colonnes.begin(), li = ligneExplosee.begin(); (ci != colonnes.end()) && (li != ligneExplosee.end()); ci++, li++) {
				fichierDest << "\t<" << *ci << ">" << *li << "</" << *ci << ">\n";
			}
			ligneExplosee.clear();
		}
		fichierSource.close();
		fichierDest << "</" + nomFichierSource + ">\n";
		fichierDest.close();
	} else {
		cout << "Erreur ouverture de fichier!\n";
	}
	return 1;
}