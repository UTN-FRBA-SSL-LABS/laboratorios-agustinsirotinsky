#include <assert.h>
#include "Conversion.h"
#include "String.h"

/*
 * ConversionTest.c — Pruebas del modulo Conversion
 *
 * Mismas restricciones que StringTest.c:
 * solo assert, literales, sin salida a stdout.
 */

int main(void) {

    /* ── ToInteger — tiene un bug, estos tests ya estan activos ─────────── */
    assert(ToInteger("0") == 0);
    assert(ToInteger("1") == 1);
    assert(ToInteger("42") == 42);
    assert(ToInteger("-7") == -7);
    assert(ToInteger("100") == 100);

        char buffer[12];
    FromInteger(0, buffer);    assert(AreEqual(buffer, "0"));
    FromInteger(7, buffer);    assert(AreEqual(buffer, "7"));
    FromInteger(42, buffer);   assert(AreEqual(buffer, "42"));
    FromInteger(-7, buffer);   assert(AreEqual(buffer, "-7"));
    FromInteger(100, buffer);  assert(AreEqual(buffer, "100"));
    FromInteger(-2147483647 - 1, buffer); assert(AreEqual(buffer, "-2147483648"));
    FromInteger(-305, buffer); assert(ToInteger(buffer) == -305);

    return 0;
}
