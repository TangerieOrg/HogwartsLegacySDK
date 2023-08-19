#pragma once
#include <cstdint>
#include "EDistributionVectorLockFlags.hpp"
#include "FInterpCurveVector.hpp"
#include "UDistributionVector.hpp"
#pragma pack(push, 1)
class UDistributionVectorConstantCurve : public UDistributionVector {
public:
    FInterpCurveVector ConstantCurve; // 0x38
    uint8_t bLockAxes : 1; // 0x50
    uint8_t pad_bitfield_50_1 : 7;
    char pad_51[0x3];
    EDistributionVectorLockFlags LockedAxes; // 0x54
    char pad_55[0x3];
    static UDistributionVectorConstantCurve* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
