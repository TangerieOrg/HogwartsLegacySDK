#pragma once
#include <cstdint>
#include "FImperiusData.hpp"
#include "UStateEffectComponent.hpp"
#pragma pack(push, 1)
class UImperiusComponent : public UStateEffectComponent {
public:
    FImperiusData ImperiusData; // 0x190
    char pad_1a8[0x20];
    static UImperiusComponent* StaticClass();
    void BP_EndEffect();
    void AttachEmitters();
}; // Size: 0x1c8
#pragma pack(pop)
