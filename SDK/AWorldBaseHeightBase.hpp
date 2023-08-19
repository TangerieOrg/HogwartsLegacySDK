#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FBlendDomain.hpp"
#pragma pack(push, 1)
class AWorldBaseHeightBase : public AActor {
public:
    char pad_248[0x8];
    int32_t Affects; // 0x250
    float Priority; // 0x254
    FBlendDomain BlendDomain; // 0x258
    bool bEnabled; // 0x290
    char pad_291[0x7];
    static AWorldBaseHeightBase* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x298
#pragma pack(pop)
