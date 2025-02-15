/*
structure pointer and passes it to afunction
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct item{
    char *itemName;
    int Quantity;
    float price;
    float amount;
};

void readitem (struct item *it)
{
    //scanning
    printf("\n enter item name quantity price \n");
    scanf("%s %d %f",it->itemName,&it->Quantity,&it->price);
    it->amount = (float)(it->Quantity) * (it->price);
}
void printitem(struct item *it)
{
    printf("\n product name:%s \tQuantity:%d \t price:%f \t amount:%f \n",it->itemName,it->Quantity,it->price,it->amount);
}

int main()
{
    struct item a;
    struct item *ptr=&a;
    ptr->itemName=(char*)malloc(100*sizeof(char));
    if(ptr == NULL)
        exit(-1);
    readitem(ptr);
    printitem(ptr);
    free(ptr->itemName);
    return 0;
}