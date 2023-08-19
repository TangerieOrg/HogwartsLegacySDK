#pragma once
#include <cstdint>
#include "FMultiFX2Handle.hpp"
#include "UFXEnd.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class UMultiFX2End_Fadeout : public UFXEnd {
public:
    float FadeOutTime; // 0x28
    char pad_2c[0x4];
    static UMultiFX2End_Fadeout* StaticClass();
    void EndFade(FMultiFX2Handle InHandle, UMultiFX2_Base* FXBase);
}; // Size: 0x30
#pragma pack(pop)
