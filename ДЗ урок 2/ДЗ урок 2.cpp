
#include <iostream>

enum class Lines
{
 a1,
 b1,
 c1,
 a2,
 b2,
 c2,
 a3,
 b3,
 c3
};


struct Player
{
    short id; // id грока
    int age; // возраст
    double scores; // баллы
};

int main()
{
    Player Vasiliy;
    Vasiliy.id = 9;
    Vasiliy.age = 26;
    Vasiliy.scores = 32.14;

    Player Ivan;
    Ivan.id = 1;
    Ivan.age = 29;
    Ivan.scores = 1.01;



    int var1 = 10;
    short int var2 = 11;
    long long var3 = 12;
    char var4 = 100;
    bool var5 = true;
    float var6 = 2.7;
    double var7 = 12.13;

    Lines number_a1 = Lines::a1;
    std::cout << (int)(number_a1);

    Lines number_b1 = Lines::b1;
    std::cout << (int)(number_b1);

    Lines number_c1 = Lines::c1;
    std::cout << (int)(number_c1);

    Lines number_a2 = Lines::a2;
    std::cout << (int)(number_a2);

    Lines number_b2 = Lines::b2;
    std::cout << (int)(number_b2);

    Lines number_c2 = Lines::c2;
    std::cout << (int)(number_c2);

    Lines number_a3 = Lines::a3;
    std::cout << (int)(number_a3);

    Lines number_b3 = Lines::b3;
    std::cout << (int)(number_b3);

    Lines number_c3 = Lines::c3;
    std::cout << (int)(number_c3);


    const int a1 = 1;
    const int b1 = 2;
    const int c1 = 3;
    const int a2 = 4;
    const int b2 = 5;
    const int c2 = 6;
    const int a3 = 7;
    const int b3 = 8;
    const int c3 = 9;



    int line1[3] = {a1, b1, c1}; //строка1
    std::cout << "line1[0] = " << line1[0] << std::endl;
    line1[1] = 1;
    std::cout << "line1[2] = " << line1[2] << std::endl;


    int line2[3] = { a2, b2, c2 }; //строка2
    std::cout << "line2[0] = " << line2[0] << std::endl;
    line2[1] = 5;
    std::cout << "line2[2] = " << line2[2] << std::endl;


    int line3[3] = { a3, b3, c3 }; //строка3
    std::cout << "line3[0] = " << line3[0] << std::endl;
    line3[1] = 8;
    std::cout << "line3[2] = " << line3[2] << std::endl;
    return 0;

    


}







