#include <iostream>
#include <math.h>

int main()
{
  // Объявляю переменную i типа int
  int i;
  // Инициализирую переменную i значением 69 
  i = 69; 
  // Объявляю переменную number типа int и инициализирую ее значением 72
  int number = 72;
  // Перезаписываю значение i на 69 + 72 
  i += number; 
  // Объявляю одномерный массив размерностью 3 и инициализирую все его элементы значением 0
  int arr[3] {0, 0, 0}; 
  // Объявляю укзатель ip и затем инициализирую адресом переменной i
  int *ip = &i; 
  // В переменную number записываю значение, расположенное по адресу ip (69)
  number = *ip; 
  // Записываю значение 15 в память по адресу ip
  *ip = 15; 
  // В указатель ip записываю адрес элемента массива arr[0]
  ip = &arr[0]; 
  // Смещаю адресс в указателе ip на 8 байт (2 int) и ip теперь содержит адрес элемента arr[2]
  ip += 2; 
  // Присваиваю элементу arr[0] значение 5
  arr[0] = 5; 
  // По адресу ip (arr[2]) записываю значение 6 
  *ip = 6; 
}