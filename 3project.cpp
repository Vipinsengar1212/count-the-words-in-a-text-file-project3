
#include <iostream>

#include <cstring>

using namespace std;
void inpoted(string&para){
    cout<<"type something";
 getline(cin>>ws, para);

}
void wordcounter(string para){

    int word=1;
    for (int  i = 0; i < para.length(); i++)
    {
        if(para.at(i) == ' ')
        {
            if (para.at(i+1)==' ')
            {
                continue;
            }
            else{
            word++;

            }
        }
    }
    cout<<"tota; words::"<<word <<endl;
}

 int main (){

 string paragraph;
 inpoted(paragraph);
wordcounter(paragraph);

    



    return 0;
}



