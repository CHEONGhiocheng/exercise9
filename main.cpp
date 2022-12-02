//
//  main.cpp
//  exercise9
//
//  Created by jane cheong  on 13/11/2022.
//

#include <iostream>
#include <map>
//#include "name.h"
//#include "Phonenum.h"
#include <string>

int main(int argc, const char * argv[]) {
    std::string n;
    unsigned long p;
    std::map<std::string, unsigned long> infor_name={
        {"A",1234},{"B", 3456},{"C",7544},{"D",3455},
    };
    std::map<unsigned long,std::string> infor_phone={
        {1234,"A"},{ 3456,"B"},{7544,"C"},{3455,"D"}
    };
   std::cout << "Enter the information of name" <<std::endl;
   std::cin >> n;
  std::cout << "Enter the information of phone" <<std::endl;
 std::cin >> p;
    auto phone = infor_phone.find(p);
    auto name = infor_name.find(n);
    if (name != infor_name.end())
        {
            (std::cout << "Information exists!" <<std::endl <<"The information name ") << name->first << " is " << name->second << std::endl;
        }
        else
        {
            std::cout <<"Information does not exist!" << std::endl << "Sorry for inconvenience."<< std::endl <<"Please try again with correct information from A to D";
        }
    if (phone != infor_phone.end())
        {
            (std::cout << "Information exists!" <<std::endl <<"The information phone ") << phone->first << " is " << phone->second << std::endl;
        }
        else
        {
            std::cout <<"Information does not exist!" << std::endl << "Sorry for inconvenience."<< std::endl <<"Please try again with correct information";
        }
    
    /*
    for(auto x: informations)
     {
        std::cout << x.first << "->" << x.second << std::endl;
     }
    std::cout<< informations.find("J") <<std::endl;
    std::cout << "Enter the information of name" <<std::endl;
    std::cin >> n;
    std::cout << "Enter the information of phonenum" << std::endl;
    std::cin >> p;
 for(auto x: informations){
    if (n != x.first && p != x.second){
        std::cout<<"The information of name can't find \n"<<std::endl;
    }
    else{
        std::cout << "The information of name can find \n "<<std::endl;
    }
    }*/
    return 0;
}
