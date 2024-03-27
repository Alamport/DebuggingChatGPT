int main(int argc, char argv[])
{
        int applePrice = 2;
        int bananaPrice = 3;
        int milkPrice = 4;

        // error 1
        if (applePrice = bananaPrice) {
                printf("Apples have the same price as bananas\n");
        }

        // error 2
        int totalCost = applePrice + bananPrice + milkPrice;

        printf("total cost of groceries is $%i\n", totalCost);

        // error 3
        printf(Groceries are done!);
}