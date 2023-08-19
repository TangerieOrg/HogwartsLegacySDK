#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStandbyType {
    STDBY_Rx = 0,
    STDBY_Tx = 1,
    STDBY_BadPing = 2,
    STDBY_MAX = 3,
};
#pragma pack(pop)
