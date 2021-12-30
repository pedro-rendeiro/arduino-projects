//lenght of 1 beat for each song in ms
int tempo = 500;
int tempoB = 800;
int tempoC = 480;
int tempoD = 440;

//naming the pins
#define buzzer 7
#define asaBranca 10
#define sadnessandSorrow 11
#define happyBirthday 12
#define spiderMan 13

//naming the frequences
#define c 262
#define d 294
#define e 330
#define f 349
#define g 392
#define gs 415
#define a 440
#define bb 466
#define b 494
#define c2 523
#define d2 587
#define e2 659
#define f2 698
#define g2 784

void setup() {
  //defining ins and outs
  //buttons are HIGH level when not pressed
  pinMode(buzzer,OUTPUT);
  pinMode(asaBranca,INPUT_PULLUP);
  pinMode(sadnessandSorrow,INPUT_PULLUP);
  pinMode(happyBirthday,INPUT_PULLUP);
  pinMode(spiderMan,INPUT_PULLUP);
}

void loop() {
  if(digitalRead(asaBranca)==LOW){
    //1st line of Asa Branca
    delay(tempo);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo);
    tone(buzzer,d2);
    delay(tempo);
    tone(buzzer,d2);
    delay(tempo);
    tone(buzzer,b);
    delay(tempo);
    tone(buzzer,c2);
    delay(tempo);
    tone(buzzer,c2);
    delay(tempo);
    noTone(buzzer);
    delay(tempo);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo);
    tone(buzzer,d2);
    delay(tempo);
    tone(buzzer,d2);
    delay(tempo);
    tone(buzzer,c2);
    delay(tempo);
    tone(buzzer,b);
    delay(2*tempo);

    //2nd line
    noTone(buzzer);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo);
    tone(buzzer,d2);
    delay(tempo);
    noTone(buzzer);
    delay(tempo/2);
    tone(buzzer,d2);
    delay(tempo/2);
    tone(buzzer,c2);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo);
    tone(buzzer,c2);
    delay(tempo);
    noTone(buzzer);
    delay(tempo/2);
    tone(buzzer,c2);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo);
    tone(buzzer,b);
    delay(tempo);
    noTone(buzzer);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo);
    noTone(buzzer);
    delay(tempo);

    //3rd line
    noTone(buzzer);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo);
    tone(buzzer,d2);
    delay(tempo);
    noTone(buzzer);
    delay(tempo/2);
    tone(buzzer,d2);
    delay(tempo/2);
    tone(buzzer,c2);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo);
    tone(buzzer,c2);
    delay(tempo);
    noTone(buzzer);
    delay(tempo/2);
    tone(buzzer,c2);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo);
    tone(buzzer,b);
    delay(tempo);
    noTone(buzzer);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);

    //4th line
    tone(buzzer,g);
    delay(tempo);
    tone(buzzer,f2);
    delay(tempo/2);
    tone(buzzer,d2);
    delay(tempo/2);
    tone(buzzer,e2);
    delay(tempo/2);
    tone(buzzer,c2);
    delay(tempo/2);
    tone(buzzer,d2);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo/2);
    tone(buzzer,c2);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,b);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,a);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,e);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo/2);
    tone(buzzer,g);
    delay(tempo);
    noTone(buzzer);
    delay(tempo);
  }

  
  else if(digitalRead(sadnessandSorrow)==LOW){
    //1st line of Sadness and Sorrow
    tone(buzzer,b);
    delay(tempoB/4);
    tone(buzzer,a);
    delay(tempoB/4);
    tone(buzzer,e);
    delay(5*tempoB/2);
    tone(buzzer,a);
    delay(tempoB/2);
    tone(buzzer,c2);
    delay(tempoB/2);
    tone(buzzer,d2);
    delay(tempoB);
    tone(buzzer,a);
    delay(3*tempoB);

    //2nd line
    tone(buzzer,c2);
    delay(2*tempoB);
    tone(buzzer,b);
    delay(tempoB/2);
    tone(buzzer,c2);
    delay(tempoB/2);
    tone(buzzer,d2);
    delay(tempoB/2);
    tone(buzzer,g);
    delay(tempoB/2);
    tone(buzzer,e2);
    delay(2*tempoB);
    tone(buzzer,d2);
    delay(2*tempoB);
    tone(buzzer,b);
    delay(tempoB/4);
    tone(buzzer,a);
    delay(tempoB/4);
    tone(buzzer,e);
    delay(5*tempoB/2);
    tone(buzzer,a);
    delay(tempoB/2);
    tone(buzzer,c2);
    delay(tempoB/2);
    tone(buzzer,d2);
    delay(tempoB);
    tone(buzzer,a);
    delay(3*tempoB);

    //3rd line
    tone(buzzer,c2);
    delay(2*tempoB);
    tone(buzzer,b);
    delay(tempoB/2);
    tone(buzzer,c2);
    delay(tempoB/2);
    tone(buzzer,d2);
    delay(tempoB/2);
    tone(buzzer,g);
    delay(tempoB/2);
    tone(buzzer,a);
    delay(4*tempoB);
  }

  
  else if(digitalRead(happyBirthday)==LOW){
    //1st line of Happy Birthday
    tone(buzzer,g);
    delay(tempoC/2);
    tone(buzzer,g);
    delay(tempoC/2);
    tone(buzzer,a);
    delay(tempoC);
    tone(buzzer,g);
    delay(tempoC);
    tone(buzzer,c2);
    delay(tempoC);
    tone(buzzer,b);
    delay(2*tempoC);
    tone(buzzer,g);
    delay(tempoC/2);
    tone(buzzer,g);
    delay(tempoC/2);
    tone(buzzer,a);
    delay(tempoC);
    tone(buzzer,g);
    delay(tempoC);
    tone(buzzer,d2);
    delay(tempoC);
    tone(buzzer,c2);
    delay(2*tempoC);
    tone(buzzer,g);
    delay(tempoC/2);
    tone(buzzer,g);
    delay(tempoC/2);

    //2nd line
    tone(buzzer,g2);
    delay(tempoC);
    tone(buzzer,e2);
    delay(tempoC);
    tone(buzzer,c2);
    delay(tempoC);
    tone(buzzer,b);
    delay(tempoC);
    tone(buzzer,a);
    delay(tempoC);
    tone(buzzer,f2);
    delay(tempoC/2);
    tone(buzzer,f2);
    delay(tempoC/2);
    tone(buzzer,e2);
    delay(tempoC);
    tone(buzzer,c2);
    delay(tempoC);
    tone(buzzer,d2);
    delay(tempoC);
    tone(buzzer,c2);
    delay(2*tempoC);
  }

  
  else if(digitalRead(spiderMan)==LOW){
    //1st line of Spider Man
    tone(buzzer,d);
    delay(tempoD);
    tone(buzzer,f);
    delay(tempoD/2);
    tone(buzzer,a);
    delay(3*tempoD/2);
    noTone(buzzer);
    delay(tempoD);
    tone(buzzer,gs);
    delay(tempoD);
    tone(buzzer,f);
    delay(tempoD/2);
    tone(buzzer,d);
    delay(3*tempoD/2);
    noTone(buzzer);
    delay(tempoD);
    tone(buzzer,d);
    delay(tempoD);
    tone(buzzer,f);
    delay(tempoD/2);
    tone(buzzer,a);
    delay(tempoD);
    tone(buzzer,bb);
    delay(tempoD/2);
    tone(buzzer,a);
    delay(tempoD);
    tone(buzzer,gs);
    delay(tempoD);
    tone(buzzer,f);
    delay(tempoD/2);
    tone(buzzer,d);
    delay(3*tempoD/2);
    noTone(buzzer);
    delay(tempoD);

    //2nd line
    tone(buzzer,g);
    delay(tempoD);
    tone(buzzer,bb);
    delay(tempoD/2);
    tone(buzzer,d2);
    delay(3*tempoD/2);
    noTone(buzzer);
    delay(tempoD);
    tone(buzzer,c2);
    delay(tempoD);
    tone(buzzer,bb);
    delay(tempoD/2);
    tone(buzzer,g);
    delay(3*tempoD/2);
    noTone(buzzer);
    delay(tempoD);
    tone(buzzer,d);
    delay(tempoD);
    tone(buzzer,f);
    delay(tempoD/2);
    tone(buzzer,a);
    delay(3*tempoD/2);
    noTone(buzzer);
    delay(tempoD);
    tone(buzzer,gs);
    delay(tempoD);
    tone(buzzer,f);
    delay(tempoD/2);
    tone(buzzer,d);
    delay(3*tempoD/2);
    tone(buzzer,bb);
    delay(tempoD);

    //3rd line
    tone(buzzer,a);
    delay(4*tempoD);
    tone(buzzer,gs);
    delay(tempoD);
    tone(buzzer,g);
    delay(tempoD/2);
    tone(buzzer,f);
    delay(tempoD/2);
    tone(buzzer,g);
    delay(tempoD);
    tone(buzzer,f);
    delay(tempoD);
    tone(buzzer,d);
    delay(4*tempoD);
  }
  noTone(buzzer);
}
