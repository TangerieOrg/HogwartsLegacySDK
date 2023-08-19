#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ECollisionTraceFlag : uint8_t {
    CTF_UseDefault = 0,
    CTF_UseSimpleAndComplex = 1,
    CTF_UseSimpleAsComplex = 2,
    CTF_UseComplexAsSimple = 3,
    CTF_MAX = 4,
};
#pragma pack(pop)
