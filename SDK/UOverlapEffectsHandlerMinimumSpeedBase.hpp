#pragma once
#include <cstdint>
#include "UOverlapEffectsHandlerWithConditions.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerMinimumSpeedBase : public UOverlapEffectsHandlerWithConditions {
public:
    float MinimumSpeed; // 0x48
    char pad_4c[0x4];
    static UOverlapEffectsHandlerMinimumSpeedBase* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
