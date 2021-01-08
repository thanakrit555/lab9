//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

/*#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
    ifstream source("score.txt");
    int i =0;
    double average = 0, SD,sum = 0;
    string textline;
    while (getline(source,textline))
    {
        average += atof(textline.c_str());
        sum += pow((atof(textline.c_str())),2);
        i++;
    }
    average = average/i;
    SD = sqrt((sum/i)-pow(average,2));
    cout << "Number of data = "<<i<<endl;
    cout << setprecision(3);
    cout << "Mean = " << average << endl;
    cout << "Standard deviation = " << SD << endl;
    source.close();
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    for(int i =2;i<=6;i++){
        cout<<"C";
    }
    return 0;
}
