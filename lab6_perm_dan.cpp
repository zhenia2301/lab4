﻿// lab6_perm_dan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

/*int main()
{
    setlocale(0, "");
    int num=0;
    int age=0;
    int sum = 0;
    int maxAge=0;
    int minAge=100;

    cout << "Введите количество посетителей:";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Введите возраст " << i + 1 << "-ого посетителя: ";
        cin >> age;
        if (age > maxAge) {
            maxAge = age;
        }
        if (age < minAge) {
            minAge = age;

            sum += age;
        }
        
    }

    num = sum / num; 

    cout << "Средний возраст всех посетителей: " << num << endl;
    cout << "Самый взрослый: " << maxAge << endl;
    cout << "Самый молодой: " << minAge << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int var;
    cout << "Дни недели:" << endl;
    cout << "Понедельник" << endl;
    cout << "Вторник"<<endl;
    cout << "Среда"<<endl;
    cout << "Четверг"<< endl;
    cout << "Пятница"<<endl;
    cout << "Суббота"<<endl;
    cout << "Воскресенье"<<endl;
    cout << "Введите порядковый номер дня недели:";
    cin >> var;
    system("cls");
    switch (var) {
    case 1:
        cout << "План на понедельник:" << endl << "Варить борщи" << endl << "Мыть полы";
        break;
    case 2:
        cout << "План на вторник:" << endl << "Слушать Егора Крида" << endl << "Идти работать на завод";
        break;
    case 3:
        cout << "План на среду:" << endl << "Встречать мужа с завода";
        break;
    case 4:
        cout << "План на четверг:" << endl << "Соглашаться с мужем" << endl << "Не иметь своего мнения";
        break;
    case 5:
        cout << "План на пятницу:" << endl << "Стирать вещи руками" << endl << "Идти работать на завод";
        break;
    case 6:
        cout << "План на субботу:" << endl << "Убирать за 5 детьми" << endl << "Погасить ипотеку";
        break;
    case 7:
        cout << "План на воскресенье:" << endl << "Взять кредит на 100 тысяч" << endl << "Встретить коллекторов";
        break;
    default:
        break;
    }
    

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int var;
    cout << "Введите порядковый номер пальца руки:";
    cin >> var;
    switch (var)
    {
    case 1:
        cout << "Большой(наладонный)";
        break;
    case 2:
        cout << "Указательный(шиш)";
        break;
    case 3:
        cout << "Средний";
        break;
    case 4:
        cout << "Безымянный(четвертый)";
        break;
    case 5:
        cout << "Мизинец";
        break;
    default:
        break;
    }

    return 0;
}*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    char var;
    cout << "Станции" << endl;
    cout << "[A]Зеленоград-Крюково" << endl;
    cout << "[B]Некрасовка" << endl;
    cout << "[C]Арбатская" << endl;
    cout << "[D]Домодедовская" << endl;
    cout << "[E]Спортивная" << endl;
    cout << "Выберите станцию:";
    cin >> var;
    system("cls");

    switch (var)
    {
    case 'A':
    case 'a':
        cout << "Путь от Бауманской до Зеленоград-Крюково:" << endl;
        cout << "От Бауманской до Электрозаводской:2мин" << endl << "От Электрозаводской до Зеленоград-Крюково:65мин" << endl;
        cout << "Итого:74мин с пересадками";
        break;
    case'B':
    case'b':
        cout << "Путь от Бауманской до Некрасовка:" << endl;
        cout << "От Бауманской до Электрозаводской:2мин" << endl << "От Электрозаводской до Нижегородской:10мин" << endl << "От Нижегородской до Некрасовка:20мин"<<endl;
        cout << "Итого:41мин с пересадками";
        break;
    case 'C':
    case 'c':
        cout << "Путь от Бауманской до Арбатской:" << endl;
        cout << "От Бауманской до Арбатской:8мин";
        break;
    case 'D':
    case 'd':
        cout << "Путь от Бауманской до Домодедовской:" << endl;
        cout << "От Бауманской до Площадь Революции:6мин" << endl << "От Театральной до Домодедовской:27мин" << endl;
        cout << "Итого:37 мин с пересадками";
        break;
    case 'E':
    case 'e':
        cout << "Путь от Бауманской до Спортивной:" << endl;
        cout << "От Бауманской до Арбатской:8мин" << endl << "От Библиотека им.Ленина до Спортивной:7мин" << endl;
        cout << "Итого:20 мин с пересадками";
        break;
    default:
        break;
    }
    

    return 0;
}*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int num1;
    int num2;
    int num3;
    int num4=num1*num2;//правильный результат
    cout << "Введите первое число:";
    cin >> num1;
    cout << "Введите второе число:";
    cin >> num2;
    cout << "Введите результат умножения:";
    cin >> num3;
   
    if (num3 != num1 * num2) {
        cout << "Ответ не верный" << endl;
        cout << "Правильный ответ:" << num4;
    }
    else {
        cout << num3 << "Верно";
        
   
    }
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
