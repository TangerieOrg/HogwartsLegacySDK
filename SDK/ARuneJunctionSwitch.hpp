#pragma once
#include <cstdint>
#include "AActor.hpp"
class ARuneSwitch;
#pragma pack(push, 1)
class ARuneJunctionSwitch : public AActor {
public:
    bool bIsUnderHeat; // 0x248
    char pad_249[0x7];
    static ARuneJunctionSwitch* StaticClass();
    void RuneHitBySpell(ARuneSwitch* RuneSwitch);
}; // Size: 0x250
#pragma pack(pop)
