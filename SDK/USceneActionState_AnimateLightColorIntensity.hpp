#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_AnimateLightColorIntensity : public USceneRigObjectActionState {
public:
    char pad_70[0x50];
    static USceneActionState_AnimateLightColorIntensity* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
