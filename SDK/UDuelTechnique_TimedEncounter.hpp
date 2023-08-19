#pragma once
#include <cstdint>
#include "UDuelTechnique.hpp"
class UObject;
#pragma pack(push, 1)
class UDuelTechnique_TimedEncounter : public UDuelTechnique {
public:
    char pad_48[0x40];
    UObject* ControllerOuter; // 0x88
    static UDuelTechnique_TimedEncounter* StaticClass();
    void TimerTick();
    bool InitializeImpl();
}; // Size: 0x90
#pragma pack(pop)
