#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackClimbingLedgeTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    char pad_b0[0x10];
    static UCameraStackClimbingLedgeTargetGetter* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
