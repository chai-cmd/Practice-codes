/*demonstrate the concept of parameter passing in C by implementing a function increment(int n) wiht a void return type. 
The function should increment the received parameter by 1 and display its value inside the fumction. Print the value 
of the original variable before and after function call in main() to verify that the actual variable remains unchanged. */


void increment(int n){
    n++;
    printf("Value inside the function: %d\n", n);

}


int main(){
    int num = 5;
    printf("Value before function call: %d\n", num);
    increment(num);
    printf("Value after function call: %d\n", num);

    return 0;
    
}
