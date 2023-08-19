#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupSetAnglesOperation : public UCameraFixupOperation {
public:
    uint8_t DrawDebug : 1; // 0x30
    uint8_t Relative : 1; // 0x30
    uint8_t SetPitch : 1; // 0x30
    uint8_t pad_bitfield_30_3 : 5;
    char pad_31[0x3];
    float PitchAngle; // 0x34
    UFloatProvider* PitchAngleProvider; // 0x38
    uint8_t SetYaw : 1; // 0x40
    uint8_t pad_bitfield_40_1 : 7;
    char pad_41[0x3];
    float YawAngle; // 0x44
    UFloatProvider* YawAngleProvider; // 0x48
    uint8_t SetRoll : 1; // 0x50
    uint8_t pad_bitfield_50_1 : 7;
    char pad_51[0x3];
    float RollAngle; // 0x54
    UFloatProvider* RollAngleProvider; // 0x58
    static UCameraFixupSetAnglesOperation* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
