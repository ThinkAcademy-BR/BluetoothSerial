//Programação Arduino de autoria do Prof. Adael Oliveira - WhatsApp(18)98116-7681
// Aplicativo do Sistema de autoria do Prof. Felipe Albuquerque - WhatsApp (11)99657-1302

 

#include <SoftwareSerial.h>
/* Para que a comunicaçao com o modulo nao interfira na programacao da placa,
criamos uma nova porta serial para ele.
*/

SoftwareSerial minhaSoftSerial(10, 11); // pinos RX/TX para o modulo

void setup() {
Serial.begin(9600); //porta serial (hardware) para monitorar os caracteres enviados
Serial.println("Acionamento"); // mensagem de inicializacao

minhaSoftSerial.begin(9600); // inicializacao da porta serial para o modulo

pinMode(28, OUTPUT); // declara pino 28 como saida para o Rele 1
pinMode(30, OUTPUT); // declara pino 30 como saida para o Rele 2
pinMode(34, OUTPUT); // declara pino 32 como saida para o Rele 3
pinMode(32, OUTPUT); // declara pino 34 como saida para o Rele 4 
pinMode(36, OUTPUT); // declara pino 36 como saida para o Rele 5
pinMode(38, OUTPUT); // declara pino 38 como saida para o Rele 6
pinMode(40, OUTPUT); // declara pino 40 como saida para o Rele 7
pinMode(42, OUTPUT); // declara pino 42 como saida para o Rele 8 
}

void loop(){
if (minhaSoftSerial.available()){ // Se a serial estiver disponivel, tem caracter para ler
char caracter = minhaSoftSerial.read(); // salva o caracter lido na variavel 'a'
Serial.write(caracter); // escreve o caracter recebido via bluetooth na serial do PC para conferencia
if (caracter=='A'){ digitalWrite(28, HIGH); } // Liga Rele 1
if (caracter=='a'){ digitalWrite(28, LOW); } // Desliga Rele 1
if (caracter=='B'){ digitalWrite(30, HIGH); } // Liga Rele 2
if (caracter=='b'){ digitalWrite(30, LOW); } // Desliga Rele 2
if (caracter=='C'){ digitalWrite(32, HIGH); } // Liga Rele 3
if (caracter=='c'){ digitalWrite(32, LOW); } // Desliga Rele 3
if (caracter=='D'){ digitalWrite(34, HIGH); } // Liga Rele 4
if (caracter=='d'){ digitalWrite(34, LOW); } // Desliga Rele 4
if (caracter=='E'){ digitalWrite(36, HIGH); } // Liga Rele 5
if (caracter=='e'){ digitalWrite(36, LOW); } // Desliga Rele 5
if (caracter=='F'){ digitalWrite(38, HIGH); } // Liga Rele 6
if (caracter=='f'){ digitalWrite(38, LOW); } // Desliga Rele 6
if (caracter=='G'){ digitalWrite(40, HIGH); } // Liga Rele 7
if (caracter=='g'){ digitalWrite(40, LOW); } // Desliga Rele 7
if (caracter=='H'){ digitalWrite(42, HIGH); } // Liga Rele 8
if (caracter=='h'){ digitalWrite(42, LOW); } // Desliga Rele 8
}
}


