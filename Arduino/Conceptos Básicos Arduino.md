# Salida

## Salida digital

## Salida analogica

## Puerto serie

# Entradas

## Lectura digital

```cpp
void setup() {
  pinMode(8, INPUT); //Configuro el pin 8 como entrada
  }
void loop() {
int Lectura= digitalRead(8); //Leo el pin 8 y guardo su valor digital en la variable Lectura
}
```


## Lectura analogica

```cpp
void setup() {
  pinMode(A0, INPUT); //Configuro el pin 8 como entrada
  }
void loop() {
int Lectura= analogRead(A0); //Leo el pin A0 y comvierto el valor analogico del pin en un valor digital desde 0 a 1023 en la variable Lectura
}

```
https://www.tinkercad.com/things/6A976BkQrEk?sharecode=jfFCzRRrBE0ljsZtNGUFG9WmHK-OzrVrOlP8pvOUNuk

https://www.tinkercad.com/things/kLVQEzf8abZ
