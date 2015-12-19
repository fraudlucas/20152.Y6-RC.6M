#Avaliação 2#
##Marcus Lucas Abreu de Araujo Falcão##

***

###Arquivos:###
* avaliacao2.sm - Arquivo de máquina de estado do RIBS;
* avaliacao2_RIBS.c - código gerado pelo RIBS;
* avaliacao2.c - código manual;

***

###Entradas:###

Considerando-se que algumas informações como o horário permitido para entrada de alunos, o número máximo de alunos na escola, e se o aluno já foi indicado uma vez na passagem pela catraca, se o aluno está a mais de uma hora na escola, sejam provenientes de outros componentes no sistema, então as entradas são:

* A0: processo de entrar na escola que inicia-se na identificação com crachá e termina ao rodar a catraca;
* A1: processo de sair da escola que inicia-se na identificação com crachá e termina ao rodar a catraca;
* A2: entrada de alunos permitida entre 6:30 e 7:55;
* A3: permite a saída do aluno após 1 hora desde que entrou na escola;
* A4: indica que foi atingido o número máximo de alunos na escola;
* A5: indica que o aluno já entrou pela catraca durante o dia.

###Saídas:###

Considerando-se que a catraca possui contagem até 15, enviando tais números para outro componente do sistema, e que existem duas saídas que indicam se foi atingido o número máximo de alunos ou não, e mais dois que indicam se o aluno pode (ou não) entrar ou sair da escola, então as saídas são:

* B0 a B3: contagem de alunos que entraram pela catraca (até 15);
* B4: indica quando o número máximo de alunos na escola foi atingido;
* B5: indica quando o número máximo de alunos na escola não foi atingido;
* B6: indica que a entrada do aluno é permitida ou não;
* B7: indica que a saída do aluno é permitida ou não.

***

###Comparação entre código gerado pelo RIBS e o não gerado a partir de uma máquina de estado:###

O código gerado pelo RIBS não permite uma ordenação de ações por tempo, já que o mesmo se utiliza de "switch&cases" e "IFs" para a transição de estados, utilizando "while" apenas para manter a reatividade do sistema e não para permitir tal ordenação por tempo. Portanto o código gerado pelo RIBS (avaliacao2_RIBS.c) torna-se maior e menos flexivel que o código feito manualmente (avaliacao2.c).