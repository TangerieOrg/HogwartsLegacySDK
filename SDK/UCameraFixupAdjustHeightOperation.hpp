#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UTransformProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupAdjustHeightOperation : public UCameraFixupOperation {
public:
    UTransformProvider* HeightTarget; // 0x30
    float HeightOffset; // 0x38
    char pad_3c[0x4];
    UFloatProvider* HeightOffsetProvider; // 0x40
    uint8_t DrawDebug : 1; // 0x48
    uint8_t EnableTargetLag : 1; // 0x48
    uint8_t pad_bitfield_48_2 : 6;
    char pad_49[0x3];
    float TargetLagSpeed; // 0x4c
    UFloatProvider* TargetLagSpeedProvider; // 0x50
    float TargetLagMaxDistance; // 0x58
    char pad_5c[0x4];
    UFloatProvider* TargetLagMaxDistanceProvider; // 0x60
    uint8_t DrawDebugLagMarkers : 1; // 0x68
    uint8_t pad_bitfield_68_1 : 7;
    char pad_69[0x7];
    static UCameraFixupAdjustHeightOperation* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
