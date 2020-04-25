/*******************************************************************************
* FILENAME :        modules/functions.h
*
* DESCRIPTION :
*       Module that starts functions first.
*
* NOTES :
*       -
*
*
*/

/*
*  Visual module functions.
 */
void ShowBanner();
void ShowRules();
bool ShowMenu();
bool MenuFunctions(char optionChoosed);

/*
*  Utils module functions.
 */
void GetTextToEncrypt(char *textToEncrypt);
void GetTextEncryptKey(char *encryptKey);
void GetEncryptText(char *encryptText);
void ReadInput(char *input);
void WordToUpper(char *word);
void FormatTextToEncrypt(char *text);
void QuitProgram();

/*
*  Cryptography module functions.
 */
char *DecryptWord(char *wordToDecrypt, char *encryptKey);
char *CryptWord(char *wordToEncrypt, char *encryptKey);
void FormatInputs(char *wordToEncrypt, char *encryptKey);
