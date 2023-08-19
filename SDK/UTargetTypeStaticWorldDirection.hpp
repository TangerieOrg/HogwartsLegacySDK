#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UTargetTypeBase.hpp"
#pragma pack(push, 1)
class UTargetTypeStaticWorldDirection : public UTargetTypeBase {
public:
    char pad_38[0x10];
    static UTargetTypeStaticWorldDirection* StaticClass();
    void SetStaticWorldDirection(FVector InStaticWorldDirection);
}; // Size: 0x48
#pragma pack(pop)
