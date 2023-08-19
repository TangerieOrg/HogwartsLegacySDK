#pragma once
#include <cstdint>
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
class ABP_SkinFX_CreatureCapture_C : public ABP_SkinFX_NoGraph_Parent_C {
public:
    FLinearColor Color; // 0x5d0
    float FadeOutStart; // 0x5e0
    char pad_5e4[0x4];
    static ABP_SkinFX_CreatureCapture_C* StaticClass();
}; // Size: 0x5e8
#pragma pack(pop)
