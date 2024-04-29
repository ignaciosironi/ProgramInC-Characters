#include <stdio.h>
#include <stdio.h>
#include <string.h>


int main()
{
    char c;
    char primeraLetraPalabra;
    char ultimaLetraPalabra;
    char primeraLetraFrase;
    int cont=0;
    int cont2=0;
    int cont3=0;
    
    
    
    printf("ingrese una frase y finalice con punto: ");
    c=getchar();
    
    while(c!='.'){
        while(c!=' '&&c!='.'){
            cont++;
            
            if(cont==1){
               primeraLetraPalabra=c;
            }else if(cont!=1){
                ultimaLetraPalabra=c;
            }
            
            if(cont3==0){
                primeraLetraFrase=primeraLetraPalabra;
                cont3++;
            }
            
            if(cont==1){
                putchar(primeraLetraFrase);
            }else if(cont!=1){
                putchar(c);
            }
            
            c=getchar();
            
            if(primeraLetraPalabra=='a'&&ultimaLetraPalabra=='s'&&(c==' '||c=='.')){
                cont2++;
                cont=0;
            }else if(c==' '){
                cont=0;
            }
            
        }
        
        
        while(c==' '&&c!='.'){
            c=getchar();
            if(c!=' '){
                putchar(' ');
		        putchar(' ');
		        putchar(' ');
            }
        }
        
        
    }
    
    printf("\nHay %d palabras de la frase original que empiezan con 'a' y terminan con 's'.\n",cont2);

    return 0;
}