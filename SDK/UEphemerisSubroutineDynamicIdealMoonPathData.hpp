#pragma once
#include <cstdint>
#include "FMoonPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineDynamicIdealMoonPathData : public UObject {
public:
    FMoonPath MoonPath; // 0x28
    static UEphemerisSubroutineDynamicIdealMoonPathData* StaticClass();
}; // Size: 0x550
#pragma pack(pop)
