/*******************************************************************************
* FILENAME :        modules/visual.h
*
* DESCRIPTION :
*       Module that contain all of the visual functions.
*
* NOTES :
*       -
*
*
*/

/**
 * Exibe o titulo do sistema.
 * 
 * @return            não retorna valores
 * @author            Vitor Santos
 */
void ShowBanner()
{
	printf("* * * * * * * * * * * * * * * * * * *\n");
	printf("*                                   *\n");	
	printf("*         Cifra de Vigenere         *\n");
	printf("*                                   *\n");
	printf("* * * * * * * * * * * * * * * * * * *\n\n");
}

/**
 * Exibe as regras de utilização do sistema.
 * 
 * @return            não retorna valores
 * @author            Vitor Santos
 */
void ShowRules()
{
	printf("* Orientacoes de uso do programa:\n");
	printf("* 1. Utilizar no maximo 128 caracteres, caracteres excedentes serao ignorados.\n");
	printf("* 2. Apenas utilizar letras, sem espacamento.\n");
	printf("* 3. Acentuacao e numeros tambem sao bloqueados.\n\n");
	printf("  Faca bom uso do sistema!\n");		
}

/**
 * Exibe o menu para o usuário.
 * 
 * @return            retorna a opção escolhida pelo usuário.
 * @author            Vitor Santos
 */
bool ShowMenu()
{
	char optionChoosed;

	printf("* Selecione a opcao desejada.\n");
	printf("* 1. Criptografar.\n");
	printf("* 2. Descriptografar.\n");
	printf("* 3. Sair do programa.\n");

	fflush(stdin);
	fgets(&optionChoosed, 2, stdin);

	return MenuFunctions(optionChoosed);
}

/**
 * Executa a opção escolhida.
 * 
 * @param optionChoosed  Opção escolhida pelo usuário.
 * @return               retorna verdadeiro caso seja uma escolha válida.
 * @author               Vitor Santos
 */
bool MenuFunctions(char optionChoosed)
{
	switch(optionChoosed)
	{
		case '1':
		{
			char *textToEncrypt = malloc(sizeof(char) + 128), *encryptKey = malloc(sizeof(char) + 128);

			GetTextToEncrypt(textToEncrypt);
			GetTextEncryptKey(encryptKey);

			printf("Palavra criptografada: %s\n", CryptWord(textToEncrypt, encryptKey));
			free(textToEncrypt + 1);
			free(encryptKey + 1);
			break;
		}

		case '2':
		{
			char *encryptText = malloc(sizeof(char) + 128), *encryptKey = malloc(sizeof(char) + 128);

			GetEncryptText(encryptText);
			GetTextEncryptKey(encryptKey);

			printf("Palavra descriptografada: %s\n", DecryptWord(encryptText, encryptKey));
			free(encryptText + 1);
			free(encryptKey + 1);
			break;
		}

		case '3':
		{
			QuitProgram();
			return false;
		}

		default:
		{
			printf("Operacao invalida, retornando ao menu principal.\n");
			break;
		}
	}
	return true;
}