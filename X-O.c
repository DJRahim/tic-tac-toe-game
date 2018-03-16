#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Xwin(char mat[9])
{
    if (mat[0]=='X')
    {
        if(mat[1]=='X')
        {
            if(mat[2]=='X') return 1;
        }
        if(mat[3]=='X')
        {
            if(mat[6]=='X') return 1;
        }
        if(mat[4]=='X')
        {
            if(mat[8]=='X') return 1;
        }
    }
    if(mat[1]=='X')
    {
        if(mat[4]=='X')
        {
            if(mat[7]=='X') return 1;
            
        }
    }
    if(mat[2]=='X')
        {
            if(mat[5]=='X')
            {
                if(mat[8]=='X') return 1;
            }
        }
    if(mat[3]=='X')
        {
            if(mat[4]=='X')
            {
                if(mat[5]=='X') return 1;
            }
        }
    if(mat[6]=='X')
        {
            if(mat[7]=='X')
            {
                if(mat[8]=='X') return 1;
            }
        }
    if(mat[2]=='X')
        {
            if(mat[4]=='X')
            {
                if(mat[6]=='X') return 1;
            }
        }
}
int Owin(char mat[9])
{
    if (mat[0]=='O')
    {
        if(mat[1]=='O')
        {
            if(mat[2]=='O') return 1;
        }
        if(mat[3]=='O')
        {
            if(mat[6]=='O') return 1;
        }
        if(mat[4]=='O')
        {
            if(mat[8]=='O') return 1;
        }
    }
    if(mat[1]=='O')
    {
        if(mat[4]=='O')
        {
            if(mat[7]=='O') return 1;
            
        }
    }
    if(mat[2]=='O')
        {
            if(mat[5]=='O')
            {
                if(mat[8]=='O') return 1;
            }
        }
    if(mat[3]=='O')
        {
            if(mat[4]=='O')
            {
                if(mat[5]=='O') return 1;
            }
        }
    if(mat[6]=='O')
        {
            if(mat[7]=='O')
            {
                if(mat[8]=='O') return 1;
            }
        }
    if(mat[2]=='O')
        {
            if(mat[4]=='O')
            {
                if(mat[6]=='O') return 1;
            }
        }
}

int main(int argc, char *argv[])
{
    char mat[9], nom1[20], nom2[20], c; int n, i, z, p, j, k, nb1, nb2, nb3, t[9]; nb1=0; nb2=0; nb3=0; p=1;
    printf("type the name of the first player (O) \n");
    fgets(nom1, sizeof(nom1), stdin);
    printf("type the name of the second player (X) \n");
    fgets(nom2, sizeof(nom2), stdin);
    while(1)
    {
     j=0; for (k=0;k<9;k++) t[k]=0; n=0;
    mat[0]='1';  mat[1]='2'; mat[2]='3'; mat[3]='4'; mat[4]='5'; mat[5]='6'; mat[6]='7'; mat[7]='8'; mat[8]='9';
    printf("%c | %c | %c\n", mat[0], mat[1], mat[2]); printf("---------\n");
    printf("%c | %c | %c\n", mat[3], mat[4], mat[5]); printf("---------\n");
    printf("%c | %c | %c\n", mat[6], mat[7], mat[8]);
    do
    {
		if(p==1)
	{
        printf("It's the turn of %s", nom1);
        while(n==t[0] || n==t[1] || n==t[2] || n==t[3] || n==t[4] || n==t[5] || n==t[6] || n==t[7] || n==t[8] || n<1 || n>9)
        {
            scanf("%d", &n);
			if (n==t[0] || n==t[1] || n==t[2] || n==t[3] || n==t[4] || n==t[5] || n==t[6] || n==t[7] || n==t[8] || n<1 || n>9) printf("*write a correct number*\n");
        }
        t[j]=n; j++;
        switch(n)
        {
            case 1: mat[0]='O'; break;
            case 2: mat[1]='O'; break;
            case 3: mat[2]='O'; break;
            case 4: mat[3]='O'; break;
            case 5: mat[4]='O'; break;
            case 6: mat[5]='O'; break;
            case 7: mat[6]='O'; break;
            case 8: mat[7]='O'; break;
            case 9: mat[8]='O'; break;
        }
        printf("%c | %c | %c\n", mat[0], mat[1], mat[2]); printf("---------\n");
        printf("%c | %c | %c\n", mat[3], mat[4], mat[5]); printf("---------\n");
        printf("%c | %c | %c\n", mat[6], mat[7], mat[8]);
	}
        if (Owin(mat)!=1 && j!=9)
        {
        printf("It's the turn of %s", nom2);
        while(n==t[0] || n==t[1] || n==t[2] || n==t[3] || n==t[4] || n==t[5] || n==t[6] || n==t[7] || n==t[8] || n<1 || n>9)
        {
            scanf("%d", &n);
			if (n==t[0] || n==t[1] || n==t[2] || n==t[3] || n==t[4] || n==t[5] || n==t[6] || n==t[7] || n==t[8] || n<1 || n>9) printf("*write a correct number*\n");
        }
        t[j]=n; j++;
        switch(n)
        {
            case 1: mat[0]='X'; break;
            case 2: mat[1]='X'; break;
            case 3: mat[2]='X'; break;
            case 4: mat[3]='X'; break;
            case 5: mat[4]='X'; break;
            case 6: mat[5]='X'; break;
            case 7: mat[6]='X'; break;
            case 8: mat[7]='X'; break;
            case 9: mat[8]='X'; break;
        }
        printf("%c | %c | %c\n", mat[0], mat[1], mat[2]); printf("---------\n");
        printf("%c | %c | %c\n", mat[3], mat[4], mat[5]); printf("---------\n");
        printf("%c | %c | %c\n", mat[6], mat[7], mat[8]);
        } p=1;
    }while(Xwin(mat)!=1 && Owin(mat)!=1 && j!=9);
    if (Owin(mat)==1) 
    {
        printf("the winner is %s\n", nom1); nb1=nb1+1;
    }
    else
    {
        if (Xwin(mat)==1) 
        {
            printf("the winner is %s\n", nom2); nb2=nb2+1;
        }
        else 
        {
            printf("it's a draw\n\n"); nb3=nb3+1;
        }
    }
    do
    {
    printf("if you want to play again type 1\n");
    printf("if you want to see the results type 2\n");
    printf("if you want to exit type 3\n");
    scanf("%d", &z);
    switch (z)
    {
        case 2: printf("%d wins by %s", nb1, nom1); printf("%d wins by %s", nb2, nom2); printf("%d draws\n\n", nb3); break;
        case 3: exit(0); break;
    }
    }while(z!=1); if ((nb1+nb2+nb3)%2==1) p=-1;
    }
}
