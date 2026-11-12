#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,choice,balance;
    int is_student = 0;
    int base_price = 0;
    int discount1 = 0;
    int discount2 = 0;
    int total_charges;
    do{
            base_price = 0;
            discount1 = 0;
           discount2 = 0;

    printf("==== Data packages====\n");
    printf("Package No 1\n");
    printf("Package No 2\n");
    printf("Package No 3\n");
    printf("Package No 4\n");
    printf("Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Its our famous package , sir! \n");
        base_price = 1500;
        break;

    case 2:
        printf("Its our most affordable and best package, Good choice\n");
        base_price = 2500;
        break;
    case 3:
        printf("Its a bit expensive but the more u pay the better the package is \n");
        base_price = 3500;
        break;
    case 4:
        printf("One of the legendary package , shout out\n");
        base_price = 4000;
        break;
    case 5:
    printf("Thank you sir\n");

    return 0;
    default:
        printf("Invalid package\n");
        break;
    }
if (choice >= 1 && choice <= 4) {
            printf("Enter your age: ");
            scanf("%d", &age);

            printf("Are you a student? (1 for Yes, 0 for No): ");
            scanf("%d", &is_student);

            // discount1: 10% off for youth (18 or under) or seniors (60 or older)
            if ((age > 0 && age <= 18) || age >= 60) {
                discount1 = (base_price * 10) / 100;
            }

            // discount2: 15% off for students
            if (is_student == 1) {
                discount2 = (base_price * 15) / 100;
            }

            total_charges = base_price - discount1 - discount2;

            printf("\n--- Bill Summary ---\n");
            printf("Base Price:       %d\n", base_price);
            printf("Age Discount:    -%d\n", discount1);
            printf("Student Discount:-%d\n", discount2);
            printf("Total Bill:       %d\n", total_charges);
        }

    } while (choice != 5);

    return 0;
}
