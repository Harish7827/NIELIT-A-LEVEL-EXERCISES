// Use bubble sort algorithm to sort array in ascending

#include<iostream>
using namespace std;
int main(){
    int pass, element, temp, sizeOfArr = 10;
    int dataArr[10] = {10,15,12,75,86,65,35,20,85,100};
    // printing array
    cout<<"\n--------------------------------------------------------\n";
    cout<<"Input array...\n";
    for(element = 0; element < sizeOfArr; element++){
        cout<<dataArr[element]<<" , ";
    }
    cout<<"\n--------------------------------------------------------\n";

    cout<<endl<<"Sorted array[Ascending Order]...\n\n";
    for(pass = 1; pass < 10; pass++){
        for(element = 0; element < sizeOfArr - pass; element++){
            if(dataArr[element] > dataArr[element + 1]){
                temp = dataArr[element + 1];
                dataArr[element + 1] = dataArr[element];
                dataArr[element] = temp;
            }
        }
        cout<<"Pass = "<<pass<<" Array = ";
        for(element = 0; element < sizeOfArr; element++){
                cout<<dataArr[element]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\nFinal Sorted in Ascending Order Array.....\n";
    for(element = 0; element < sizeOfArr; element++){
        cout<<dataArr[element]<<" , ";
    }
    cout<<"\n\n--------------------------------------------------------\n";

    cout<<endl<<endl<<"Sorted array[Descending Order]...\n\n";
    for(pass = 1; pass < 10; pass++){
        for(element = 0; element < sizeOfArr - pass; element++){
            if(dataArr[element] < dataArr[element + 1]){
                temp = dataArr[element];
                dataArr[element] = dataArr[element + 1];
                dataArr[element + 1] = temp;
            }

        }
        cout<<"Pass = "<<pass<<" Array = ";
        for(element = 0; element < sizeOfArr; element++){
                cout<<dataArr[element]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\nFinal Sorted in Descending Order Array.....\n";
    for(element = 0; element < sizeOfArr; element++){
        cout<<dataArr[element]<<" , ";
    }
    cout<<"\n";
    cout<<"\n--------------------------------------------------------\n";

    return 0;
}
