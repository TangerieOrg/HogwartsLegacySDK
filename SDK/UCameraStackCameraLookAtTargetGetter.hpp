#pragma once
#include <cstdint>
#include "ECameraStackLookAtStrength.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackCameraLookAtTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    char pad_b0[0x10];
    static UCameraStackCameraLookAtTargetGetter* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
