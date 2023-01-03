#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;



int main(){
    int count = 0;
    double mean, std_Dev, num1, num2;

    
    ifstream source;
    source.open("score.txt");
    string textline;
    
    while(getline(source,textline)){
        num1 += atof(textline.c_str());
        num2 += pow(atof(textline.c_str()),2);
        count += 1;
    }
    mean = num1/count;
    std_Dev = sqrt((num2/count)-pow(mean,2));


    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << std_Dev << '\n';
    return 0;
}