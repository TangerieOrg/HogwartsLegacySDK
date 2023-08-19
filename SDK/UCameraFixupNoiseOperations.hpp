#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupNoiseOperations : public UDataAsset {
public:
    UFloatProvider* XPositionProvider; // 0x30
    UFloatProvider* YPositionProvider; // 0x38
    UFloatProvider* ZPositionProvider; // 0x40
    UFloatProvider* PitchAngleProvider; // 0x48
    UFloatProvider* YawAngleProvider; // 0x50
    UFloatProvider* RollAngleProvider; // 0x58
    static UCameraFixupNoiseOperations* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
