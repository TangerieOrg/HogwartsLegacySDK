#pragma once
#include <cstdint>
#include "EDistributionVectorLockFlags.hpp"
#include "EDistributionVectorMirrorFlags.hpp"
#include "FInterpCurveTwoVectors.hpp"
#include "UDistributionVector.hpp"
#pragma pack(push, 1)
class UDistributionVectorUniformCurve : public UDistributionVector {
public:
    FInterpCurveTwoVectors ConstantCurve; // 0x38
    uint8_t bLockAxes1 : 1; // 0x50
    uint8_t bLockAxes2 : 1; // 0x50
    uint8_t pad_bitfield_50_2 : 6;
    char pad_51[0x3];
    EDistributionVectorLockFlags LockedAxes[2]; // 0x54
    EDistributionVectorMirrorFlags MirrorFlags[3]; // 0x56
    char pad_59[0x3];
    uint8_t bUseExtremes : 1; // 0x5c
    uint8_t pad_bitfield_5c_1 : 7;
    char pad_5d[0x3];
    static UDistributionVectorUniformCurve* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
