1. exercicio_8_1_b1_b0_igual_0.c
- B recebe A porém B1 e B0 são sempre 0.


2. exercicio_8_2_shift.c
- B recebe a soma do primeiro nibble (A7..A4) com o segundo (A3..A0).

3. exercicio_8_3_b3_b0.c
- B3-B0 recebem os valores de A5-A2, fazendo com que as demais saídas recebam 0.

4. exercicio_8_4_estacionamento.c
- Um estacionamento tem 8 espaços, cada um com um sensor conectada a entrada do RIMS (A7...A0). Um entrada sendo 1, significa que um carro foi detectado no espaço correspondente. A7 e A6 são reservados para deficientes. Escreva um
programa no RIMS que: (1) Seta B0 com 1 se ambos os espaços de deficientes estão ocupados; (2) Seta B7...B5 igual ao número de espaços disponíveis para não deficientes.
