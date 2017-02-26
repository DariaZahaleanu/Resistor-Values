
//  main.cpp
//  Assignment
// Created by Daria Zahaleanu - daz261@nyu.edu on 9/15/16.
// Copyright © 2016 Daria Zahaleanu. All rights reserved.


#include <iostream>
#include<cmath>//declare math libary because I used the power function - pow ()

int main(int argc, const char * argv[])
{
    int choice(1), band1(10), band2(10), band3(10), band4(10);//declare variables and allot them a number of characters
    
MENU: std:: cout<<"Please select one of the following options: \n";//present the main menu options//create a reference bunk of statements called MENU
    std:: cout<<"1.Create resistance value\n";
    std:: cout<<"2.Help\n";
    std::cout<< "3.Exit\n";
    std::cout<<"Please introduce your choice:"<<std::endl;
    std::cin>>choice;//store the value introduces by user
        
    while (true)
{
    
    switch (choice)//use this function to switch between the main menu options
    {
case 1:
        {
            goto B;//B=secondary menu
        }
case 2:
        {
        std::cout<<"Help\n";//user redirected to MENU
        goto MENU;
        }
 case 3:
      std::cout<< "3.Exit\n";//program terminates
default: std::cout<<"Invalid option"<<std::endl;//if the option is not in the range [1, 3], the user will be notified with an error message
    }
}
B: std::cout<<"Create resistance value\n";//option 1
    std::cout << "Options for Band 1, Band 2 and Band 3 are:" << std::endl;//present the options
                std::cout << "0.Black" << std::endl;
				std::cout << "1.Brown" << std::endl;
				std::cout << "2.Red" << std::endl;
				std::cout << "3.Orange" << std::endl;
				std::cout << "4.Yellow" << std::endl;
				std::cout << "5.Green" << std::endl;
				std::cout << "6.Blue" << std::endl;
				std::cout << "7.Violet" << std::endl;
				std::cout << "8.Grey" << std::endl;
				std::cout << "9.White" << std::endl;
                std::cout << "10.Gold" << std::endl;
				std::cout << "11.Silver" << std::endl;
				std::cout << std::endl;//blank line
				std::cout << "Choose the value for band 0 in the range 1-9." << std::endl;
    std::cin>>band1;//store the input in band1
    if (band1>=0 || band1<12)
        std::cout<<"Choose the value for band 2 in the range 0-9.\n";//the user prompted to read the menu and to choose the number that matches the color
    
    while (band1<0 || band1>11)//loop that will urge the user to stop the program if the input is invalid, because it runs infinitely
    {
        std::cout<<"Invalid value"<<std::endl;
    }
    std::cin>>band2;//store the input in band2

    if (band2>=0 || band2<12)//the user prompted to read the menu and to choose the number that matches the color

        std::cout<<"Choose the value for band 3 in the range 0-9.\n";
    while (band2<0 || band2>11)//loop that will urge the user to stop the program if the input is invalid, because it runs infinitely
    {
        std::cout<<"Invalid value"<<std::endl;
    }
    std::cin>>band3;//store the input in band3
    if (band3>=0 || band3<12)//the user prompted to read the menu and to choose the number that matches the color
        std::cout<<"Choose the value for tolerance: gold(10) or silver(11).\n";
    
    while (band3<0 || band3>11)//loop that will urge the user to stop the program if the input is invalid, because it runs infinitely
    {
        std::cout<<"Invalid value"<<std::endl;
    }
    std::cin>>band4;//store the input from the user in band4
    if (band4==10)//if band4 is gold, then it is assigned value 5
        band4=5;
    else if(band4==11)//if band4 is silver, then it is assigned value 10
        band4=10;
    else while (band4<10 || band4>11)//loop that will urge the user to stop the program if the input is invalid , because it runs infinitely
    { std::cout<<"Invalid value"<<std::endl;
    }
    std::cout << "The resistance value is " << band1 << band2 << " X 10^" << band3 << "(+/-)" << band4<< "%"<<" = "<<((band1*10)+band2)*(pow(10,band3))*(band4+1)/10000<< " / "<< ((band1*10)+band2)*(pow(10,band3))*(band4-1)/10000<<" Kiloohms" <<std::endl;//print the resistance value
    return 0;
}


