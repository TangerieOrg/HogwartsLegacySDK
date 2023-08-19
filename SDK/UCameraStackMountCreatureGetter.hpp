#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
#pragma pack(push, 1)
class UCameraStackMountCreatureGetter : public UCameraStackSecondaryTargetGetter {
public:
    FVector OffsetFromCreature; // 0x60
    char pad_6c[0xc];
    static UCameraStackMountCreatureGetter* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
