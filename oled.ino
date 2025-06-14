void ShowName()  //แสดงชื่อ
{
  oled.clear(); //เคลียร์หน้าจอ
  oled.textSize(2); //ขนาดตัวอักษร
  oled.mode(2);
  oled.text(0,0,"YRC001"); //ตัวอักษร
  oled.show();
}

void LightCheck() 
{
  ReadAnalog();
  oled.clear(); //เคลียร์หน้าจอ
  oled.textSize(1); //ขนาดตัวอักษร
  oled.mode(0);

  oled.text(0,0,"Left = %d ",  left_sensor);
  oled.text(1,0,"Right = %d ",  right_sensor);
  oled.text(2,0,"Front = %d ",  front_sensor);
  oled.show();
}
