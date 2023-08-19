#pragma once
#include <cstdint>
#include "FMultiFX2Handle.hpp"
#include "UFXUpdate.hpp"
class UWorld;
class UMultiFX2_Base;
#pragma pack(push, 1)
class UFXUpdate_Timed : public UFXUpdate {
public:
    float Duration; // 0x28
    bool bForceKill; // 0x2c
    char pad_2d[0x3];
    UWorld* World; // 0x30
    char pad_38[0x50];
    static UFXUpdate_Timed* StaticClass();
    void DeactivateFX(FMultiFX2Handle InHandle, UMultiFX2_Base* FXBase);
}; // Size: 0x88
#pragma pack(pop)
