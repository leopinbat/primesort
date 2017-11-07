/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <stdlib.h>
 

int Test_Primo(int n){
    int primo = 0;
    
    for(int k=1; k<=n; k++)
        if((n%k)==0)
            primo++;
    if ((n == 1) || (primo>2) )
        return 0;

    else
        return 1;


}

int main() {

    int n;
    FILE *file;	
    file = popen("sort -n -r", "w");
    while (1){
	scanf ("%d", &n);

// Criterio de parada em -1
	if (n >= 0) {
	    if ((Test_Primo(n) == 0) && (n!=0)){ 			
	        fprintf (file,"%d\n",n);
	    }	  			  				  				  			
	}  	
	else { 		
	    pclose(file);
	    break;	  
	}
   }

    return 0;
}
