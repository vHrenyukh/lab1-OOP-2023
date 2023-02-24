#include <iostream>
#include <cstdlib>
#include <ctime>
#include <valarray>

using namespace std;
int main()
{
   
    srand(time(0));
    setlocale(LC_ALL, "Ukrainian");

    //генерація послідовних цілих рандом. чисел
    const int size = 10;
    int mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 100; 
    }

    //ініціалізація контейнера valarray вмістом масиву
    valarray<int> valMas(mas, size);

   
    int sum = valMas.sum();
    int min = valMas.min();
    int max = valMas.max();

    //середнж з плавачою крапкою
    double avg = (double)sum / (double)size;

    
    cout << "Масив: ";
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl << endl;
    cout << "Сума: " << sum << endl;
    cout << "Мiнiмальне значення: " << min << endl;
    cout << "Максимальне значення: " << max << endl;
    cout << "Середнє арифметичне: " << avg << endl;

    return 0;
}
