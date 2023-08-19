#pragma once
#include <cstdint>
#include "EDistributionVectorLockFlags.hpp"
#include "EDistributionVectorMirrorFlags.hpp"
#include "FVector.hpp"
#include "UDistributionVector.hpp"
#pragma pack(push, 1)
class UDistributionVectorUniform : public UDistributionVector {
public:
    FVector Max; // 0x38
    FVector Min; // 0x44
    uint8_t bLockAxes : 1; // 0x50
    uint8_t pad_bitfield_50_1 : 7;
    char pad_51[0x3];
    EDistributionVectorLockFlags LockedAxes; // 0x54
    EDistributionVectorMirrorFlags MirrorFlags[3]; // 0x55
    uint8_t bUseExtremes : 1; // 0x58
    uint8_t pad_bitfield_58_1 : 7;
    char pad_59[0x7];
    static UDistributionVectorUniform* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
