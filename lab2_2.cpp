#include <stdlib.h>
#include <iostream>
#include <cstring>

struct TwoInts
{
  int a;
  int b;
};

struct StructWithArray
{
  int arr[4];
  int* someNumber;
};

int main()
{
  // Создаем экземпляр структуры TwoInts и инициализируем его поля значениями 5 и 7.
  TwoInts i2 = { };
  i2.a = 5;
  i2.b = 7;

  // Выводим значения полей a и b на экран.
  std::cout << i2.a << std::endl;
  std::cout << i2.b << std::endl;

  // Создаем экземпляр структуры StructWithArray и инициализируем его поля значениями по умолчанию.

  StructWithArray s = { };
  s.arr[0] = 10;

  // Создаем еще один экземпляр структуры StructWithArray и инициализируем его поля значениями по умолчанию.

    StructWithArray s1 = { };
  s1.arr[0] = 15;

  // Создаем указатель на структуру StructWithArray и делаем его указывать на экземпляр s.
  StructWithArray* sPointer = &s;

  // Меняем значение элемента arr[0] в структуре s через указатель sPointer.
  sPointer->arr[0] = 20;

  // Выводим значение элемента arr[0] в структуре s.
  std::cout << s.arr[0] << std::endl;

  // Меняем значение элемента arr[0] в структуре s напрямую.
  s.arr[0] = 25;

  // Выводим значение элемента arr[0] в структуре s.
  std::cout << s.arr[0] << std::endl;

  // Меняем значение элемента arr[0] в структуре s через указатель sPointer.
  sPointer->arr[0] = 30;

  // Выводим значение элемента arr[0] в структуре s.
  std::cout << s.arr[0] << std::endl;

  // Переключаем указатель sPointer, чтобы он указывал на структуру s1.
  sPointer = &s1;

  // Меняем значение элемента arr[0] в структуре s1 через указатель sPointer.
  sPointer->arr[0] = 35;

  // Выводим значение элемента arr[0] в структуре s и s1.
  std::cout << s.arr[0] << std::endl;
  std::cout << s1.arr[0] << std::endl;

  // Создаем массив структур StructWithArray и инициализируем его значениями по умолчанию.

  StructWithArray structArray[2] = { };

  // Устанавливаем значение элемента arr[3] в первой структуре массива.
  structArray[0].arr[3] = 77;

  // Создаем указатель, который указывает на элемент arr[3] в структуре s.
  sPointer = &s;
  int* pointer = &sPointer->arr[3];

  // Меняем значение элемента arr[3] в структуре s через указатель pointer.
  s.arr[3] = 72;

  // Выводим значение, на которое указывает указатель pointer.
  std::cout << *pointer;

  // Создаем экземпляр структуры StructWithArray с использованием memset, заполняя его нулями.
  StructWithArray memory;
  memset(&memory, 0, sizeof(StructWithArray));

  return 0;
}
