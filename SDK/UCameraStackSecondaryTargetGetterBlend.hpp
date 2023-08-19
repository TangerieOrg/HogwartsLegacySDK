#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetter.hpp"
#pragma pack(push, 1)
class UCameraStackSecondaryTargetGetterBlend : public UCameraStackSecondaryTargetGetter {
public:
    float BlendDuration; // 0x60
    char pad_64[0x4c];
    static UCameraStackSecondaryTargetGetterBlend* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
