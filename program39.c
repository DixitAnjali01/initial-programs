// program to calculate the salary of an employee when HRA=15% and TA=20% Whwn basic pay is entered by the user
int main(){
    float basic_pay;
    printf("Entergcc the basic pay = ");
    scanf("%f",basic_pay);
    printf("The salary of the employee is %f",(basic_pay + ((15.0/100)*basic_pay) + ((20.0/100)*basic_pay)));
    return 0;
}