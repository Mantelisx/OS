// AppWithDll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
#include "../Dllas/Dll.h"

int main()
{
    auto start1 = hrClock::now();
    string pasirinkimas;
    pasirinkimai();
    do {
        cin >> pasirinkimas;
        if (pasirinkimas == "1") {
            // skaièiuoja laikà
            auto start = hrClock::now();
            start1 = start;

            // 2.1 uþduotis
            Paskyros_darbo_laikas("MTest", "M", "Su", "18:00", "20:00");
            auto end = hrClock::now();
            //std::chrono::duration<double> diff = end - start;
            //cout << "Laiko tarpas: " << diff.count() << " s\n";

            cout << "--------------------------------------------------" << "\n";
            cout << "Naudotojo laiko prie kompiuterio apribojimo modifikavimo funkcijos vykdymas uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";

            start = hrClock::now();
            Aplankalu_kurimas();
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Aplankalu kurimo funkcijos vykdymas uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";

            start = hrClock::now();
            Failu_kurimas();
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Failu (.txt) kurimo funkcijos vykdymas uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";
            ////////////////////////////////////////////////
            double deltax = 2110242 / 10000000.0;
            start = hrClock::now();
            Tsrinhauseno_funkcija(-2, -7, 17, deltax);
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Tsrinhauseno funkciju vykdymas (skaiciavimas su zingsniu " + std::to_string(deltax) + " ir F = -2) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";

            start = hrClock::now();
            Failu_liejimas(-2);
            Failu_trynimas();
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Failu liejimas ir tarpiniu failu istrynimas, kai F = -2) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";
            ////////////////////////////////////////////////
            Failu_kurimas();
            start = hrClock::now();
            Tsrinhauseno_funkcija(-1, -7, 17, deltax);
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Tsrinhauseno funkciju vykdymas (skaiciavimas su zingsniu " + std::to_string(deltax) + " ir F = -1) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";

            start = hrClock::now();
            Failu_liejimas(-1);
            Failu_trynimas();
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Failu liejimas ir tarpiniu failu istrynimas, kai F = -1) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";
            ////////////////////////////////////////////////
            Failu_kurimas();
            start = hrClock::now();
            Tsrinhauseno_funkcija(0, -7, 17, deltax);
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Tsrinhauseno funkciju vykdymas (skaiciavimas su zingsniu " + std::to_string(deltax) + " ir F = 0) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";

            start = hrClock::now();
            Failu_liejimas(0);
            Failu_trynimas();
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Failu liejimas ir tarpiniu failu istrynimas, kai F = 0) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";
            ////////////////////////////////////////////////
            Failu_kurimas();
            start = hrClock::now();
            Tsrinhauseno_funkcija(1, -7, 17, deltax);
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Tsrinhauseno funkciju vykdymas (skaiciavimas su zingsniu " + std::to_string(deltax) + " ir F = 1) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";

            start = hrClock::now();
            Failu_liejimas(1);
            Failu_trynimas();
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Failu liejimas ir tarpiniu failu istrynimas, kai F = 1) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";
            ////////////////////////////////////////////////
            Failu_kurimas();
            start = hrClock::now();
            Tsrinhauseno_funkcija(2, -7, 17, deltax);
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Tsrinhauseno funkciju vykdymas (skaiciavimas su zingsniu " + std::to_string(deltax) + " ir F = 2) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";

            start = hrClock::now();
            Failu_liejimas(2);
            Failu_trynimas();
            end = hrClock::now();

            cout << "--------------------------------------------------" << "\n";
            cout << "Failu liejimas ir tarpiniu failu istrynimas, kai F = 2) uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";
            ////////////////////////////////////////////////

            cout << "Ar norite istrinti nereikalingus aplankalus, failus? Y-taip, N-ne" << "\n";
            end = hrClock::now();
            Aplankalu_trynimas();


            //auto end = hrClock::now();
            //auto start = hrClock::now();
            //cout << "--------------------------------------------------" << "\n";
            //cout << "Aplankalu trynimo funkcijos vykdymas uztruko: " << Laiko_skaiciavimo_funkcija(start, end).count() << " s\n";

            cout << "--------------------------------------------------" << "\n";
            cout << "Visas programos darbo sugaistas laikas: " << Laiko_skaiciavimo_funkcija(start1, end).count() << " s\n";
            cout << "--------------------------------------------------" << "\n";

            cout << "\n";
            cout << "--------------------------------------------------" << "\n";
            cout << "Ar norite testi? (iveskite skaiciu) 1-Taip, 0-Ne" << "\n";
            cin >> pasirinkimas;
            cout << "\n";
        }
        else if (pasirinkimas == "2") {
            cout << "Jei norite apriboti laika irasykite - 1, jei norite pasalinti apribojimus irasykite - 0." << "\n";
            cin >> pasirinkimas;
            if (pasirinkimas == "1") {
                string vardas;
                cout << "Iveskite naudotojo varda: " << "\n";
                cin >> vardas;
                string diena1;
                cout << "Iveskite pasirinktos savaites diena (nuo): (M, T, W, Th, F, Sa, Su)" << "\n";
                cin >> diena1;
                string diena2;
                cout << "Iveskite pasirinktos savaites diena (iki): (M, T, W, Th, F, Sa, Su)" << "\n";
                cin >> diena2;
                string laikas1;
                cout << "Iveskite pasirinkta laika (nuo): formatas (hh:mm)" << "\n";
                cin >> laikas1;
                string laikas2;
                cout << "Iveskite pasirinkta laika (iki): formatas (hh:mm)" << "\n";
                cin >> laikas2;
                Paskyros_darbo_laikas(vardas, diena1, diena2, laikas1, laikas2);
            }
            else {
                string vardas;
                cout << "Iveskite naudotojo varda: " << "\n";
                cin >> vardas;
                Paskyros_darbo_laiko_atstatymas(vardas);
            }
            pasirinkimas = "2";
        }
        else if (pasirinkimas == "3") {
            string vardas;
            cout << "Iveskite naudotojo varda: " << "\n";
            cin >> vardas;
            Naudotojo_informacija(vardas);
        }
        else if (pasirinkimas == "4") {
            Aplankalu_kurimas();
            cout << "Aplankalai sukurti" << "\n";
        }
        else if (pasirinkimas == "5") {
            Failu_kurimas();
            cout << "Failai sukurti" << "\n";
        }
        else if (pasirinkimas == "6") {
            int F; int x0; int xn; double deltax;
            cout << "Funkcija: F=(x^3)+3*(x^2)-(y^2)" << "\n";
            cout << "Iveskite F: " << "\n";
            cin >> F;
            cout << "Iveskite x0 (kairyji intervalo taska):" << "\n";
            cin >> x0;
            cout << "Iveskite xn (desinyji intervalo taska):" << "\n";
            cin >> xn;
            cout << "Iveskite delta(x) t.y. zingsni, kuriuo skaiciuojama funkcijos reiksme:" << "\n";
            cin >> deltax;
            Tsrinhauseno_funkcija(F, x0, xn, deltax);
            cout << "Skaiciavimai baigti" << "\n";
        }
        else if (pasirinkimas == "7") {
            cout << "Iveskite F, kuris buvo naudojamas (6 programos punkte) (Jis bus naudojamas failo pavadinimui sudaryti): " << "\n";
            int F;
            cin >> F;
            Failu_liejimas(F);
            cout << "Failu liejimas baigtas." << "\n";
        }
        else if (pasirinkimas == "8") {
        cout << "Jei norite istrinti visus .txt failus irasykite - 1, jei norite istrinti pagrindini aplankala irasykite - 0." << "\n";
        cin >> pasirinkimas;
            if (pasirinkimas == "0") {
                Aplankalu_trynimas();
                cout << "Pagrindinis aplankalas istrintas.." << "\n";
            }
            else {
                Failu_trynimas();
                cout << "Failai istrinti." << "\n";
            }
        pasirinkimas = "8";
        }
        else if (pasirinkimas == "9") {
        cout << "--------------------------------------------------" << "\n";
        cout << "------------------Manto-programa------------------" << "\n";
        cout << "--------------------------------------------------" << "\n";
        cout << "\n";
        cout << "Manto Januso programa, skirta atlikti ivairiems \nveiksmams su aplankalais ir tekstiniais failais \nbei Windows naudotojais. \nAciu :)" << "\n";
        cout << "\n";
        cout << "--------------------------------------------------" << "\n";
        cout << "--------------------------------------------------" << "\n";
        system("pause");
        }

        else if(pasirinkimas != "0") cout << "blogas ivedimas?" << "\n";

        if (pasirinkimas != "0") pasirinkimai();

    } while (pasirinkimas != "0");


    //cin.get();

    //Naudotojo_informacija("MTest");

    //Paskyros_darbo_laikas("MTest", "M", "Su", "18:00", "20:00");
    //cout << "darbo laikas pakeistas " << endl;
    //Paskyros_darbo_laiko_atstatymas("MTest");




    //cout << "aplanku kurimas baigtas " << endl;
    //Failu_kurimas();
    //cin.get();



    //Aplankalu_trynimas();
    //cout << "aplanku trynimas baigtas " << endl;
    /**/




   // std::cout << "Hello World!\n";
    //funkcija();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
