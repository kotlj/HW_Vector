
#include <iostream>
#include <string>
#include <vector>

struct trainInfo
{
    int number;
    std::string time;
    std::string ToStation;
};

inline void add(std::vector<trainInfo> &obj, int _number, const char* _time, const char* _toStation)
{
    trainInfo temp; temp.number = _number, temp.time = _time, temp.ToStation = _toStation;
    obj.push_back(temp);
}
void printAll(std::vector<trainInfo> &obj)
{
    for (auto it : obj)
    {
        std::cout << "-------------------------\n";
        std::cout << it.number << '\n';
        std::cout << it.time << '\n';
        std::cout << it.ToStation << '\n';
        std::cout << "-------------------------\n";
    }
}
void print(std::vector<trainInfo> &obj, int _TrainNumber)
{
    for (auto it : obj)
    {
        if (it.number == _TrainNumber)
        {
            std::cout << "-------------------------\n";
            std::cout << it.number << '\n';
            std::cout << it.time << '\n';
            std::cout << it.ToStation << '\n';
            std::cout << "-------------------------\n";
        }
    }
}

int main()
{
    std::vector<trainInfo> test1;
    add(test1, 1, "10:00", "Somewhere In Nevada");
    add(test1, 2, "20,00", "Parish Rail At Yoytsu");
    printAll(test1);
    print(test1, 2);
}