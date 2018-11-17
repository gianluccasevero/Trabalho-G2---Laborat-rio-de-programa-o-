#include  <stdio.h>
#include  <stdlib.h>
#include  "funcoes.h"

int menu_principal(int a);
int menu_cadastroCliente(int a);
void recebeCadastro();
void editaCadastro();
void exibeCadastro();
int menu_cadastroFilme(int c);
void recebeFilme();
int menu_relatorio();

// inicio do codigo fonte

int main(void)
{

        int opc;
        menu_principal(opc);

        return 0;
}
