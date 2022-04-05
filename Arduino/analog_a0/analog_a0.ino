int valorLDR = 0;   //Creamos la variable de tipo número entero para almacenar los datos recogidos del sensor analógico LDR (Light Dependant Resitor). 
int pinLDR = A0;    //Seleccionamos el pin analógico A0 como input del sensor LDR. 

void setup() { 
  Serial.begin(9600); //Inicializamos monitor serie para visualizar los valores de LDR. 
}

void loop() { 
  valorLDR = analogRead(pinLDR); //Leemos el valor del pinLDR y lo guardamos en la variable creada.
  delay(500);
  Serial.println(valorLDR);      //Imprimimos dicho valor, comprendido entre 0 y 1023. 
}
