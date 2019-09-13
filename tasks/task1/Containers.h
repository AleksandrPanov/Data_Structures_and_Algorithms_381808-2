#pragma once
class Container
{
protected:
	int size;
public:
	virtual int getSize() const = 0; 			//возвращает количество элементов в контейнере
	virtual int getCapacity() const = 0;		//возвращает максимально возможное количество элементов в контейнере
	virtual void show() const = 0;				//выводит значение элементов контейнера в консоль, через пробел
	
	virtual void addCapacity(int n) = 0;		//увеличивает максимально возможную вместимость контейнера на n элементов (без потери данных)

	
	virtual ~Container();					    //освобождает выделенную память
};

class MyArray : public Container
{
	int *ar;
public:
	MyArray();
	MyArray(int n);								//создает массив из n нулевых элементов
	MyArray(const MyArray &ar);					//выделяет память и поэлементно копирует объект ar

	int getSize() const;						//возвращает size
	int getCapacity() const;					//возвращает size
	void show() const;

	void addCapacity(int n);					// увеличивает максимально возможную вместимость контейнера на n (нулевых) элементов(без потери данных)

	int& operator[](int index);					//доступ к i-ому элементу
	MyArray& operator=(const MyArray &ar);		//очищает память текущего объекта, выделяет память заново и поэлементно копирует объект ar

	~MyArray();
};