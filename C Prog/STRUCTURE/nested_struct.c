#include <stdio.h>
#include <string.h>
int main()
{
    struct Address
    {
        char street[50];
        char city[50];
        int zip;
    };
    struct person
    {
        char name[50];
        int age;
        char sex;
        struct Address x;
    } h;
    strcpy(h.name, "Dinesh Kushwaha");
    h.age = 22;
    h.sex = 'M';
    strcpy(h.x.street, "346, Pipra Maaf");
    strcpy(h.x.city, "Shrinagar Mahoba UP");
    h.x.zip = 210433;
    printf("Name: %s\n", h.name);
    printf("Age: %d\n", h.age);
    printf("Sex: %c\n", h.sex);
    printf("Street: %s\n", h.x.street);
    printf("City: %s\n", h.x.city);
    printf("Zip: %d\n", h.x.zip);
        return 0;
}