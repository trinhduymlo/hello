#include <stdio.h>

#include <stdlib.h>




double sodu = 100000000;

char chonrut;

char chonchuyen;

char chontiep;

char chonloop;

int names;

int pw;

// X�y d?ng h�m login

int login(int user, int pass)

{

    //  char chon;

    do

    {




        if (user == 999 && pass == 666)

        {

            return (1);

        }

        else

        {

            printf("Sai user v� Pass\n");

        }

        printf("V�o l?i kh�ng (Y/N)?\n");

        fflush(stdin);

        scanf("%c", &chontiep);

    } while (chontiep == 'Y' || chontiep == 'y');

    return (0);

}




/// X�y d?ng h�m r�t ti?n kh�ng qu� 5 tri�uj




void ruttien(int num)

{

    double sotienrut;

    // char chon;

    do

    {

        printf("Xin nh?p s? ti?n c?n r�t: ");

        scanf("%lf", &sotienrut);

        if (sotienrut <= 5000000 && sotienrut < sodu)

        {

            sodu = sodu - sotienrut;

            printf("Th?c hi?n th�nh c�ng. Ti?n dang ra xin d?i ch�t!");

            printf("S? du c?a b?n c�n l?i l�: %lf\n", sodu);

        }

        else if (sotienrut > sodu)

        {

            printf("Ko d? ti?n, s? du c� h?n �t hon \n");

        }

        else if (sotienrut > 5000000)

        {

            printf("Qu� d?nh m?c: 5000000\n");

        }

        else if (sotienrut < 50000)

        {

            printf("S? ti?n t?i thi?u > 50000\n");

        }

        printf("B?n th?c hi?n ti?p? Y/N\n");

        fflush(stdin);

        scanf("%c", &chonrut);

    } while (chonrut == 'Y' || chonrut == 'y');

}

/// Chuy?n kho?n

void chuyenkhoan()

{




    double sotienck;

    double stknhan;




    do

    {

        printf("Nh?p s? t�i kho?n chuy?n: \n");

        scanf("%lf", &stknhan);

        fflush(stdin);

        printf("M?i nh?p s? ti?n c?n chuy?n: \n");

        scanf("%lf", &sotienck);

        if (sotienck < sodu)

        {

            sodu = sodu - sotienck;

            printf("Ch�c m?ng b?n d� chuy?n th�nh c�ng: %lf cho t�i kho?n: %lf\n", sotienck, stknhan);

            printf("S? du TK: %lf \n", sodu);

        }

        else

        {

            printf("T�i kho?n kh�ng d? ti?n \n");

        }

        printf("B?n c� mu?n ti?p t?c chuy?n kho?n kh�ng Y/N \n");




        fflush(stdin);

        scanf("%c", &chonchuyen);

    } while (chonchuyen == 'Y' || chonchuyen == 'y');

}




/// ki?m tra s? du

int ktrasodu(double sodu)

{

    if (sodu > 50000)

    {

        printf("S? du TK: %lf \n", sodu);

        return sodu;

    }

    else

    {

        printf("S? du TK dang ? m?c t?i: %lf \n", sodu);

        return 0;

    }

}




// H�m ch�nh c?a chuong tr�nh

int main(int argc, char *argv[])

{




    int menu;

    int stknhan, sotienck;

    int num;

    // char user, pass, luachon4;




    printf("Xin moi nhap t�n: \n");

    scanf("%d", &names);

    printf("Xin m?i nh?p m?t kh?u: \n");

    scanf("%d", &pw);




    if (login(names, pw) == 1)

    {

        printf("B?n d� dang nh?p th�nh c�ng, xin m?i ch?n d?ch v? \n");

        do

        {

            printf("1. r�t ti?n m?t t?i c�y \n");

            printf("2. Chuy?n kho?n t?i ng�n h�ng qua s? t�i kho?n:\n");

            printf("3. Ki?m tra s? du \n");

            printf("4. K?t th�c chuong tr�nh\n");

            // fflush(stdin);

            scanf("%d", &menu);

            switch (menu)

            {

            case 1:




                ruttien(num);

                break;

            case 2:

                chuyenkhoan();




                break;

            case 3:

                ktrasodu(sodu);

                break;

            case 4:

                printf("Xin k�nh ch�o v� h?n g?p l?i \n");

                break;

            }

            printf("Ban co muon tiep tuc ch?n Menu tr�n h? th?ng kh�ng Y/N \n");

            fflush(stdin);

            scanf("%c", &chonloop);




        } while (chonloop == 'Y' || chonloop == 'y');

    }




    return 0;

}
