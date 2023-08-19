#pragma once
#include <cstdint>
#include "UEphemerisSubroutineTweakDirection.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineTweakMoonPosition : public UEphemerisSubroutineTweakDirection {
public:
    bool bOnlyLightDirection; // 0x38
    char pad_39[0x7];
    static UEphemerisSubroutineTweakMoonPosition* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
