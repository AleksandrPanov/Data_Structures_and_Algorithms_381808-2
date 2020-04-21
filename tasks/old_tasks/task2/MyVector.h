#pragma once
#include "Containers.h"
class MyVector : public MyArray
{
protected:
	int capacity;								//размер выделенной памяти
public:
	MyVector();
	MyVector(int n);							//создает массив из n нулевых элементов
	MyVector(int n, int value);					//создает массив из n элементов с значением value
	MyVector(const MyVector &vec);				//выделяет память и поэлементно копирует объект vec

	int getCapacity() const;					//возвращает capacity

	void addCapacity(int n);					//увеличивает максимально возможную вместимость контейнера на n (нулевых) элементов(без потери данных)
	void pushBack(int val);						//если size < capacity, то ar[size++] = val; иначе сначала выделить память
	int popBack();								//возвращает помледний элемент, size уменьшается на 1
	void insert(int index, int val);			//вставдяет элемент val на позицию index, при необходимости выделяется новая память
	int remove(int index);						//элементы с номерами index+1, ..., size смещаются на 1 элемент ближе к началу массива. элемент с номером index в таком случае "удаляется", делается его return

	MyVector& operator=(const MyVector &vec);	//очищает память текущего объекта, выделяет память заново и поэлементно копирует объект vec
};