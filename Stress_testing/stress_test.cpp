#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        input pattern : 10
                        9 7 2 9 1 7 4 0 2
    */
    freopen("input.txt","w",stdout);

    int test_case = 1;
    // cout<<rand()<<endl;
    while(test_case--){
        int n = rand() % 100 + 2; cout<<n<<endl;
        for(int i=0;i<n;i++){
            int a = rand() % 1000;
            cout<<a<<" ";
        }
        cout<<endl;

        //genearting output 1 
        system("g++ pairwise_max_product.cpp && ./a.out < input.txt > output_solution.txt");
        //generating output 2
        system("g++ brute_force.cpp && ./a.out < input.txt > brute_force_solution.txt");
        //comparing output 1 and output 2
        system("diff output_solution.txt brute_force_solution.txt");


    }
}