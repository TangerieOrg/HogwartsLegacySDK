#pragma once
#include <cstdint>
#include "FPetrificusData.hpp"
#include "UStateEffectComponent.hpp"
#pragma pack(push, 1)
class UPetrificusComponent : public UStateEffectComponent {
public:
    FPetrificusData PetrificusData; // 0x190
    char pad_1a0[0x8];
    static UPetrificusComponent* StaticClass();
}; // Size: 0x1a8
#pragma pack(pop)
