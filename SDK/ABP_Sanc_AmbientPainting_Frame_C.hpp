#pragma once
#include <cstdint>
#include "AVFX_BP_AmbientPainting_Frame_C.hpp"
class UObjectStateComponent;
#pragma pack(push, 1)
class ABP_Sanc_AmbientPainting_Frame_C : public AVFX_BP_AmbientPainting_Frame_C {
public:
    UObjectStateComponent* ObjectState_0; // 0x2e0
    static ABP_Sanc_AmbientPainting_Frame_C* StaticClass();
}; // Size: 0x2e8
#pragma pack(pop)
