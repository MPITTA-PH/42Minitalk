# 42Minitalk 💬

# Descrição

Este projeto consiste em um programa de comunicação entre um cliente e um servidor utilizando sinais UNIX. O servidor é iniciado primeiro e exibe seu PID. O cliente, ao ser executado, recebe o PID do servidor e uma string como parâmetros, enviando essa string através dos sinais SIGUSR1 e SIGUSR2. O servidor, ao receber a mensagem, imprime imediatamente o conteúdo recebido. Além disso, ele pode receber strings de vários clientes consecutivamente sem precisar ser reiniciado.

# Tecnologias Utilizadas

  - Programação em C
  - Sinais UNIX (SIGUSR1, SIGUSR2)
  - Comunicação entre processos (PID)

# Como Executar

  - Clone o repositório;

  - Acesse a pasta do projeto;

  - Compile os arquivos;

  - Inicie o servidor:

  # O servidor imprimirá seu PID;

  - Noutra janela do terminal, execute o cliente passando o PID do servidor e a mensagem desejada;

  - O servidor imprimirá a mensagem recebida imediatamente;

![Screenshot from 2025-03-20 19-11-52](https://github.com/user-attachments/assets/b161adfb-2260-4d6c-b70f-a573e7f58ea2)


# Contribuição
  - Sinta-se à vontade para contribuir! Siga estes passos:
    - Faça um fork do projeto;
    - Crie uma branch para sua funcionalidade: git checkout -b minha-nova-funcionalidade;
    - Commit suas alterações: git commit -m 'Adicionando uma nova funcionalidade';
    - Faça o push para a branch: git push origin minha-nova-funcionalidade;
    - Abra um Pull Request;
