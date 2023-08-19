#pragma once
#include <cstdint>
#include "UStateEffectComponent.hpp"
class UMaterialPropertyData;
#pragma pack(push, 1)
class UWetnessComponent : public UStateEffectComponent {
public:
    float InitialValue; // 0x190
    char pad_194[0x4];
    UMaterialPropertyData* MaterialPropertyData; // 0x198
    char pad_1a0[0x18];
    static UWetnessComponent* StaticClass();
    void SetInWater(bool inWater);
}; // Size: 0x1b8
#pragma pack(pop)
