int ledpin[]={8,9,10,11,12};
int bekleme=50;
void setup() {
for(int i=0;i<5;i++)
{
 pinMode(ledpin[i],OUTPUT); }}
void loop() {
 for(int i=0;i<5;i++)
 { digitalWrite(ledpin[i],HIGH);
 delay(200);
 digitalWrite(ledpin[i],LOW);
 digitalWrite(ledpin[i+1],HIGH);
 delay(200); }
 delay(200);
 for(int k=4;k>=0;k--)
 {
 digitalWrite(ledpin[k],HIGH);
 delay(200);
 digitalWrite(ledpin[k],LOW);
 digitalWrite(ledpin[k-1],HIGH);
 delay(200);
} }