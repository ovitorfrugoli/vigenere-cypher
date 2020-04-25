/*******************************************************************************
* FILENAME :        modules/utils.h
*
* DESCRIPTION :
*       Util functions to the project.
*
* NOTES :
*       -
*
*
*/

/**
 * Armazena o texto a ser criptografado.
 * 
 * @param textToEncrypt  texto a ser criptografado.
 * @return               não retorna valores.
 * @author               Vitor Santos.
 */
void GetTextToEncrypt(char *textToEncrypt)
{
	while (strlen(textToEncrypt) < 4 || strlen(textToEncrypt) > 128)
	{
		printf("Texto para criptografar (4 a 128 caracteres): ");
		ReadInput(textToEncrypt);
	}
}

/**
 * Armazena a chave para criptografia/descriptografia.
 * 
 * @param encryptKey     chave utilizada para a criptografia/descriptografia.
 * @return               não retorna valores.
 * @author               Vitor Santos.
 */
void GetTextEncryptKey(char *encryptKey)
{
	while (strlen(encryptKey) < 4 || strlen(encryptKey) > 128)
	{
		printf("Chave de criptografia (4 a 128 caracteres): ");
		ReadInput(encryptKey);
	}
}

/**
 * Armazena o texto criptografado.
 * 
 * @param encryptText    texto criptografado a ser descriptografado.
 * @return               não retorna valores.
 * @author               Vitor Santos.
 */
void GetEncryptText(char *encryptText)
{
	while (strlen(encryptText) < 4 || strlen(encryptText) > 128)
	{
		printf("Texto criptografado (4 a 128 caracteres): ");
		ReadInput(encryptText);
	}
}

/**
 * Lê os textos inseridos.
 * 
 * @param input          texto inserido.
 * @return               não retorna valores.
 * @author               Vitor Santos.
 */
void ReadInput(char *input)
{
	fflush(stdin);
	fgets(input, 128, stdin);

	if(input[strlen(input) - 1] == '\n')
	{
        input[strlen(input) - 1] ='\0';
    }
}

/**
 * Formata as letras digitadas para maiúsculas.
 * 
 * @param word           texto inserido.
 * @return               não retorna valores.
 * @author               Vitor Santos.
 */
void WordToUpper(char *word)
{
	for(int i = 0; i < strlen(word); i++)
	{
		word[i] = toupper(word[i]);
	}
}

/**
 * Formata o texto digitado para o correto.
 * 
 * @param text           texto inserido.
 * @return               não retorna valores.
 * @author               Vitor Santos.
 */
void FormatTextToEncrypt(char *text)
{
	int i, j = 0;

	char rewritedText[128];

	for(i = 0; i < strlen(text); i++)
	{
		if(text[i] >= 'A' && text[i] <= 'Z')
		{
			rewritedText[j] = text[i];
			j++;
		}
	}

	for(i = 0; i < j; i++)
	{
		text[i] = rewritedText[i];
	}

	text[i] = '\0';
}

/**
 * Finaliza o sistema.
 * 
 * @return               não retorna valores.
 * @author               Vitor Santos.
 */
void QuitProgram()
{
	printf("Voce decidiu fechar o programa.\n");
	system("pause");
}

