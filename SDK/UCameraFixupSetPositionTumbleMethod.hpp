#pragma once
#include <cstdint>
#include "UCameraFixupSetPositionMethod.hpp"
class UTransformProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupSetPositionTumbleMethod : public UCameraFixupSetPositionMethod {
public:
    UTransformProvider* Target; // 0x28
    uint8_t DrawDebug : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    float Distance; // 0x34
    UFloatProvider* DistanceProvider; // 0x38
    float PitchAngle; // 0x40
    char pad_44[0x4];
    UFloatProvider* PitchAngleProvider; // 0x48
    float YawAngle; // 0x50
    char pad_54[0x4];
    UFloatProvider* YawAngleProvider; // 0x58
    static UCameraFixupSetPositionTumbleMethod* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
