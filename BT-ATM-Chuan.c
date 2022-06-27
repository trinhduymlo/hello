#include <stdio.h>

#include <stdlib.h>




double sodu = 100000000;

char chonrut;

char chonchuyen;

char chontiep;

char chonloop;

int names;

int pw;

// Xây d?ng hàm login

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

            printf("Sai user và Pass\n");

        }

        printf("Vào l?i không (Y/N)?\n");

        fflush(stdin);

        scanf("%c", &chontiep);

    } while (chontiep == 'Y' || chontiep == 'y');

    return (0);

}




/// Xây d?ng hàm rút ti?n không quá 5 triêuj




void ruttien(int num)

{

    double sotienrut;

    // char chon;

    do

    {

        printf("Xin nh?p s? ti?n c?n rút: ");

        scanf("%lf", &sotienrut);

        if (sotienrut <= 5000000 && sotienrut < sodu)

        {

            sodu = sodu - sotienrut;

            printf("Th?c hi?n thành công. Ti?n dang ra xin d?i chút!");

            printf("S? du c?a b?n còn l?i là: %lf\n", sodu);

        }

        else if (sotienrut > sodu)

        {

            printf("Ko d? ti?n, s? du có h?n ít hon \n");

        }

        else if (sotienrut > 5000000)

        {

            printf("Quá d?nh m?c: 5000000\n");

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

        printf("Nh?p s? tài kho?n chuy?n: \n");

        scanf("%lf", &stknhan);

        fflush(stdin);

        printf("M?i nh?p s? ti?n c?n chuy?n: \n");

        scanf("%lf", &sotienck);

        if (sotienck < sodu)

        {

            sodu = sodu - sotienck;

            printf("Chúc m?ng b?n dã chuy?n thành công: %lf cho tài kho?n: %lf\n", sotienck, stknhan);

            printf("S? du TK: %lf \n", sodu);

        }

        else

        {

            printf("Tài kho?n không d? ti?n \n");

        }

        printf("B?n có mu?n ti?p t?c chuy?n kho?n không Y/N \n");




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




// Hàm chính c?a chuong trình

int main(int argc, char *argv[])

{




    int menu;

    int stknhan, sotienck;

    int num;

    // char user, pass, luachon4;




    printf("Xin moi nhap tên: \n");

    scanf("%d", &names);

    printf("Xin m?i nh?p m?t kh?u: \n");

    scanf("%d", &pw);




    if (login(names, pw) == 1)

    {

        printf("B?n dã dang nh?p thành công, xin m?i ch?n d?ch v? \n");

        do

        {

            printf("1. rút ti?n m?t t?i cây \n");

            printf("2. Chuy?n kho?n t?i ngân hàng qua s? tài kho?n:\n");

            printf("3. Ki?m tra s? du \n");

            printf("4. K?t thúc chuong trình\n");

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

                printf("Xin kính chào và h?n g?p l?i \n");

                break;

            }

            printf("Ban co muon tiep tuc ch?n Menu trên h? th?ng không Y/N \n");

            fflush(stdin);

            scanf("%c", &chonloop);




        } while (chonloop == 'Y' || chonloop == 'y');

    }




    return 0;

}
