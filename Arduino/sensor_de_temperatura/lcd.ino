//Librerias Necesarias

#include <LiquidCrystal_I2C.h>
#include <Wire.h>





//0x27 es por donde el arduino detecta la interfaz
LiquidCrystal_I2C lcd(0X3F,16,2);

void setup()
{
	//Iniciamo el fondo retroiluminado
	lcd.backlight();
	//Iniciamos la pantalla
	lcd.init();

}
void loop()
{

	lcd.clear();
	lcd.print("Welcome To MyHome");
	lcd.setCursor(0,1);
	lcd.print("First prove");
	delay(3000);
	lcd.clear();
	lcd.print("Hola Isa");
	delay(2000);
}