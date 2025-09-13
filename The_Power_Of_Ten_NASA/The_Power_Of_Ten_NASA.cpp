/*
The Power Of Ten NASA:

1.Avoid complex flow constructs, such as goto and recursion.
2.All loops must have fixed bounds.This prevents runaway code.
3.Avoid heap memory allocation after initialization.
4.Restrict functions to a single printed page.
5.Use a minimum average of two runtime assertions per function.
6.Restrict the scope of data to the smallest possible.
7.Check the return value of all non - void functions, or cast to void to indicate the return value is useless.
8.Use the preprocessor only for header files and simple macros.
9.Limit pointer use to a single dereference, and do not use function pointers.
10.Compile with all possible warnings active; all warnings should then be addressed before release of the software.

*/

#include <iostream>
#include <assert.h>
#include "tempsensor.hpp"
#include "Recursion_Function.hpp"
#include "signalsensor.hpp"
#include "Satellite.hpp"
#include "asserts.hpp"

void dastkari() {
	g_temp2 = 999;
	return;
}


int main() {

	// Rules 1:
	// Az sakhtar haye pichidehye jarian kar, manand goto ve recursion, ejtenab konid.
	// goto, setjmp, longjmp  va az kol Jump Statement ha estefade nakonid
	// Mesal:
	int temp = 0;
	start:
	temp = getTempFromSensor();
	if (temp > 100) {
		g_mWaterCooling = false;
	}
	goto start;
	
	clearTemp(); // In dige ejra nemishe !!!
	
	// Barname be halghe oftad
	// Ghavanin 1 nabayd az Jump Statement estefade kard

	// Estefade az Recursion Function ham mojaz nist:
	// Recursion Function chiye? Function haye bazghasti
	// Recursion = تابعی که خودش رو صدا می‌زنه

	// Dar algorithm ziad estefade mishe mesal dige nayaym
	// Loop to dar to benevisim miaym az in Function estefade mikonim
	// Eybi ke dare har bar ke Function khodesh ro Call mikone
	// Masraf Hafeze bishtar mishe (Ram por mishe)!!!
	// Definition in Function ro bebin
	add(5);
	// Injur Function ha ham mamnoe nemishe estefade kard

	//---------------------------------------------------------//

	// Rules 2:
	// Halghe ha nabayad bi nahayat ejra shan
	// Har halghe bayad yek Fixed UpperBound dashte bashe:

	int receivedSignal = getSignalFromSensor();

	while (receivedSignal != '\0') 
	{
		// In halghe ehtemal ziad age Signal Null nabashe 
		// Ejra mishe bi nahayat
		// Bayad yek kari konim joloye injur Loop haro begirim
	}
	// Mesal:
	// Injuri bayad jolosho begiri mesal 10 bar faghat ejra she!!!
	int upperBound = 1;
	while (receivedSignal != '\0' && upperBound <= 10) 
	{
		upperBound++;
	}

	//---------------------------------------------------------//

	// Rules 3:
	// Estefade az fazaye Heap kamelan mamnoe'
	// Function malloc() nabayad estefade konim
	// In malloc() baraye estefade az hafeze Heap hast
	// Age hafeze Heap ja nadashte bashe be ma NULL bar migardune
	/*
	    Nabayad az in Function ha estefade konim:
	calloc
	malloc
	realloc
	free
	*/

	//---------------------------------------------------------//

	// Rules 4:

	// Ghavanin 4 mige
	// Hich Function nabayad bishtar az 60 Line bashe !!!

	// Va hich Function nabayad chand kar anjam bede
	// Toye in function zir 2 ta kar dare anjam mishe bebin
	// Definition sho 
	checkSatellite();

	//---------------------------------------------------------//

	// Rules 5:
	// In payin man yek arraye daram
	// Age in arraye hichi nadashte bashe Null bashe 
	// Barname be ham mirize 
	// Pas bayad hame chizo ba assert() check konim
	const char str[] = "Satellite is fix";
	assert(str != NULL);
	int x = strlen(str);

	// Har function bayad hadaghal ba 2 ta assert() barresi beshe:
	divide(0, 0); // Definition in ro negah kon

	//---------------------------------------------------------//

	// Rules 6:
	// In ghavanin mige agha Global Variable estefade nakon gheyr Constant
	// Chon hameja mishe dast rasi peyda kard behesh
	// Shayad ye jaye gheyr momken dast kari beshe ba'ad kol barname
	// Be ham mirize
	// Mesal:
	g_temp2 = 200;
	dastkari();
	if (g_temp2 == 200) 
	{
		std::cout << "Enable\n"; // In statement hich vaght ejra nemishe
	}

	//---------------------------------------------------------//

	// Rules 7:
	// Mige return haye Function ro hamishe check kon bebin eshtebah nabashe
	// returnValue function haro ghabl az estefade barresi kon
	if (getTempFromSensor() == 20) 
	{
		std::cout << "Fixed!" << '\n';
	}

	//---------------------------------------------------------//

	// Rules 8:

	// Dar in ghavanin mige az Preprocessor haye Sharti estefade nakon!
	// #define Mojaz
	// #include Mojaze
	// Vali 
	// #if Mojaz nist!
	// #elif Mojaz nist!
	// #else Mojaz nist!
	// #endif Mojaz nist!

	//---------------------------------------------------------//

	// Rules 9:
	// In ghavanin mige az Pointers haye single dereference 
	// Faghat estefade kon
	// Ya'ni chi?
	// Mesal:
	// In code payini okeye
	int x = 50;
	int* p = &x;

	// Vali biaym yek pointe dige dashte bashim ke on be p eshare kon onam
	// Be yeki dige eshare kon onam be x in mojaz nist
	// Mesal:
	int i = 50;
	int* p2 = &i;
	int** pp = &p2; 

	// Dar vaghe yek Pointer bayad Single Dereference bashe
	// Mostaghim be Variable nahayi eshare kone 

	//---------------------------------------------------------//

	// Rules 10:
	
	// Vaghti barname minevisim yek seri Warning behemun miyad
	// Vali tavajoh nemikonim faghat Error haye asli Fix mikonim
	// In ghavanin mige ghabl az Compile shodan nahayi bayad hameye
	// Warning ha Error ha harchi bashe bayad Fix bashe !!!




	return 0; 
}