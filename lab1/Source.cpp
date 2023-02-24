#include <iostream>
#include <cstdlib>
#include <ctime>
#include <valarray>

using namespace std;
int main()
{
   
    srand(time(0));
    setlocale(LC_ALL, "Ukrainian");

    //��������� ���������� ����� ������. �����
    const int size = 10;
    int mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 100; 
    }

    //����������� ���������� valarray ������ ������
    valarray<int> valMas(mas, size);

   
    int sum = valMas.sum();
    int min = valMas.min();
    int max = valMas.max();

    //������� � �������� �������
    double avg = (double)sum / (double)size;

    
    cout << "�����: ";
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl << endl;
    cout << "����: " << sum << endl;
    cout << "�i�i������ ��������: " << min << endl;
    cout << "����������� ��������: " << max << endl;
    cout << "������ �����������: " << avg << endl;

    return 0;
}
