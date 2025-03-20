# 42Minitalk 💬

## Preview

https://github.com/user-attachments/assets/c3bef038-3bd5-4375-9b29-d043f8659a74


## Description 🇬🇧

This project consists of a communication program between a client and a server using UNIX signals. The server is started first and displays its PID. When the client is executed, it receives the server's PID and a string as parameters, sending this string through the SIGUSR1 and SIGUSR2 signals. When the server receives the message, it immediately prints the received content. In addition, it can receive strings from several clients consecutively without having to be restarted.

## Technologies Used

- Programming in C
- UNIX signals (SIGUSR1, SIGUSR2)
- Interprocess communication (PID)
  

## How to Run

- Clone the repository;

- Access the project folder;

- Compile the files;

- Start the server:

- The server will print its PID;

- In another terminal window, run the client, passing the server's PID and the desired message;

- The server will print the received message immediately;


## Contributing
- Feel free to contribute! Follow these steps:
- Fork the project;
- Create a branch for your feature: git checkout -b my-new-feature;
- Commit your changes: git commit -m 'Adding a new feature;
- Push to the branch: git push origin my-new-feature;
- Open a Pull Request;

  


## Descrição 🇵🇹

Este projeto consiste em um programa de comunicação entre um cliente e um servidor utilizando sinais UNIX. O servidor é iniciado primeiro e exibe seu PID. O cliente, ao ser executado, recebe o PID do servidor e uma string como parâmetros, enviando essa string através dos sinais SIGUSR1 e SIGUSR2. O servidor, ao receber a mensagem, imprime imediatamente o conteúdo recebido. Além disso, ele pode receber strings de vários clientes consecutivamente sem precisar ser reiniciado.

## Tecnologias Utilizadas

  - Programação em C
  - Sinais UNIX (SIGUSR1, SIGUSR2)
  - Comunicação entre processos (PID)
    

## Como Executar

  - Clone o repositório;

  - Acesse a pasta do projeto;

  - Compile os arquivos;

  - Inicie o servidor:

  - O servidor imprimirá seu PID;

  - Noutra janela do terminal, execute o cliente passando o PID do servidor e a mensagem desejada;

  - O servidor imprimirá a mensagem recebida imediatamente;


## Contribuição
  - Sinta-se à vontade para contribuir! Siga estes passos:
    - Faça um fork do projeto;
    - Crie uma branch para sua funcionalidade: git checkout -b minha-nova-funcionalidade;
    - Commit suas alterações: git commit -m 'Adicionando uma nova funcionalidade;
    - Faça o push para a branch: git push origin minha-nova-funcionalidade;
    - Abra um Pull Request;
  

![Screenshot from 2025-03-20 19-11-52](https://github.com/user-attachments/assets/b161adfb-2260-4d6c-b70f-a573e7f58ea2)






