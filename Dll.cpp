#include "pch.h"
#include "Dll.h"

string Vardenis = "Mantas";
string Vardenio = "Manto";
string Pavardenis = "Janusas";

void funkcija() {
	cout << "Funkcija veikia" << endl;
}

std::chrono::duration<double> Laiko_skaiciavimo_funkcija(std::chrono::steady_clock::time_point start, std::chrono::steady_clock::time_point end) {
	std::chrono::duration<double> diff;
	diff = end - start;
	return diff;
}

void Paskyros_darbo_laikas(string vardas, string diena1, string diena2, string laikas1, string laikas2) {
	string eilute;
	eilute = "net user " + vardas + " /time:" + diena1 + "-" + diena2 + "," + laikas1 + "-" + laikas2;
	system(eilute.c_str());
	//system("pause");

	// net user naudotojo_vardas /time:all (prieigos apribojimai nuimami, iðtrinami komanda)
}

void Paskyros_darbo_laiko_atstatymas(string vardas) {
	string eilute;
	eilute = "net user " + vardas + " /time:all";
	system(eilute.c_str());
	system("pause");

}

void Aplankalu_kurimas() {
	//const char k = '"';
	string c = "\"C:/";
	//system(("mkdir " + Pavardenis).c_str());
	//system(("mkdir " + Vardenio + Vardenis).c_str());


	//string eil = "mkdir " + c + Pavardenis + "\"";
	string eil = "mkdir " + Pavardenis;
	system(eil.c_str());
	//cout << eil.c_str() << endl;
	for (int i = 0; i < 3; i++) {
		//eil = "mkdir "+ c + Pavardenis + "/" + Vardenis + std::to_string(i + 1) + "\"";
		eil = "cd " + Pavardenis + " & mkdir " + Vardenis + std::to_string(i + 1);
		system(eil.c_str());
		//cout << eil.c_str() << endl;

		for (int j = 0; j < 3; j++) {
			//eil = "mkdir " + c + Pavardenis + "/" + Vardenis + std::to_string(i + 1) + "/" + Vardenio + std::to_string(i+1) + Vardenis + std::to_string(j+1) + "\"";
			eil = "cd " + Pavardenis + "/" + Vardenis + std::to_string(i + 1) + " & mkdir " + Vardenio + std::to_string(i + 1) + Vardenis + std::to_string(j + 1);
			system(eil.c_str());
			//cout << eil.c_str() << endl;
		}
	}
	/*
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	string eil = "C:/" + Pavardenis;
	std::wstring widestr = std::wstring(eil.begin(), eil.end());
	const wchar_t* widecstr = widestr.c_str();

	_wmkdir(widecstr); // sukuriamas pavardes aplankas

	//sukuriami 3 aplankalai

	for(int i=0; i<3; i++){
		eil = "C:/" + Pavardenis + "/" + Vardenis + std::to_string(i+1);
		widestr = std::wstring(eil.begin(), eil.end());
		widecstr = widestr.c_str();
		_wmkdir(widecstr); // sukuriamas aplankas viduje pavardes aplanko

		for (int j=0; j<3; j++){
			eil = "C:/" + Pavardenis + "/" + Vardenis + std::to_string(i+1) +"/" + Vardenio + std::to_string(i+1) + Vardenis + std::to_string(j+1);
			widestr = std::wstring(eil.begin(), eil.end());
			widecstr = widestr.c_str();
			_wmkdir(widecstr); // sukuriamas aplankas viduje pavardes aplanko
		}
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	*/

	//system("pause");


	//system(("cd " + Pavardenis).c_str());
	//system(("mkdir " + Vardenio + Vardenis).c_str());

}

