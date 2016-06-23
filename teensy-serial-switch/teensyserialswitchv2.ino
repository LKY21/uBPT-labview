int led0 = 0;
int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;
int led14 = 14;
int led15 = 15;
int led16 = 16;
int led17 = 17;
int led18 = 18;
int led19 = 19;
//////////////////////////
int led0status = 0;
int led1status = 0;
int led2status = 0;
int led3status = 0;
int led4status = 0;
int led5status = 0;
int led6status = 0;
int led7status = 0;
int led8status = 0;
int led9status = 0;
int led10status = 0;
int led11status = 0;
int led12status = 0;
int led13status = 0;
int led14status = 0;
int led15status = 0;
int led16status = 0;
int led17status = 0;
int led18status = 0;
int led19status = 0;
///////////////////////
char serialinput[21] = "                    "; //needs to have one space for null character


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(led14, OUTPUT);
  pinMode(led15, OUTPUT);
  pinMode(led16, OUTPUT);
  pinMode(led17, OUTPUT);
  pinMode(led18, OUTPUT);
  pinMode(led19, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:

  if ( Serial.available() ){
    Serial.readBytes(serialinput, 20);
    //Serial.println(serialinput); 

    led0status = serialinput[0];
    //Serial.println(led1status); 
    led1status = serialinput[1];
    led2status = serialinput[2];
    led3status = serialinput[3];
    led4status = serialinput[4];
    led5status = serialinput[5];
    led6status = serialinput[6];
    led7status = serialinput[7];
    led8status = serialinput[8];
    led9status = serialinput[9];
    led10status = serialinput[10];
    led11status = serialinput[11];
    led12status = serialinput[12];
    led13status = serialinput[13];
    led14status = serialinput[14];
    led15status = serialinput[15];
    led16status = serialinput[16];
    led17status = serialinput[17];
    led18status = serialinput[18];
    led19status = serialinput[19];

  if(led0status == 48){
    led0status = 0;
  }
  else{
    led0status = 1;
  } ///////////////////   
  if(led1status == 48){
    led1status = 0;
  }
  else{
    led1status = 1;
  }
  if(led2status == 48){
    led2status = 0;
  }
  else{
    led2status = 1;
  }  
  if(led3status == 48){
    led3status = 0;
  }
  else{
    led3status = 1;
  }
  if(led4status == 48){
    led4status = 0;
  }
  else{
    led4status = 1;
  }
  if(led5status == 48){
    led5status = 0;
  }
  else{
    led5status = 1;
  }    
  if(led6status == 48){
    led6status = 0;
  }
  else{
    led6status = 1;
  }
  if(led7status == 48){
    led7status = 0;
  }
  else{
    led7status = 1;
  }
  if(led8status == 48){
    led8status = 0;
  }
  else{
    led8status = 1;
  }
  if(led9status == 48){
    led9status = 0;
  }
  else{
    led9status = 1;
  }      
  if(led10status == 48){
    led10status = 0;
  }
  else{
    led10status = 1;
  } ///////////////////  
  if(led11status == 48){
    led11status = 0;
  }
  else{
    led11status = 1;
  } ///////////////////  
  if(led12status == 48){
    led12status = 0;
  }
  else{
    led12status = 1;
  } ///////////////////  
  if(led13status == 48){
    led13status = 0;
  }
  else{
    led13status = 1;
  } ///////////////////  
  if(led14status == 48){
    led14status = 0;
  }
  else{
    led14status = 1;
  } ///////////////////  
  if(led15status == 48){
    led15status = 0;
  }
  else{
    led15status = 1;
  } ///////////////////  
  if(led16status == 48){
    led16status = 0;
  }
  else{
    led16status = 1;
  } ///////////////////  
  if(led17status == 48){
    led17status = 0;
  }
  else{
    led17status = 1;
  } ///////////////////  
  if(led18status == 48){
    led18status = 0;
  }
  else{
    led18status = 1;
  } ///////////////////  
  if(led19status == 48){
    led19status = 0;
  }
  else{
    led19status = 1;
  } ///////////////////      

                          
  } //end if serial available


    digitalWrite(led0,led0status);
    digitalWrite(led1,led1status);
    digitalWrite(led2,led2status);
    digitalWrite(led3,led3status);
    digitalWrite(led4,led4status);
    digitalWrite(led5,led5status);
    digitalWrite(led6,led6status);
    digitalWrite(led7,led7status);
    digitalWrite(led8,led8status);
    digitalWrite(led9,led9status);
    digitalWrite(led10,led10status);
    digitalWrite(led11,led11status);
    digitalWrite(led12,led12status);
    digitalWrite(led13,led13status);
    digitalWrite(led14,led14status);
    digitalWrite(led15,led15status);
    digitalWrite(led16,led16status);
    digitalWrite(led17,led17status);
    digitalWrite(led18,led18status);
    digitalWrite(led19,led19status); 
}
