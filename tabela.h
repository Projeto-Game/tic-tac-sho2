col_alf(int n){

    switch(n){

    case 1:
        printf("A  ");
    break;
    case 2:
        printf("B  ");
    break;
    case 3:
        printf("C  ");
    break;
    case 4:
        printf("D  ");
    break;
    case 5:
        printf("E  ");
    break;
    case 6:
        printf("F  ");
    break;
    case 7:
        printf("G  ");
    break;
    case 8:
        printf("H  ");
    break;
    case 9:
        printf("I  ");
    break;

    }

}

jog_alf(int n){

    switch(n){

    case 1:
        printf("[x]");
    break;
    case 2:
        printf("[o]");
    break;

    }

}

void tabela(int v[9][9]){

    int i, j, c;

    printf("\t\t\t\t\t     ");

    for(c = 1; c <= 9; c++) col_alf(c);

    printf("\n");

    for(i = 0; i < 9; i++){
        printf("\t\t\t\t\t  %d ", i + 1);
        for(j = 0; j < 9; j++){
            if(v[i][j] == 0) printf("[ ]", v[i][j]);
            else jog_alf(v[i][j]);
        }
        printf("\n");
    }

}
