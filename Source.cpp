#include <iostream>
#include <cctype>
using namespace std;
int main() {
    //������� 1
    char symbol = 0;
    setlocale(LC_ALL, "Russian");
    cout << "������� ������ ->";

    cin >> symbol;

    if (isalpha(symbol))

    {

        cout << "�� ����� �����" << endl;

    }

    else if (isdigit(symbol))

    {

        cout << "�� ����� �����" << endl;

    }

    else if (ispunct(symbol))

    {

        cout << "�� ����� ���� ����������" << endl;

    }

    else

    {

        cout << "�� ����� �� �����, �� ����� � �� ���� ����������" << endl;

    }

    //������� 2
    int sf;
    cout << "\n\n������� ��������� ��������� ";
    cin >> sf;
    cout << "��������� ��������� ����� " << sf;


    //������� 3
    cout << "\n����� 1";
    cout << "\n������� �������� ����� ���� ";
    int dohod;
    cin >> dohod;
    int opozd;
    cout << "���-�� ��� ��������� ";
    cin >> opozd;
    int straf;
    straf = (opozd / 3) * 20;
    dohod += straf;
    int kolvostrochek;
    kolvostrochek = dohod / 50;
    dohod = dohod - kolvostrochek * 50;
    if (dohod > 0) kolvostrochek++;
    cout << kolvostrochek * 100 << " ������� ���� ������ �������� �����";
    cout << "\n����� 2\n";
    cout << "������� ���-�� ������� ���� ������ ";
    cin >> kolvostrochek;
    cout << "������� �������� ����� ";
    cin >> dohod;
    opozd = 0;
    kolvostrochek /= 100;
    kolvostrochek *= 50;
    if (dohod > kolvostrochek) {
        cout << "���� �� ������� �������� ����� :(";
    }
    else {
        kolvostrochek -= dohod;
        int a;
        a = kolvostrochek / 20;

        opozd = a * 3;
        kolvostrochek -= a;
        if (kolvostrochek >= 0) opozd += 2;
        cout << "���� ����� �������� " << opozd << " ���";

    }
    cout << "\n����� 3\n";
    cout << "������� ���-�� ������� ���� ������ ";
    cin >> kolvostrochek;
    cout << "���-�� ��� ��������� ";
    cin >> opozd;
    kolvostrochek /= 100;
    dohod = kolvostrochek * 50;
    opozd /= 3;
    opozd *= 20;
    if (opozd >= dohod) cout << "���� ������ �� ��������";
    else cout << "���� �������� " << dohod - opozd;
}