#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_EmissiveAdaptationBase : public USceneRigActionState {
public:
    char pad_50[0x10];
    float InsertedPriortiy; // 0x60
    float CurrentBlend; // 0x64
    static USceneActionState_EmissiveAdaptationBase* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
