#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UTransformProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupAdjustBoneFraming : public UCameraFixupOperation {
public:
    UTransformProvider* TargetBone; // 0x30
    UTransformProvider* ReferenceBone; // 0x38
    UFloatProvider* DeadDistanceProvider; // 0x40
    bool bRotate; // 0x48
    char pad_49[0x7];
    UFloatProvider* WeightProvider; // 0x50
    uint8_t DrawDebug : 1; // 0x58
    uint8_t pad_bitfield_58_1 : 7;
    char pad_59[0x7];
    static UCameraFixupAdjustBoneFraming* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