void Failu_kurimas() {
	string failas = "MJfailas.txt";
	string eil1 = "cd " + Pavardenis;
	string eil2 = " & type nul > ";
	string eilute = "";

	system((eil1 + eil2 + failas).c_str()); // sukuriamas failas pagrindiniame aplankale
// cd C:\Users\manta\Desktop\programavimas & FOR /D /r %G in ("*") DO cd "%CD%\%~nxG" & type nul > tekstinis.txt
	//eilute = eil1 + " & FOR /D /r %G in (\"*\") DO cd \"%CD%/%~nxG\"" + eil2 + failas;
	//system(eilute.c_str());

	//system("mkdir datamano");
	//system("cd datamano & mkdir data1mano");

	/////
	//eilute = eil1 + " & FOR /D %G in (*) DO cd \"%CD%\\Janusas\\%~nxG\" & type nul > " + failas;
	eilute = eil1 + " & FOR /D %G in (*) DO cd \"%CD%\\Janusas\\%~nxG\" & type nul > " + failas; // tekstinio failo kurimas pagrindinio failo aplankaluose
	system(eilute.c_str());


	eil1 = "cd " + Pavardenis + "/" + "Mantas1";
	eilute = eil1 + " & FOR /D %G in (*) DO cd \"%CD%\\Janusas\\Mantas1\\%~nxG\" & type nul > " + failas;
	system(eilute.c_str());

	eil1 = "cd " + Pavardenis + "/" + "Mantas2";
	eilute = eil1 + " & FOR /D %G in (*) DO cd \"%CD%\\Janusas\\Mantas2\\%~nxG\" & type nul > " + failas;
	system(eilute.c_str());

	eil1 = "cd " + Pavardenis + "/" + "Mantas3";
	eilute = eil1 + " & FOR /D %G in (*) DO cd \"%CD%\\Janusas\\Mantas3\\%~nxG\" & type nul > " + failas;
	system(eilute.c_str());

}

double Tsrinhauseno_f(double x, int F) {
	double y = sqrt(x * x * x + 3 * (x * x) - F);
	return y;
}

double Tsrinhauseno_tikrinimas(double x, int F) {
	double y = x * x * x + 3 * (x * x) - F;
	return y;
}

