#include <stdio.h>

union Payment {
    float cashAmount;
    int cardNumber;  // fixed typo
};

struct Transaction {
    int transactionID;
    union Payment pay;
};

int main() {
    struct Transaction t1 = {101, {10000.67}}; // direct initialization

    printf("Transaction Id: %d\n", t1.transactionID);
    printf("Transaction Cash Amount: %.2f\n", t1.pay.cashAmount);

    return 0;
}