#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    
    cout << "*** Магазин у Миши ***" << endl << endl;
    
    // Количество упаковок
    
    int chocolate;
    cout << "Сколько шоколада: ";
    cin >> chocolate;
    
    int coffee;
    cout << "Сколько кофе: ";
    cin >> coffee;
    
    int beer;
    cout << "Сколько пива: ";
    cin >> beer;
    
    // Цены на товары
    
    double chocolateSum = 11.99;
    double coffeeSum = 5.99;
    double beerSum = 17.99;
    
    // Подсчёт суммы товаров;
    
    double sum = (chocolate * chocolateSum) + (coffee * coffeeSum) + (beer * beerSum);
    
    cout << endl;
    
    cout << "Итого: " << sum << "$" << endl;
    return 0;
}