void irasymas_i_faila(double x, double y, int kelintas) {
	string direktorija;
	if (kelintas == 0) {
		direktorija = "cd Janusas & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
		//cout << direktorija.c_str() << endl;
	}
	else if (kelintas == 1) {
		direktorija = "cd Janusas/Mantas1 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 2) {
		direktorija = "cd Janusas/Mantas2 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 3) {
		direktorija = "cd Janusas/Mantas3 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 4) {
		direktorija = "cd Janusas/Mantas1/Manto1Mantas1 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 5) {
		direktorija = "cd Janusas/Mantas1/Manto1Mantas2 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 6) {
		direktorija = "cd Janusas/Mantas1/Manto1Mantas3 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 7) {
		direktorija = "cd Janusas/Mantas2/Manto2Mantas1 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 8) {
		direktorija = "cd Janusas/Mantas2/Manto2Mantas2 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 9) {
		direktorija = "cd Janusas/Mantas2/Manto2Mantas3 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 10) {
		direktorija = "cd Janusas/Mantas3/Manto3Mantas1 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 11) {
		direktorija = "cd Janusas/Mantas3/Manto3Mantas2 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}
	else if (kelintas == 12) {
		direktorija = "cd Janusas/Mantas3/Manto3Mantas3 & echo " + std::to_string(x) + "  " + std::to_string(y) + " >> MJfailas.txt";
		system(direktorija.c_str());
	}

}

void Tsrinhauseno_funkcija(int F, int x0, int xn, double deltax) {
	double x = x0 * 1.0;
	double y;
	int kelintas = 0; // i kelinta faila reikia irasyti

	//Failu_kurimas(); // failams isvalyti ir sukurti jei dar nera sukurta

	while (x < double(xn)) {
		if (Tsrinhauseno_tikrinimas(x, F) < 0.0) {
			while (Tsrinhauseno_tikrinimas(x, F) < 0.0) {
				if (deltax > 0.00001) {
					x += deltax;
				}
				else {
					if (Tsrinhauseno_tikrinimas(x + 1, F) < 0.0)
					{
						x += 1;
					}
					else
						if (Tsrinhauseno_tikrinimas(x + 0.5, F) < 0.0)
						{
							x += 0.5;
						}
						else
							if (Tsrinhauseno_tikrinimas(x + 0.1, F) < 0.0)
							{
								x += 0.1;
							}
							else
								if (Tsrinhauseno_tikrinimas(x + 0.01, F) < 0.0)
								{
									x += 0.01;
								}
								else
									if (Tsrinhauseno_tikrinimas(x + 0.001, F) < 0.0)
									{
										x += 0.001;
									}
									else
										if (Tsrinhauseno_tikrinimas(x + 0.0001, F) < 0.0)
										{
											x += 0.0001;
										}
										else
											if (Tsrinhauseno_tikrinimas(x + 0.00001, F) < 0.0)
											{
												x += 0.00001;
											}
											else x += deltax;
				}
			}
		}
		else if (Tsrinhauseno_tikrinimas(x, F) > 0.0) {
			y = Tsrinhauseno_f(x, F);
			//cout << x << " ; " << y << "\n";
			irasymas_i_faila(x, y, kelintas);
			kelintas++;
			if (kelintas == 13) kelintas = 0; // kai pasiekiamas failu limitas pradedama rasyti i nauja faila
			//cout << x << " ; " << -y << "\n";
			irasymas_i_faila(x, -y, kelintas);
			kelintas++;
			if (kelintas == 13) kelintas = 0;

			x += deltax;
		}
		else {
			y = Tsrinhauseno_f(x, F);
			//cout << x << " ; " << y << "\n";
			x += deltax;
		}
	};
}

void Failu_trynimas() {
	string eil = "cd Janusas & for /R %F in (*.txt) do del \"%F\"";
	system(eil.c_str());

}

void Failu_liejimas(int F) {
	string failopav = "output" + std::to_string(F) + ".txt";
	string eil = "type nul > " + failopav;
	system(eil.c_str());
	eil = "cd Janusas & for /R %F in (*.txt) do if not \"%~nxF\"==\"output.txt\" type \"%F\" >> ../" + failopav;
	system(eil.c_str());
	Failo_rusiavimas(failopav);
	//Failo_rusiavimas_su_komandine_eilute(failopav);

}


void Failo_rusiavimas(string failopav) {
	std::vector<data> taskai;
	data tsk;
	std::ifstream myfile1(failopav);
	while (!myfile1.eof()) {
		myfile1 >> tsk.x;
		myfile1 >> tsk.y;
		//cout << tsk.x << " " <<  tsk.y << endl;
		taskai.push_back(tsk);
		std::sort(taskai.begin(), taskai.end(), [](data a, data b) {
			return a.x < b.x;
			});

	}
	taskai.shrink_to_fit();
	//cout << endl;
	//for (const auto& el : taskai) {
	//	cout << el.x << " " << el.y << endl;
	//}
	myfile1.close();

	std::ofstream myfile;
	myfile.open(failopav);
	for (const auto& el : taskai) {
		myfile << el.x << " ; " << el.y << "\n";
	}
	myfile.close();
	taskai.clear();
}

void Failo_rusiavimas_su_komandine_eilute(string failopav) {
	string eil = "sort " + failopav + " /O" + failopav;
	system(eil.c_str());
}

void Aplankalu_trynimas() {
	system(("rmdir /s " + Pavardenis).c_str());

}

void Naudotojo_informacija(string naudotojo_vardas) {
	string eil = "net user " + naudotojo_vardas;
	system(eil.c_str());
	system("pause");
}

void pasirinkimai() {
	cout << "--------------------------------------------------" << "\n";
	cout << "------------------Manto-programa------------------" << "\n";
	cout << "--------------------------------------------------" << "\n";
	cout << "\n";
	cout << "Iveskite pasirinkima (skaiciu): " << "\n";
	cout << "\n";
	cout << "1. Paleisti automatiskai." << "\n";
	cout << "2. Apriboti darbo prie kompiuterio laika naudotojui." << "\n";
	cout << "3. Parodyti naudotojo informacija." << "\n";
	cout << "4. Sukurti darbiniu aplankalu struktura." << "\n";
	cout << "5. Sukurti tuscius .txt failus." << "\n";
	cout << "6. Apskaiciuoti [x,y] tasku poras pasirinktoms reiksmems ir irasyti i failus." << "\n";
	cout << "7. Sulieti [x,y] rezultatus i viena faila." << "\n";
	cout << "8. Istrinti nebereikalingus aplankalus ir failus." << "\n";
	cout << "9. Informacija apie programa." << "\n";
	cout << "0. Baigti programos darba." << "\n";
	cout << "\n";
	cout << "--------------------------------------------------" << "\n";
	cout << "--------------------------------------------------" << "\n";
	cout << "\n";
}

//bool operator>(const data& a, const data& b) {
//	return a.x > b.x;
//}