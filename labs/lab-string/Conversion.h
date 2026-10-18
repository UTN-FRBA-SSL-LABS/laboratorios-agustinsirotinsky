#ifndef CONVERSION_H
#define CONVERSION_H

/*
 * Conversion.h — Operaciones de conversion entre tipos
 *
 * Nota de diseño: ToInteger no forma parte de la biblioteca String
 * porque su dominio de entrada es String pero su codominio es Integer,
 * cruzando la frontera entre tipos. Se separa aqui para mantener
 * la cohesion de cada modulo.
 */

/* ToInteger: String -> Integer
 * Pre:  s != NULL, s representa un entero valido en base 10
 *       (digitos con signo '-' opcional al inicio)
 * Post: devuelve el valor entero correspondiente a la cadena */
int ToInteger(const char *s);

/* FromInteger: Integer -> String  (inversa de ToInteger)
 * Pre:  buffer != NULL y tiene lugar para al menos 12 chars
 *       (signo + 10 digitos + '\0', suficiente para cualquier int de 32 bits)
 * Post: buffer contiene la representacion decimal de n, con '-' si n < 0,
 *       sin ceros a izquierda y terminada en '\0'.
 *       Para todo n: ToInteger(buffer) == n */
void FromInteger(int n, char *buffer);

#endif
