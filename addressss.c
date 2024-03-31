#include <stdio.h>

struct Address {
    int Cross;
    char Landmark[50];
    int pincode;
};

struct Employee {
    char name[50];
    struct Address addr;
};

int main() {
    struct Employee person = {"Supriya", {7, "MaruthiRoad", 560091}};
    printf("Name: %s\n", person.name);
    printf("Address: %d/%s/%d\n", person.addr.Cross, person.addr.Landmark, person.addr.pincode);
    return 0;
}
