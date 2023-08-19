#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UEphemerisSubroutine.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineSunPosition : public UEphemerisSubroutine {
public:
    FRotator Direction; // 0x28
    bool bOverride_Direction; // 0x34
    char pad_35[0x3];
    static UEphemerisSubroutineSunPosition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
