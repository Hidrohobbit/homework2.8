#include <iostream>
#include <string>

int function(std::string str, int forbidden_length)
{
    if (forbidden_length == str.length())
    {
        throw std::exception("bad_length");
    }
    return str.length();
}

int main()
{
    setlocale(LC_ALL, "Russian");
 
    int forbidden_length = 0;
    bool end_while = true;
    std::string str;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    
    while(end_while)
    {
        std::cout << "Введите слово: ";
        std::cin >> str;
        try
        {
            std::cout << "Длинна слова " << str << " равна " << function(str, forbidden_length) << std::endl;
        }
        catch (const std::exception& ex)
        {
            std::cout << "Вы ввели слово запретной длинны! До свидания.";
            end_while = false;
        }
    }
    return 0;
}