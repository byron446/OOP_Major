#include<vector>
#include <iostream>

int main()
{
    std::vector<int> grades;
    int grade;
    std::cin >> grade;
    grades.push_back(grade);
    std::cout << grades.at(0);
    return 0;
}