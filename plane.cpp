#include <iostream>
int height;
int speed;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите высоту полета : \n";
    std::cin >> height;
    std::cout << "Введите сокрость самолёта : \n";
    std::cin >> speed;

    if (( height >= 9000 && height <= 9501 ) && ( speed >= 750 && speed <= 850 )){
        std::cout << "Курс верный. \n";
    }
    else {
        std::cout << "Скорректируйте курс. \n";
    }
}
