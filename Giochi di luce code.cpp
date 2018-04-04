// Collegamenti circuitali
const byte PIN_ROSSO      =13;
const byte PIN_VERDE      =12;

//Variabili e costanti "globali":
// visibili in tutto il programma
const int TEMPO_ROSSO     =500;
const int TEMPO_VERDE     =700;
int contatore_rosso       =0;
int contatore_verde       =0;

void setup () {
    pinMode (PIN_ROSSO , OUTPUT) ;
    pinMode (PIN_VERDE , OUTPUT) ;
 }
 void loop () {
     // Pausa fatta ad ogni ciclo
     delay (1) ;

     
     contatore_rosso++;
     if (contatore_rosso == TEMPO_ROSSO) {
         digitalWrite (PIN_ROSSO, !digitalRead (PIN_ROSSO) ) ;
         contatore_rosso = 0;

     }

     contatore_verde++;
     if (contatore_verde == TEMPO_VERDE)   {
         digitalWrite (PIN_VERDE, !digitalRead (PIN-VERDE))) ;
         contatore_verde = 0;

         }

  }         