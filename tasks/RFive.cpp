class RFive
{
public:
    char* cstring;
    // Конструктор со списком инициализации и телом
    RFive(const char* arg)
        : cstring(new char[std::strlen(arg) + 1])
    {
        std::strcpy(cstring, arg);
    }
    // Деструктор
    ~RFive()
    {
        delete[] cstring;
    }
    // Конструктор копирования
    RFive(const RFive& other)
    {
        cstring = new char[std::strlen(other.cstring) + 1];
        std::strcpy(cstring, other.cstring);
    }
    // остальной код
    RFive& operator=(const RFive& other) // Оператор присваивания копированием (copy assignment)
    {
        RFive tmp(other);
        swap(*this, tmp);
        return *this;
    }
    RFive& operator=(RFive&& other) // Оператор присваивания перемещением (move assignment)
    {
        swap(*this, other);
        return *this;
    }
    //friend void swap(RFive& l, RFive& r)
    //{
    //    using std::swap;
    //    swap(l.cstring, r.cstring);
    //}
};
