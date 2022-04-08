#include <Python.h>

int main() {
    Py_Initialize();
    PyRun_SimpleString("from requests import get\n"
                       "print(get('https://api.binance.com/api/v3/ticker/price?symbol=BTCRUB').json())");
    Py_Finalize();
}