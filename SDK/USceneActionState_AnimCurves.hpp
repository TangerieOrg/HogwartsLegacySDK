#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UPoseSampler_AnimCurves;
#pragma pack(push, 1)
class USceneActionState_AnimCurves : public USceneRigObjectActionState {
public:
    char pad_70[0x20];
    UPoseSampler_AnimCurves* PoseSampler; // 0x90
    static USceneActionState_AnimCurves* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
