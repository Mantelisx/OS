#pragma once

#ifndef _DLL_H_
#define _DLL_H_

#include <iostream>
#include <chrono>
#include <random>
//#include <iomanip>
#include <Windows.h>
#include <filesystem>
#include <sys/stat.h>
#include <wchar.h>
#include <stdio.h>
#include <string>
//#include <cmath>
#include <fstream>
#include <vector>



#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct data {
	double x = 0.0;
	double y = 0.0;
};


using hrClock = std::chrono::high_resolution_clock;
//typedef std::uniform_int_distribution<int> int_distribution;

extern "C" DLL_API void funkcija();
// 1 uþduotis
extern "C" DLL_API std::chrono::duration<double> Laiko_skaiciavimo_funkcija(std::chrono::steady_clock::time_point start, std::chrono::steady_clock::time_point end);
// 2 uþduotis
extern "C" DLL_API void Paskyros_darbo_laikas(string vardas, string diena1, string diena2, string laikas1, string laikas2);
extern "C" DLL_API void Paskyros_darbo_laiko_atstatymas(string vardas);
// 3 uþduotis
extern "C" DLL_API void Aplankalu_kurimas();

extern "C" DLL_API void Failu_kurimas();
extern "C" DLL_API void Failu_trynimas();

// 4 uþduotis
extern "C" DLL_API double Tsrinhauseno_f(double x, int F);
extern "C" DLL_API double Tsrinhauseno_tikrinimas(double x, int F);
extern "C" DLL_API void Tsrinhauseno_funkcija(int F, int x0, int xn, double deltax);
extern "C" DLL_API void irasymas_i_faila(double x, double y, int kelintas);

// 5 uþduotis
extern "C" DLL_API void Failu_liejimas(int F);
extern "C" DLL_API void Failo_rusiavimas(string failopav);

// 6 uþduotis
extern "C" DLL_API void Aplankalu_trynimas();

extern "C" DLL_API void pasirinkimai();
extern "C" DLL_API void Naudotojo_informacija(string naudotojo_vardas);


//extern "C" DLL_API bool operator>(const data & a, const data & b);

#endif