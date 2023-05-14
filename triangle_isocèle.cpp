#include <iostream>
using namespace std;

int main()
    {
        int nbrligne, nesp, l=2, nbretoile;
        char etoile='*';
        char espace=' ';

        cout<<"veuillez entrer la hauteur de votre triangle isocèle: ";
        cin>>nbrligne;
        nesp=nbrligne;


        for( int i=0; i<nbrligne; i++ )
            {
                for(int j=0; j<nesp; j++)
                {
                    cout<<espace;
                }
                nesp--;

                for(int k=1; k<l;k++)
                    {
                        cout<<etoile;
                    }
                    l+=2;
                cout<<endl;
            }

    }
