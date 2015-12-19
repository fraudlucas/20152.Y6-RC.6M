#Avalia��o 2#
##Marcus Lucas Abreu de Araujo Falc�o##

***

###Arquivos:###
* avaliacao2.sm - Arquivo de m�quina de estado do RIBS;
* avaliacao2_RIBS.c - c�digo gerado pelo RIBS;
* avaliacao2.c - c�digo manual;

***

###Entradas:###

Considerando-se que algumas informa��es como o hor�rio permitido para entrada de alunos, o n�mero m�ximo de alunos na escola, e se o aluno j� foi indicado uma vez na passagem pela catraca, se o aluno est� a mais de uma hora na escola, sejam provenientes de outros componentes no sistema, ent�o as entradas s�o:

* A0: processo de entrar na escola que inicia-se na identifica��o com crach� e termina ao rodar a catraca;
* A1: processo de sair da escola que inicia-se na identifica��o com crach� e termina ao rodar a catraca;
* A2: entrada de alunos permitida entre 6:30 e 7:55;
* A3: permite a sa�da do aluno ap�s 1 hora desde que entrou na escola;
* A4: indica que foi atingido o n�mero m�ximo de alunos na escola;
* A5: indica que o aluno j� entrou pela catraca durante o dia.

###Sa�das:###

Considerando-se que a catraca possui contagem at� 15, enviando tais n�meros para outro componente do sistema, e que existem duas sa�das que indicam se foi atingido o n�mero m�ximo de alunos ou n�o, e mais dois que indicam se o aluno pode (ou n�o) entrar ou sair da escola, ent�o as sa�das s�o:

* B0 a B3: contagem de alunos que entraram pela catraca (at� 15);
* B4: indica quando o n�mero m�ximo de alunos na escola foi atingido;
* B5: indica quando o n�mero m�ximo de alunos na escola n�o foi atingido;
* B6: indica que a entrada do aluno � permitida ou n�o;
* B7: indica que a sa�da do aluno � permitida ou n�o.

***

###Compara��o entre c�digo gerado pelo RIBS e o n�o gerado a partir de uma m�quina de estado:###

O c�digo gerado pelo RIBS n�o permite uma ordena��o de a��es por tempo, j� que o mesmo se utiliza de "switch&cases" e "IFs" para a transi��o de estados, utilizando "while" apenas para manter a reatividade do sistema e n�o para permitir tal ordena��o por tempo. Portanto o c�digo gerado pelo RIBS (avaliacao2_RIBS.c) torna-se maior e menos flexivel que o c�digo feito manualmente (avaliacao2.c).