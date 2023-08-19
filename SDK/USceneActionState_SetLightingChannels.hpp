#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_SetLightingChannels : public USceneRigObjectActionState {
public:
    char pad_70[0x50];
    static USceneActionState_SetLightingChannels* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
