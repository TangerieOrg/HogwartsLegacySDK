#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UTransformProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupSetFocusDistanceOperation : public UCameraFixupOperation {
public:
    UTransformProvider* DistanceTarget; // 0x30
    UFloatProvider* DistanceOffsetProvider; // 0x38
    float DistanceOffset; // 0x40
    uint8_t DrawDebug : 1; // 0x44
    uint8_t pad_bitfield_44_1 : 7;
    char pad_45[0x3];
    static UCameraFixupSetFocusDistanceOperation* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
