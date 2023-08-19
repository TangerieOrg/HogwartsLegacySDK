#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
#pragma pack(push, 1)
class UCameraStackPrimaryCameraTargetGetter : public UCameraStackSecondaryTargetGetter {
public:
    FVector OffsetFromTarget; // 0x60
    char pad_6c[0x4];
    static UCameraStackPrimaryCameraTargetGetter* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
