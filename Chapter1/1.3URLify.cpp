#include<iostream>
#include<string>
using namespace std;
string urlify(string str)
{
   int space_count = 0, i;
    for (i = 0; str[i]; i++)
        if (str[i] == ' ')
            space_count++;
    while (str[i-1] == ' ')
    {
       space_count--;
       i--;
    }
    // Find new length.
    int new_length = i + space_count * 2 + 1;
      // Start filling character from end
    int index = new_length - 1;
 
    // Fill string termination.
    str[index--] = '\0';
    // Fill rest of the string from end
    for (int j=i-1; j>=0; j--)
    {
    // inserts %20 in place of space
        if (str[j] == ' ')
        {
            str[index] = '0';
            str[index - 1] = '2';
            str[index - 2] = '%';
            index = index - 3;
        }
        else
        {
            str[index] = str[j];
            index--;
        }
    }
 
    return str;
}
int main(int argc, char* argv[]){
	cout<<urlify("Mr John Smith     ")<<endl;
	return 0;
}