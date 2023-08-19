#pragma once
#include <cstdint>
#include "UDamageOverTime.hpp"
#pragma pack(push, 1)
class UCrucioComponent : public UDamageOverTime {
public:
    char pad_1c0[0x10];
    static UCrucioComponent* StaticClass();
    void SetupDelegate();
}; // Size: 0x1d0
#pragma pack(pop)
