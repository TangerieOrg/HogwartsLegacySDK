#pragma once
#include <cstdint>
#include "FRevealData.hpp"
#include "UStateEffectComponent.hpp"
#pragma pack(push, 1)
class URevealComponent : public UStateEffectComponent {
public:
    char pad_190[0x50];
    FRevealData RevealData; // 0x1e0
    char pad_208[0x20];
    static URevealComponent* StaticClass();
}; // Size: 0x228
#pragma pack(pop)
