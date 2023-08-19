#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ACreaturePerch : public AActor {
public:
    bool bIsBidirectional; // 0x248
    char pad_249[0xf];
    static ACreaturePerch* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
