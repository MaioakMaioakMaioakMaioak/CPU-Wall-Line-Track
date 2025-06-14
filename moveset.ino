void wheel(int s1, int s2, int s3){
  motor(1, s1); // Left
  motor(2, s2); // Right
  motor(3, s3); // Back
}

void Forward(int time){
  wheel(50,-50, 0);
  delay(time);
  AO();
  delay(200);
}

void Backward(int time){
  wheel(-50, 50, 0);
  delay(time);
  AO();
  delay(200);
}


void LeftMove(int time){
  wheel(25,25,-50);
  delay(time);
  AO();
  delay(200);
}


void RightMove(int time){
  wheel(-25,-25,50);
  delay(time);
  AO();
  delay(200);
}
