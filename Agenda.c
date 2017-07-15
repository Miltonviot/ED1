#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Agenda.h"


int main (void){

    tp_contato *ptr_Contato = NULL;
    int contadorInserir=0;


  int opcao=10;

  while(opcao > 0){
    puts("____________________________________________");
    puts("{1} Isenrir contatos                       _");
    puts("{2} Excluir contatos                       _");
    puts("{3} Alterar contatos                       _");
    puts("{4} Ordenar contatos                       _");
    puts("{5} Mostrar contatos                       _");
    puts("{6} Buscar contatos                        _");
    puts("{0} Sair                                   _");
    puts("____________________________________________");
    puts("Digite a opção para ser realizada          _");
    scanf("%d",&opcao);
    puts("____________________________________________");
    switch (opcao) {
      case 1:
        contadorInserir++;
        ///ptr_contato precisa se atualizar depois de sofrer uma inserção, pois realloc muda endereço
        ptr_Contato = inserirContato(ptr_Contato,contadorInserir);



      break;
      case 2:



      break;
      case 3:

        //excluirContato(vetorContato);


      break;

      case 4:
        insertionSort(&ptr_Contato[0],contadorInserir);




      break;

      case 5:
        mostrarContato(ptr_Contato,contadorInserir);


      break;

      case 6:
    //    buscarContato(vetorContato);



      break;


    }
  }
  return 0;
}
