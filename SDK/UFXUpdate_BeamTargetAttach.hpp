#pragma once
#include <cstdint>
#include "UFXUpdate_Tick.hpp"
class UMultiFX2_BeamTargetBase;
#pragma pack(push, 1)
class UFXUpdate_BeamTargetAttach : public UFXUpdate_Tick {
public:
    UMultiFX2_BeamTargetBase* TargetType; // 0x80
    float InterpolationWeight; // 0x88
    char pad_8c[0x4];
    static UFXUpdate_BeamTargetAttach* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
