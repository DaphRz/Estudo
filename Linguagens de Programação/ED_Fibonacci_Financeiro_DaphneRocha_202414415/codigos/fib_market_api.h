// CÓDIGO DA INTERFACE PÚBLICA

#ifndef FIB_MARKET_API_H
#define FIB_MARKET_API_H

#if defined(_WIN32)

    #ifdef BUILDING_DLL
        #define API_EXPORT __declspec(dllexport)
    #else
        #define API_EXPORT __declspec(dllimport)
    #endif

#else
    #define API_EXPORT __attribute__((visibility("default")))
#endif

// serve para o mesmo header funcionar tanto em C quanto em C++
#ifdef __cplusplus  

extern "C" {  // diz ao C++ para usar ligação/nome compatível com C

    #endif

    // Calcula e imprime os níveis de Retração de Fibonacci
    // tendência = 1 (alta) ou 0 (baixa)
    API_EXPORT void calcularRetracoes(double baixo, double alto, int tendencia);

    #ifdef __cplusplus
}

#endif

#endif  // FIB_MARKET_API_H