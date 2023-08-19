#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UTransformProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupAimAtOperation : public UCameraFixupOperation {
public:
    UTransformProvider* AimTarget; // 0x30
    uint8_t DrawDebug : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x3];
    float HorizontalDamping; // 0x3c
    UFloatProvider* HorizontalDampingProvider; // 0x40
    float VerticalDamping; // 0x48
    char pad_4c[0x4];
    UFloatProvider* VerticalDampingProvider; // 0x50
    float ScreenX; // 0x58
    char pad_5c[0x4];
    UFloatProvider* ScreenXProvider; // 0x60
    float ScreenY; // 0x68
    char pad_6c[0x4];
    UFloatProvider* ScreenYProvider; // 0x70
    float DeadZoneWidth; // 0x78
    char pad_7c[0x4];
    UFloatProvider* DeadZoneWidthProvider; // 0x80
    float DeadZoneHeight; // 0x88
    char pad_8c[0x4];
    UFloatProvider* DeadZoneHeightProvider; // 0x90
    float SoftZoneWidth; // 0x98
    char pad_9c[0x4];
    UFloatProvider* SoftZoneWidthProvider; // 0xa0
    float SoftZoneHeight; // 0xa8
    char pad_ac[0x4];
    UFloatProvider* SoftZoneHeightProvider; // 0xb0
    float BiasX; // 0xb8
    char pad_bc[0x4];
    UFloatProvider* BiasXProvider; // 0xc0
    float BiasY; // 0xc8
    char pad_cc[0x4];
    UFloatProvider* BiasYProvider; // 0xd0
    UFloatProvider* CameraPositionMaxFrameDeltaProvider; // 0xd8
    UFloatProvider* AimTargetMaxFrameDeltaProvider; // 0xe0
    static UCameraFixupAimAtOperation* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
