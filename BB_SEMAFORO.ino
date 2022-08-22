//Deselvolvido por: BOARDBOX
// www.boardbox.net
// @_boardbox
// 22 de agosto de 2022
// Semáforo

int vermelho = 12;                        //Criando variavel do pino com o led vermelho
int amarelo = 11;                         //Criando variavel do pino com o led amarelo
int verde = 10;                           //Criando variavel do pino com o led verde

void setup()
{
  pinMode(verde, OUTPUT);                //Configurando pino como saída
  pinMode(amarelo, OUTPUT);              //Configurando pino como saída
  pinMode(vermelho, OUTPUT);             //Configurando pino como saída
}

void loop()
{
  digitalWrite(vermelho, LOW);          //LED vermelho apagado
  digitalWrite(amarelo, LOW);           //LED amarelo apagado
  digitalWrite(verde, HIGH);            //LED verde ligado
  delay(3000);                          //Espera 3 segundos
  
  digitalWrite(vermelho, LOW);           //LED vermelho apagado
  digitalWrite(amarelo, HIGH);           //LED amarelo ligado
  digitalWrite(verde, LOW);              //LED verde apagado
  delay(2000);                           //Espera 2 segundos
  
  digitalWrite(vermelho, HIGH);          //LED vermelho ligado
  digitalWrite(amarelo, LOW);            //LED amarelo apagado
  digitalWrite(verde, LOW);              //LED verde apagado
  delay(4000);                           //Espera 4 segundos




  
}
