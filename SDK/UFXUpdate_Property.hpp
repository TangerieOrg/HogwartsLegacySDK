#pragma once
#include <cstdint>
#include "EMultiFXUse.hpp"
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_Property : public UFXUpdate_Tick {
public:
    EMultiFXUse PropertySource; // 0x80
    char pad_81[0x3];
    FName SourcePropertyName; // 0x84
    FName TargetPropertyName; // 0x8c
    char pad_94[0x4];
    static UFXUpdate_Property* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
