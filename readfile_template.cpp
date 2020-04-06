#include <fstream>
#include <stdio.h> 

using namespace std;  


int main(int argc,char* argv[]) 
{ 
    if(argc<=1){
        printf("No input filepath.\n"); 
        return 0;
    } 
        
    // argv[1]: filepath
    ifstream file(argv[1]);

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            printf("%s", line.c_str());
        }
        file.close();
    }
    
    printf("\ndone\n");
    return 0; 
} 


