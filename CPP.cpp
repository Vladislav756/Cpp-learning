#include <iostream>

// �� ��������� namespace std, ������ ��� ���� � �++ ������� ��� ��� ����� �������� ��������� � ����������

int main()
{
    //��������� ������ (������)
   /*
    std::cout << "Personal form";

    int Age, Height, Weight;

    char Name [256], Surname [256];             // ������ 256 �� ������, ��� ����� ������ 256

    std::cout << "Enter Name, Surname, Age, Height and Weight" << std::endl;

    std::cin >> Name >> Surname;

    std::cin >> Age >> Height >> Weight;

    std::cout <<"Name:" << Name << std::endl << "Surname:" << Surname << std::endl << "Height:" << Height << std::endl << "Weight:" << Weight << std::endl;
    */





    //������
    
    /*
    double I, m, h;

    std::cout << "Program to show and count mass index" << std::endl;

    std::cout << "Enter Weight and Height" << std::endl;

    std::cin >> m >> h;

    I = m / (h * h);

    std::cout << "Weight:" << m << std::endl << "Height:" << h << std::endl << "Mass Index = " << I << std::endl;
    */
    





    // ������
    /*
    int a, b, c;

    std::cout << "Incert 3 numbers" << std::endl;

    std::cin >> a >> b >> c;

    if (a == b || a == c || b == c)
    {
        a += 5;
        b += 5;
        c += 5;
        std::cout << a << std::endl << b << std::endl << c;
    }
    
    else
    {
        std::cout << "No solution" << std::endl;
    }

    */





    //��������

    //1

    /*
    int a, b, c;

    std::cout << "Incert two numbers and they will swich" << std::endl;

    std::cin >> a >> b;

    std::cout << "Before swich" << std::endl << "a = " << a << std::endl << "b = " << b << std::endl;

    c = a;

    a = b;

    b = c;

    std::cout << "After swich" << std::endl << "a = " << a << std::endl << "b = " << b << std::endl;
    */

    //2

    /*
    int a, b;

    std::cout << "Incert two numbers and they will swich" << std::endl;

    std::cin >> a >> b;

    std::cout << "Before swich" << std::endl << "a = " << a << std::endl << "b = " << b << std::endl;

    a = a + b;

    b = a - b;

    a = a - b;

    std::cout << "After swich" << std::endl << "a = " << a << std::endl << "b = " << b << std::endl;
    */





    // �����
    
    /*
    int a, b, result = 0;

    std::cout << "Incert number, when will be 0 program stops" << std::endl;

    std::cin >> a;

    while (a != 0)
    {
        b = a;

        if (b > 0 && b % 2 == 0)
        {
            result += b;

            std::cin >> a;
        }

        else
        {
            std::cin >> a;
        }

    }

        std::cout << result << std::endl;

    */
   
    



    // ������
    
    /*
    int result = 0;

        for (int i = 1; i < 1000000; i++)

            if (i / i)
            {
                result += i;
            }

    std::cout << result << std::endl;
    */




    // �������
    
    /*
    bool result;

    int x, y;

    std::cin >> x >> y;

    
    a)

    if (x < 2 && y < 3)
    {
        result = true;

        std::cout << result;
    }
    
    else
    {
        result = false;

        std::cout << result;
    }
    */

    //�)
    /*
    
    if (x < 2)
    {
        result = false;

        std::cout << result;
    }
    */
    
    //�)
    /*
    if (x < 2 || y < 3)
    {
        result = true;

        std::cout << result;
    }

    else
    {
        result = false;

        std::cout << result;
    }
    */

    //�)

    /*
    if (x < 0 && y < 5)
    {
        result = false;

        std::cout << result;
    }
    */

    //�)
    
    /*
    if (x < 0 && y > 5)
    {
        result = true;

        std::cout << result;
    }

    else
    {
        result = false;

        std::cout << result;
    }
    */

    //�)

    /*
    if (10 < x < 20)
    {
        result = true;

        std::cout << result;
    }

    else
    {
        result = false;

        std::cout << result;
    }
    */

    //�)

    /*
    if (x > 3 || x < 1)
    {
        result = true;

        std::cout << result;
    }

    else
    {
        result = false;

        std::cout << result;
    }
    */

    //�)

    /*
    if (0 < y < 4 && x < 5)
    {
        result = true;

        std::cout << result;
    }

    else
    {
        result = false;

        std::cout << result;
    }
    */

    //�)

    /*
    if (x > 3 && x < 10)
    {
        result = true;

        std::cout << result;
    }

    else
    {
        result = false;

        std::cout << result;
    }
    */
    



    
    // �������
    
    /*�)
    int sum = 0;
    for (int i = 100; i <= 500; i++)
    {
        sum += i;
    }

    std::cout << sum;
    */

    /*�)

    int result = 1;

    for (int i = 8; i <= 15; i++)
    {
        result *= i;
    }
    
    std::cout << result;
    */

    /*�)

    int i = 1, a = 0, srednee;

    for (; i <= 1000; i++)
    {
        a += i;
    }

    a = a / i;

    std::cout << a;
    */

        return 0;
}

