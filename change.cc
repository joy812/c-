#include <iostream>
#include <cstring>
#include<cctype>
class Score2
{
    int korean;
public:
    int English,Mathematics;
    void set_score(int Kor){korean=Kor;};
    
    int get_score(){return korean;};
    
};

int main(void)
{
    Score2 Student1;
    Student1.English=88;
    Student1.Mathematics=91;
    Student1.set_score(78);
    
    std::cout << Student1.English<<" ,"
    <<Student1.Mathematics<< std::endl;
    std::cout << Student1.get_score() << std::endl;
    
    
    
    
    return 0;
}