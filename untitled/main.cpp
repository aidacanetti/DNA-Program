#include <iostream>
#include <vector>
using namespace std;

int main(){
   std::string DNAstrand;
    int number;
    int length;
    char A ='A';
    char C ='C';
    char G ='G';
    char T = 'T';
    char U= 'U';
    int Acount=0;
    int Ccount=0;
    int Gcount=0;
    int Tcount=0;



   std::cout<< "Welcome to Aida's DNA sequence code!\n";
    std::cout<<"This program is case sensitive so please input upper case DNA sequences. \n";
    std::cout<<"Enter 1 to count the number of base pairs in your DNA strand. \n";
    std::cout<<"Enter 2 to calculate the percent of G C content in your strand. \n";
    std::cout<<"Enter 3 to calculate the number of A,T,C,G in your DNA strand. \n";
    std::cout<<"Enter 4 to convert DNA to mRNA. \n";
    std::cout<<"Input your number selection: ";
    std::cin>>number;
    std::cout<<"Input your DNA sequence code: ";
    std::cin>>DNAstrand;

    if (number == 1) {
        int size = DNAstrand.size();
        std::cout<<"Your DNA sequence is "<<size<<" base pairs. \n";
    }

    if (number == 2){for (int i=0; i<DNAstrand.size(); i++) {
        if (DNAstrand[i] == A) {
            Acount += 1;
        }
        if (DNAstrand[i] == C) {
            Ccount += 1;
        }
        if (DNAstrand[i] == G) {
            Gcount += 1;
        }
        if (DNAstrand[i] == T) {
            Tcount += 1;
        }

    } double GCcount= 100.0 * (Gcount + Ccount)/(Acount + Ccount + Gcount + Tcount);
        std::cout<<"Your GC content is "<<GCcount<<"%\n";
    }

    if (number == 3) {
        for (int i=0; i<DNAstrand.size(); i++) {
            if (DNAstrand[i] == A) {
                Acount += 1;
            }
            if (DNAstrand[i] == C) {
                Ccount += 1;
            }
            if (DNAstrand[i] == G) {
                Gcount += 1;
            }
            if (DNAstrand[i] == T) {
                Tcount += 1;
            }

        }
        std::cout<< "A: "<<Acount<<"\n";
        std::cout<< "C: "<<Ccount<<"\n";
        std::cout<< "G: "<<Gcount<<"\n";
        std::cout<< "T: "<<Tcount<<"\n";
    }

                if (number == 4){ for (int i=0; i<DNAstrand.size(); i++) {
                    if (DNAstrand[i] == A) {
                        DNAstrand[i]= U;
                    }
                } std::cout<<"mRNA sequence: "<<DNAstrand<<"\n";
                }

                return 0;// TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
            }