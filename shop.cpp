#include <iostream>
using namespace std;

void priceTag ()
{
    double chocolateSum = 0.75;
    double coffeeSum = 0.37;
    double beerSum = 0.56;
    
    cout << "* Цены на товары *" << endl;
    cout << "Шоколад: " << chocolateSum << "$" << endl;
    cout << "Кофе: " << coffeeSum << "$" << endl;
    cout << "Пиво: " << beerSum << "$" << endl;
    cout << endl;
}

void sumAmount (double productOne, double productTwo, double productThree)
{
    double chocolateSum = 0.75;
    double coffeeSum = 0.37;
    double beerSum = 0.56;

    double sum = (productOne * chocolateSum) + (productTwo * coffeeSum) + (productThree * beerSum);
    
    cout << endl;
    
    cout << "Спасибо за покупку!" << endl;
    
    cout << "Итого: " << sum << "$" << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    
    cout << "*** Магазин у Миши ***" << endl << endl;
    
    priceTag();
    
    int chocolate;
    cout << "Количество шоколада: ";
    cin >> chocolate;
    
    int coffee;
    cout << "Количество кофе: ";
    cin >> coffee;
    
    int beer;
    cout << "Количество пива: ";
    cin >> beer;
    
    if (beer > 0)
    {
        cout << endl;
        
        cout << "Вам есть 18 лет?" << endl;
        
        string say;
        cin >> say;
        
        if (say == "Да")
        {
            sumAmount(chocolate, coffee, beer);
        }
        else
        {
            cout << endl;
            
            cout << "Отказано в продаже" << endl;
        }
    }
    else
    {
        sumAmount(chocolate, coffee, beer);
    }
    
    return 0;
}
