/*******************************************************************************
* FILENAME :        modules/cryptography.h
*
* DESCRIPTION :
*       Module that contains the cryptography logic.
*
* NOTES :
*       -
*
*
*/

/**
 * Descriptografa a palavra digitada.
 * 
 * @param wordToDecrypt  palavra a ser descriptografada.
 * @param encryptKey     chave utilizada para a criptografia.
 * @return               retorna a palavra descriptografada.
 * @author               Vitor Santos
 */
char *DecryptWord(char *wordToDecrypt, char *encryptKey)
{
	int i = 0;
	char *decryptWord = malloc(sizeof(char) + 128);

	free(decryptWord + 1);

	FormatInputs(wordToDecrypt, encryptKey);

	for(i = 0; i < strlen(wordToDecrypt); i++)
	{
		decryptWord[i] = (wordToDecrypt[i] - encryptKey[i % strlen(encryptKey)] + 26) % 26 + 'A';
	}

	decryptWord[i] = '\0';

	return decryptWord;
}

/**
 * Criptografa a palavra digitada.
 * 
 * @param wordToEncrypt  palavra a ser criptografada.
 * @param encryptKey     chave utilizada para a criptografia.
 * @return               retorna a palavra criptografada.
 * @author               Vitor Santos.
 */
char *CryptWord(char *wordToEncrypt, char *encryptKey)
{
	int i = 0;
	char *cryptWord = malloc(sizeof(char) + 128);

	free(cryptWord + 1);

	FormatInputs(wordToEncrypt, encryptKey);

	for(i = 0; i < strlen(wordToEncrypt); i++)
	{
		cryptWord[i] = ((wordToEncrypt[i] - 'A') + (encryptKey[i % strlen(encryptKey)] - 'A')) % 26 + 'A';
	}

	cryptWord[i] = '\0';

	return cryptWord;
}

/**
 * Formata as entradas no sistema.
 * 
 * @param wordToEncrypt  palavra a ser criptografada ou descriptografada.
 * @param encryptKey     chave utilizada para a criptografia.
 * @return               não retorna valores.
 * @author               Vitor Santos
 */
void FormatInputs(char *wordToEncrypt, char *encryptKey)
{
	WordToUpper(wordToEncrypt);
	WordToUpper(encryptKey);
	FormatTextToEncrypt(wordToEncrypt);
	FormatTextToEncrypt(encryptKey);
}