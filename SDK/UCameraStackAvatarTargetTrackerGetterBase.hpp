#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackAvatarTargetTrackerGetterBase : public UCameraStackSecondaryTargetGetterBlend {
public:
    char pad_b0[0x10];
    static UCameraStackAvatarTargetTrackerGetterBase* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
