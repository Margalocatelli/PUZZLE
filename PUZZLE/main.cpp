//
//  main.cpp
//  PUZZLE
//
//  Created by Маргарита Локателли on 02.02.17.
//  Copyright © 2017 Маргарита Локателли. All rights reserved.
//
// Вывести на экран числа от 1 до 100 не используя циклы, условные операторы и "хитрости" языка


#include <iostream>
using namespace std;

//Объявляем класс, в котором обозначаем пересенную i и создаем конструктор, в котором увеличиваем i на 1
class Numbers {
    static int i;
public:
    Numbers() { cout<< ++i <<endl; }
};

//Присваеваем переменной i значение 0
    int Numbers::i = 0;

//Выводим массив чисел
int main(int argc, const char * argv[]) {
    Numbers array [100];
    return 0;
}
