#include<stdio.h>
int main()

{
    int e;
    for(int again = 0; again<=50; again++)
    {
        int f,bal,money;
        printf("1. User\n2. Bank Manager\n");
        int a;
        printf("Your Choice :  ");
        scanf("%d",&a);
        if(a==1)
        {
            printf("    **********************************************\n");
            printf("    *          ...................               *\n");
            printf("    *          . 1. Open Account .               *\n");
            printf("    *...........                 ................*\n");
            printf("    *          . 2. Log in       .               *\n");
            printf("    *          ...................               *\n");
            printf("    **********************************************\n");
            printf("\n");
            int b;
            printf("Your Choice :  ");
            scanf("%d",&b);
            if(b>0 && b<2)

            {
                printf("\n");
                printf("                   ..............                 \n");
                printf("    ................Open Account..................\n");
                printf("                   ..............                 \n");
                printf("\n");
                char str[100];
                printf("Enter Your Name :  ");
                {
                    scanf("%s",&str);
                }
                char st[50];
                printf("Enter your E-mail Address :  ");
                scanf("%s",&st);
                int o;
                printf("Enter Your Password :  ");
                scanf("%d",&e);
                printf("Retype password :  ");

                for(o=1; o<2; o++)
                {

                    int p;

                    scanf("%d",&p);
                    if(p==e){
                        break;
                    }
                    else{
                        printf("Retype password again :  ");
                        //o=0;
                    }
                    o=0;
                }
                int i;
                printf("Enter Your Phone Number :  ");
                scanf("%d",&i);
                printf("\n");
                printf("             *******************************\n");
                printf("             *  Account Open Successfully  *\n");
                printf("             *******************************\n");
                printf("\n");

            }

            else if(b>1 && b<3)
            {
                for(int l=1; l<2; l++)
                {
                    printf("\n");
                    printf("                    ........                \n");
                    printf("     ................Log In.................\n");
                    printf("                    ........                \n");
                    printf("\n");
                    int password;
                    char name[100];
                    char na[]="shamim";
                    printf("Enter your name :  ");
                    scanf("%s",&name);
                    printf("\n");
                    int z;

                    char str[100];
                    int n=strcmp(str,name);
                    int ma=strcmp(na,name);

                    if(n==0)
                    {
                        printf("Enter your password :  ");
                        for(int z=1; z<2; z++)
                        {


                            scanf("%d",&password);


                            if(password==123456 || password==e)
                            {
                                printf("\n");

                                printf("             *************************\n");
                                printf("             *  Log in successfully  *\n");
                                printf("             *************************\n");
                                printf("\n");

                            }
                            else
                            {
                                printf("Wrong Password\n");
                                printf("Retype Password :  ");
                                z=0;

                            }

                        }
                    }
                        else
                        {
                            printf("Wrong user name\n");
                           // printf("Retype user name :  ");
                            //char aw[20];
                            //scanf("%s",&str);
                            l=0;
                        }

                }

                int q, r;

                printf("    ***********************************************\n");
                printf("    *          ....................               *\n");
                printf("    *          . 1. Balance check .               *\n");
                printf("    *...........                  ................*\n");
                printf("    *          . 2. Exit          .               *\n");
                printf("    *          ....................               *\n");
                printf("    ***********************************************\n");
                printf("Your Choice :  ");
                scanf("%d",&q);
                for(r=1; r<2; r++)
                {

                    if(q==1)
                    {

                        printf("balance = %d",money);
                        printf("\n");
                        printf("Exit press 1 :  ");
                        int s, t;
                        scanf("%d",&s);
                        for(t=1; t<2; t++)
                        {
                            if(s==1)
                            {
                                break;
                            }
                        }
                    }
                    if(q==2)
                    {
                        break;
                    }
                }

            }

        }
        else if(a==2)
        {
            int balance,maney = 0;
            printf("add balance :  ");
            scanf("%d",&balance);

            money = money+balance-8;

        }
    }
}



