#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

int menu_principal(int a)
{
        int opc;
        printf("\t==== Menu ====\n");
        printf("\t1- Cadastro de Clientes\n \t2- Cadastro de Filmes\n \t3- Relatorios\n");
        scanf("%d", &opc);
        switch(opc)
        {
                case 1:
                        system("cls");
                        menu_cadastroCliente();
                        break;

                case 2:
                        system("cls");
                        menu_cadastroFilme();
                        break;

                case 3:
                        system("cls");
                        menu_relatorio();
                        break;
        }

}

int menu_cadastroCliente(int a)
{
        int opc2;
        printf("\t==== Cadastro de Clientes ====\n");
        printf("\t1- Novo Cadastro\n \t2- Editar Cadastro\n \t3- Exibir Cadastro\n \t4- Voltar\n");
        scanf("%d", &opc2);
        switch(opc2)
        {
                case 1:
                        system("cls");
                        recebeCadastro();
                        break;

                case 2:
                        system("cls");
                        editaCadastro();
                        break;

                case 3:
                        system("cls");
                        exibeCadastro();
                        break;
        }

}

void recebeCadastro()
{
        FILE *arq;
        arq = fopen("ArqGrav.txt", "a");  // Cria um arquivo texto para gravação
        char nomeCliente[100];
        char cpf[20];
        int dia_nasc, mes_nasc, ano_nasc;

        printf("\t==== Novo Cadastro ====\n");
        printf("\tNome: ");
        scanf(" %[^\n]s", nomeCliente);
        printf("\tCPF: ");
        scanf(" %[^\n]s", cpf);
        printf("\tData de Nascimento (dd/mm/aa): ");
        scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

        fprintf(arq,"%s\n%s\n%d/%d/%d\n;\n", nomeCliente, cpf, dia_nasc, mes_nasc, ano_nasc);

        fclose(arq);
        //printf("\n\tNome do Cliente: %s", nomeCliente); //teste retorno ok
        //printf("\n\tCPF: %s", cpf); //teste retorno ok
        //printf("\n\tData de Nascimento: %d/%d/%d\n\n", dia_nasc, mes_nasc, ano_nasc); //teste retorno ok
}

void editaCadastro()
{
        printf("\t==== Editar Cadastro ====\n");
        printf("\tNao faco ideia do que fazer aqui kekekekekekekeekekekekekekkeeoi\n");
}

void exibeCadastro()
{
        printf("\t==== Exibir Cadastro ====\n");
        printf("\tNao faco ideia do que fazer aqui kekekekekekekeekekekekekekkeeoi");
}

int menu_cadastroFilme(int c)
{
        int opc3;
        printf("\t==== Cadastro de Filmes ====\n");
        printf("\t1- Novo Filme\n \t2- Editar Filme\n \t3- Voltar\n");
        scanf("%d", &opc3);
        switch(opc3)
        {
                case 1:
                        recebeFilme();
                        break;

                case 2:
                        system("cls");
                        printf("\t==== Editar Filme ====\n");
                        printf("\n\tDEIXAI TODA A ESPERANCA, VOIS QUE ENTRAIS\n");
                        break;
        }

}

void recebeFilme()
{
        FILE *arquivo;
        arquivo = fopen("ArqFilme.txt", "a");  // Cria um arquivo texto para gravação
        char nomeFilme[100];
        float scoreIMDB;
        int anoLancamento;
        char sinopse[200];

        printf("\t==== Novo Filme ====\n");
        printf("\tNome: ");
        scanf(" %[^\n]s", nomeFilme);
        printf("\tAno de Lancamento: ");
        scanf(" %d", &anoLancamento);
        printf("\tSinopse: ");
        scanf(" %[^\n]s", sinopse);
        printf("\tScore IMDB: ");
        scanf("%f", &scoreIMDB);

        fprintf(arquivo,"%s\n%d\n%s\n%.01f\n;\n", nomeFilme, anoLancamento, sinopse, scoreIMDB);

        printf("\n\tNome do Filme: %s (%d)", nomeFilme, anoLancamento); //teste retorno ok
        printf("\n\tSinopse: %s\n\n", sinopse); // teste retorno ok

        fclose(arquivo);
}

int menu_relatorio()
{
        printf("\t==== Relatorios ====\n");
        printf("\t1- Relatorio de Clientes\n \t2- Relatorio de Filmes\n \t3- Voltar\n");

}



#endif // FUNCOES_H_INCLUDED
