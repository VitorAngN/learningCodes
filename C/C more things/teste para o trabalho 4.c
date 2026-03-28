ordemAlfabetica(int ind){
        //usar a struct contato para
        int c = 0, k = 0, i = 0,
            j = 0;
            j = ind;
        char nomeAux[50];
            for(; c < j; c++){
                    for(i = -1; i < k; i++){
                if(strcmp(contato[c].nome, contato[c + 1].nome) < 0){
                    printf("estou aqui e armazenou o contato[c] no nome auxiliar\n");
                    strcpy(nomeAux, contato[c].nome);
                    strcpy(contato[k].nome, nomeAux);
                    printf("nome atual : %s", contato[k].nome);
                    if(k == j-1){
                        printf("o contato chegou no ultimo e está testando se está certo");
                    }else{
                        printf("ainda n é o ultimo");
                    k++;
                    }
                }else{
                strcpy(nomeAux, contato[c+1].nome);
                strcpy(contato[c+1].nome, contato[c].nome);
                strcpy(contato[c].nome, nomeAux);
                printf("teste está errado\n");
                printf("contato atual testado : %s", contato[c].nome);
                printf("AGORA ELE É PRA IMPRIMIR\n");
                printf("nome atual : %s\n", contato[k].nome);
                printf("nome atualP2 : %s\n", contato[k+1].nome);
                printf("nome atualP3 : %s\n", contato[k+2].nome);
                if(k == j-1){
                    printf("o contato chegou no ultimo\n");
                }else{
                    printf("ainda n é o ultimo\n");
                }
                k++;
                printf("O K está valendo: %d\n", k);

                    }
                }
            }
        k = 0;
        for(k = 0; k <= c; k++){
        printf("nome atual %d : %s\n", k, contato[k].nome);
        }
        return 0;
    }
