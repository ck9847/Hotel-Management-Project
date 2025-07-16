//
// Created by Lenovo on 25-7-11.
//
#include <iostream>


int main() {
    int quant;
    int choice;
    //Quantity
    int Qrooms=0,Qpasta=0,Qbuger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food items sold
    int Srooms=0,Spasta=0,Sbuger=0,Snoodles=0,Sshake=0,Schicken=0;
    //Total price of items
    int Total_rooms=0,Total_pasta=0,Total_buger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;

    std::cout<<"\n\t Quantity of items we have";
    std::cout<<"\n Rooms available: ";
    std::cin>>Qrooms;
    std::cout<<"\n Quantity of pasta: ";
    std::cin>>Qpasta;
    std::cout<<"\n Quantity of buger: ";
    std::cin>>Qbuger;
    std::cout<<"\n Quantity of noodles: ";
    std::cin>>Qnoodles;
    std::cout<<"\n Quantity of shake: ";
    std::cin>>Qshake;
    std::cout<<"\n Quantity of chicken: ";
    std::cin>>Qchicken;

    m:
    std::cout<<"\n\t\t\t Please select from the menu options ";
    std::cout<<"\n\n1) Rooms";
    std::cout<<"\n2) Pasta";
    std::cout<<"\n3) Buger";
    std::cout<<"\n4) Noodles";
    std::cout<<"\n5) Shake";
    std::cout<<"\n6) Chicken-roll";
    std::cout<<"\n7) Information regarding sales and collection";
    std::cout<<"\n8) Exit";

    std::cout<<"\n\n Please Enter your choice: ";
    std::cin>>choice;

    switch(choice) {
        case 1:
            std::cout<<"\n\n Enter the number of your rooms you want: ";
            std::cin>>quant;
            if (Qrooms-Srooms>=quant) {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200;
                std::cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
            }else {
                std::cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
            }
        break;
        case 2:
            std::cout<<"\n\n Enter pasta Quantity: ";
            std::cin>>quant;
            if (Qpasta-Spasta>=quant) {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant*250;
                std::cout<<"\n\n\t\t"<<quant<<" pasta is the order! ";
            }else {
                std::cout<<"\n\tOnly"<<Qpasta-Spasta<<" pasta is remaining in hotel";
            }
        break;
        case 3:
            std::cout<<"\n\n Enter buger Quantity: ";
            std::cin>>quant;
            if (Qbuger-Sbuger>=quant) {
                Sbuger=Sbuger+quant;
                Total_buger=Total_buger+quant*120;
                std::cout<<"\n\n\t\t"<<quant<<" buger is the order! ";
            }else {
                std::cout<<"\n\tOnly"<<Qbuger-Sbuger<<" buger is remaining in hotel";
            }
        break;
        case 4:
            std::cout<<"\n\n Enter noodle Quantity: ";
            std::cin>>quant;
            if (Qnoodles-Snoodles>=quant) {
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*250;
                std::cout<<"\n\n\t\t"<<quant<<" noodle is the order! ";
            }else {
                std::cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" noodles is remaining in hotel";
            }
        break;
        case 5:
            std::cout<<"\n\n Enter shake Quantity: ";
            std::cin>>quant;
            if (Qshake-Sshake>=quant) {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*120;
                std::cout<<"\n\n\t\t"<<quant<<" shake is the order! ";
            }else {
                std::cout<<"\n\tOnly"<<Qshake-Sshake<<" shake is remaining in hotel";
            }
        break;
        case 6:
            std::cout<<"\n\n Enter chicken Quantity: ";
            std::cin>>quant;
            if (Qchicken-Schicken>=quant) {
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*150;
                std::cout<<"\n\n\t\t"<<quant<<" chicken is the order! ";
            }else {
                std::cout<<"\n\tOnly"<<Qchicken-Schicken<<" chicken is remaining in hotel";
            }
        break;
        case 7:
            std::cout<<"\n\t\tDetails of sales and collection ";
            std::cout<<"\n\n Number of rooms we had : "<<Qrooms;
            std::cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
            std::cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
            std::cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

            std::cout<<"\n\n Number of pastas we had : "<<Qpasta;
            std::cout<<"\n\n Number of pastas we sold"<<Spasta;
            std::cout<<"\n\n Remaining pastas: "<<Qpasta-Spasta;
            std::cout<<"\n\n Total pastas collection for the day: "<<Total_pasta;

            std::cout<<"\n\n Number of buger we had : "<<Qbuger;
            std::cout<<"\n\n Number of buger we sold"<<Sbuger;
            std::cout<<"\n\n Remaining buger: "<<Qbuger-Sbuger;
            std::cout<<"\n\n Total buger collection for the day: "<<Total_buger;

            std::cout<<"\n\n Number of shake we had : "<<Qshake;
            std::cout<<"\n\n Number of shake we sold"<<Sshake;
            std::cout<<"\n\n Remaining shake: "<<Qshake-Sshake;
            std::cout<<"\n\n Total shake collection for the day: "<<Total_shake;

            std::cout<<"\n\n Number of chicken-roll we had : "<<Qchicken;
            std::cout<<"\n\n Number of chicken-roll we sold"<<Schicken;
            std::cout<<"\n\n Remaining chicken-roll: "<<Qchicken-Schicken;
            std::cout<<"\n\n Total chicken-roll collection for the day: "<<Total_chicken;

            std::cout<<"\n\n Total Collection for the day:  "<<Total_rooms+Total_pasta+Total_buger+Total_shake+Total_chicken;
        break;
        case 8:
            exit(0);
        default:
            std::cout<<"\n Please select  the numbers mentioned above!";

    }
    goto m;
}
