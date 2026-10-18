#include <assert.h>
#include "String.h"

int main(void) {

    /* ── IsEmpty ── */
    assert(IsEmpty("") == 1);
    assert(IsEmpty("a") == 0);
    assert(IsEmpty("hola") == 0);

    /* ── GetLength ── */
    assert(GetLength("") == 0);
    assert(GetLength("a") == 1);
    assert(GetLength("hola") == 4);
    assert(GetLength("hola mundo") == 10);

    /* ── AreEqual ── */
    assert(AreEqual("", "") == 1);
    assert(AreEqual("abc", "abc") == 1);
    assert(AreEqual("abc", "abd") == 0);
    assert(AreEqual("abc", "ab") == 0);
    assert(AreEqual("ab", "abc") == 0);

    /* ── AreDecimalDigits ── */
    assert(AreDecimalDigits("0") == 1);
    assert(AreDecimalDigits("123") == 1);
    assert(AreDecimalDigits("12a") == 0);
    assert(AreDecimalDigits("") == 0);

    /* ── Contains ── */
    assert(Contains("hola", 'o') == 1);
    assert(Contains("hola", 'z') == 0);
    assert(Contains("", 'a') == 0);
    assert(Contains("a", 'a') == 1);
    assert(Contains("abc", 'c') == 1);
    assert(Contains("Hola", 'h') == 0);

    return 0;
}