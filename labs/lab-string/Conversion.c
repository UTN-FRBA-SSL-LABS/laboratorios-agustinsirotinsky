#include "Conversion.h"

/*
 * Conversion.c — Implementacion de operaciones de conversion
 *
 * REGLA: no usar atoi, strtol ni ninguna funcion estandar de conversion
 */

/* ── ToInteger — completar siguiendo el README.md ───────────────────────── */

int ToInteger(const char *s) {
    int signo     = 1;
    int resultado = 0;
    if (*s == '-') { signo = -1; s++; }
    for (; *s != '\0'; s++)
        resultado = resultado * 10 + (*s - '0');
    return signo * resultado;
}

/* ── Operacion libre ─────────────────────────────────────────────────────── */

void FromInteger(int n, char *buffer) {
    /* se trabaja con long para poder negar INT_MIN sin overflow */
    long valor = n;
    char *p = buffer;
    if (valor < 0) {
        *p++ = '-';
        valor = -valor;
    }
    /* se generan los digitos en orden inverso */
    char *inicio = p;
    do {
        *p++ = (char)('0' + valor % 10);
        valor /= 10;
    } while (valor > 0);
    *p = '\0';
    /* se invierte la parte de digitos */
    for (char *fin = p - 1; inicio < fin; inicio++, fin--) {
        char tmp = *inicio;
        *inicio = *fin;
        *fin = tmp;
    }
}
