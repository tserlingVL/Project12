#include <iostream>
#include <cctype>
using namespace std;
int main() {
    //задание 1
    char symbol = 0;
    setlocale(LC_ALL, "Russian");
    cout << "Введите символ ->";

    cin >> symbol;

    if (isalpha(symbol))

    {

        cout << "Вы ввели букву" << endl;

    }

    else if (isdigit(symbol))

    {

        cout << "Вы ввели цифру" << endl;

    }

    else if (ispunct(symbol))

    {

        cout << "Вы ввели знак препинания" << endl;

    }

    else

    {

        cout << "Вы ввели не букву, не цифру и не знак препинания" << endl;

    }

    //задание 2
    int sf;
    cout << "\n\nвведите стоимость разговора ";
    cin >> sf;
    cout << "стоимость разговора равна " << sf;


    //задание 3
    cout << "\nномер 1";
    cout << "\nВведите желаемый доход Васи ";
    int dohod;
    cin >> dohod;
    int opozd;
    cout << "кол-во его опозданий ";
    cin >> opozd;
    int straf;
    straf = (opozd / 3) * 20;
    dohod += straf;
    int kolvostrochek;
    kolvostrochek = dohod / 50;
    dohod = dohod - kolvostrochek * 50;
    if (dohod > 0) kolvostrochek++;
    cout << kolvostrochek * 100 << " строчек кода должен написать Данил";
    cout << "\nномер 2\n";
    cout << "Введите кол-во строчек кода Витали ";
    cin >> kolvostrochek;
    cout << "Введите желаемый доход ";
    cin >> dohod;
    opozd = 0;
    kolvostrochek /= 100;
    kolvostrochek *= 50;
    if (dohod > kolvostrochek) {
        cout << "Вася не получит желаемый доход :(";
    }
    else {
        kolvostrochek -= dohod;
        int a;
        a = kolvostrochek / 20;

        opozd = a * 3;
        kolvostrochek -= a;
        if (kolvostrochek >= 0) opozd += 2;
        cout << "Вася может опоздать " << opozd << " раз";

    }
    cout << "\nномер 3\n";
    cout << "Введите кол-во строчек кода Витали ";
    cin >> kolvostrochek;
    cout << "кол-во его опозданий ";
    cin >> opozd;
    kolvostrochek /= 100;
    dohod = kolvostrochek * 50;
    opozd /= 3;
    opozd *= 20;
    if (opozd >= dohod) cout << "Васе ничего не заплятят";
    else cout << "Васе заплятят " << dohod - opozd;
}