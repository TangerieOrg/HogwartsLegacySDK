#pragma once
#include <cstdint>
#include "EDistributionVectorLockFlags.hpp"
#include "FVector.hpp"
#include "UDistributionVector.hpp"
#pragma pack(push, 1)
class UDistributionVectorConstant : public UDistributionVector {
public:
    FVector Constant; // 0x38
    uint8_t bLockAxes : 1; // 0x44
    uint8_t pad_bitfield_44_1 : 7;
    char pad_45[0x3];
    EDistributionVectorLockFlags LockedAxes; // 0x48
    char pad_49[0x7];
    static UDistributionVectorConstant* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
