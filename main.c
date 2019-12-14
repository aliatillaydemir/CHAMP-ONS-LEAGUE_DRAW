#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{

    srand(time(NULL));
    int a1,a2,a3,a4,a5,a6,a7,a8;
    char kontrol_degiskeni;

    do
    {

        for(int i=0; i<8; i++)
        {
            a1=rand()%8;
            a2=rand()%8;
            if(a2==a1)
            {
                while(a2==a1)
                    a2=rand()%8;

            }
            a3=rand()%8;
            if(a3==a2 || a3==a1)
            {
                while(a3==a1 || a3==a2)
                    a3=rand()%8;

            }
            a4=rand()%8;
            if(a4==a2 || a4==a1 || a4==a3)
            {
                while(a4==a1 || a4==a2 || a4==a3)
                    a4=rand()%8;

            }
            a5=rand()%8;
            if(a5==a2 || a5==a1 || a5==a3 || a5==a4)
            {
                while(a5==a1 || a5==a2 || a5==a3 || a5==a4)
                    a5=rand()%8;

            }
            a6=rand()%8;
            if(a6==a2 || a6==a1 || a6==a3 || a6==a4 || a6==a5)
            {
                while(a6==a1 || a6==a2 || a6==a3 || a6==a4 || a6==a5)
                    a6=rand()%8;

            }
            a7=rand()%8;
            if(a7==a2 || a7==a1 || a7==a3 || a7==a4 || a7==a5 || a7==a6)
            {
                while(a7==a1 || a7==a2 || a7==a3 || a7==a4 || a7==a5 || a7==a6)
                    a7=rand()%8;

            }
            a8=rand()%8;
            if(a8==a2 || a8==a1 || a8==a3 || a8==a4 || a8==a5 || a8==a6 || a8==a7)
            {
                while(a8==a1 || a8==a2 || a8==a3 || a8==a4 || a8==a5 || a8==a6 || a8==a7)
                    a8=rand()%8;

            }
        }

        char torba1[8][30]= {"Real Madrid","Barcelona","Bayern Munich","Juventus","Liverpool","Manchester City","Atletico Madrid","Paris"};
        char torba2[8][30]= {"Tottenham","Roma","Napoli","Sevilla","Marseille","Dortmund","Porto","Benfica"};
        char torba3[8][30]= {"Chelsea","Inter","Shaktar Donetsk","Ajax","Olimpiakos","Bayer Leverkusen","Leipzig","Lille"};
        char torba4[8][30]= {"Slavia Prag","Kizilyildiz","GALATASARAY","Club Brugge","Salzburg","Krossnodar","Lokomotiv Moskova","Astana"};

        printf("-------------GROUP A-----------------\n");
        printf("%s\n",torba1[a1]);
        printf("%s\n",torba2[a2]);
        printf("%s\n",torba3[a3]);
        printf("%s\n",torba4[a4]);
        printf("-------------------------------------\n");

        printf("\n\n");


        printf("-------------GROUP B-----------------\n");
        printf("%s\n",torba1[a2]);
        printf("%s\n",torba2[a3]);
        printf("%s\n",torba3[a4]);
        printf("%s\n",torba4[a5]);
        printf("-------------------------------------\n");

        printf("\n\n");

        printf("-------------GROUP C-----------------\n");
        printf("%s\n",torba1[a3]);
        printf("%s\n",torba2[a4]);
        printf("%s\n",torba3[a5]);
        printf("%s\n",torba4[a6]);
        printf("-------------------------------------\n");

        printf("\n\n");

        printf("-------------GROUP D-----------------\n");
        printf("%s\n",torba1[a4]);
        printf("%s\n",torba2[a5]);
        printf("%s\n",torba3[a6]);
        printf("%s\n",torba4[a7]);
        printf("-------------------------------------\n");

        printf("\n\n");

        printf("-------------GROUP E-----------------\n");
        printf("%s\n",torba1[a5]);
        printf("%s\n",torba2[a6]);
        printf("%s\n",torba3[a7]);
        printf("%s\n",torba4[a8]);
        printf("-------------------------------------\n");

        printf("\n\n");

        printf("-------------GROUP F-----------------\n");
        printf("%s\n",torba1[a6]);
        printf("%s\n",torba2[a7]);
        printf("%s\n",torba3[a8]);
        printf("%s\n",torba4[a1]);
        printf("-------------------------------------\n");

        printf("\n\n");

        printf("-------------GROUP G-----------------\n");
        printf("%s\n",torba1[a7]);
        printf("%s\n",torba2[a8]);
        printf("%s\n",torba3[a1]);
        printf("%s\n",torba4[a2]);
        printf("-------------------------------------\n");

        printf("\n\n");

        printf("-------------GROUP H-----------------\n");
        printf("%s\n",torba1[a8]);
        printf("%s\n",torba2[a1]);
        printf("%s\n",torba3[a2]);
        printf("%s\n",torba4[a3]);
        printf("-------------------------------------\n\n");

        printf("Yeni kura icin x, cikmak icin herhangi bir tusa basiniz: ");
        scanf("%c",&kontrol_degiskeni);

        fflush(stdin);  //enter tusu itibariyle tamponu düzenlemek icin. Kullanýlmamasý sonucu kontrol_degiskeni enter tusunu alýr program tam olarak calismaz(son bulur).

    }
    while(kontrol_degiskeni=='x');


    return 0;
}
