#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UTransformProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupAimWithPivotOperation : public UCameraFixupOperation {
public:
    UTransformProvider* AimTarget; // 0x30
    uint8_t DrawDebug : 1; // 0x38
    uint8_t EnableTargetLag : 1; // 0x38
    uint8_t pad_bitfield_38_2 : 6;
    char pad_39[0x3];
    float TargetLagSpeed; // 0x3c
    UFloatProvider* TargetLagSpeedProvider; // 0x40
    float TargetLagMaxDistance; // 0x48
    char pad_4c[0x4];
    UFloatProvider* TargetLagMaxDistanceProvider; // 0x50
    uint8_t DrawDebugLagMarkers : 1; // 0x58
    uint8_t pad_bitfield_58_1 : 7;
    char pad_59[0x7];
    static UCameraFixupAimWithPivotOperation* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
