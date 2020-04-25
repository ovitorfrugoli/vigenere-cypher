/*******************************************************************************
* FILENAME :        main.c
*
* DESCRIPTION :
*       Main module.
*
* NOTES :
*       -
*
*
*/

/*
*  Modules
 */
#include "modules/includes.h"
#include "modules/functions.h"
#include "modules/utils.h"
#include "modules/visual.h"
#include "modules/cryptography.h"


/*
*  Main Callback
 */
int main(int argc, char const *argv[])
{
	bool showMenu = true;

	ShowBanner();
	ShowRules();

	while (showMenu) 
	{
		showMenu = ShowMenu();
	}

	system("pause");
	return 0;
}
