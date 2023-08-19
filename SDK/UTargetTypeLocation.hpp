#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UTargetTypeBase.hpp"
#pragma pack(push, 1)
class UTargetTypeLocation : public UTargetTypeBase {
public:
    char pad_38[0x10];
    static UTargetTypeLocation* StaticClass();
    void SetTargetLocation(FVector InTargetLocation);
    FVector GetTargetLocation();
}; // Size: 0x48
#pragma pack(pop)
