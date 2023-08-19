#pragma once
#include <cstdint>
#include "UDuelTechnique.hpp"
class UObject;
#pragma pack(push, 1)
class UDuelTechnique_TimedJuggle : public UDuelTechnique {
public:
    char pad_48[0x80];
    UObject* ControllerOuter; // 0xc8
    static UDuelTechnique_TimedJuggle* StaticClass();
    void TimerTick();
}; // Size: 0xd0
#pragma pack(pop)
