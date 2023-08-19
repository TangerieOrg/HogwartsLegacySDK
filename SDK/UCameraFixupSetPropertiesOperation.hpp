#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupSetPropertiesOperation : public UCameraFixupOperation {
public:
    uint8_t SetFocusDistance : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    float FocusDistance; // 0x34
    UFloatProvider* FocusDistanceProvider; // 0x38
    uint8_t SetAperture : 1; // 0x40
    uint8_t pad_bitfield_40_1 : 7;
    char pad_41[0x3];
    float Aperture; // 0x44
    UFloatProvider* ApertureProvider; // 0x48
    uint8_t SetFocalLength : 1; // 0x50
    uint8_t pad_bitfield_50_1 : 7;
    char pad_51[0x3];
    float FocalLength; // 0x54
    UFloatProvider* FocalLengthProvider; // 0x58
    uint8_t EnableAnimatedFocusDistance : 1; // 0x60
    uint8_t pad_bitfield_60_1 : 7;
    char pad_61[0x7];
    static UCameraFixupSetPropertiesOperation* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
