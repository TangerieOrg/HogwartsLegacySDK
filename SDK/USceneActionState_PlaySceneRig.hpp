#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_PlaySceneRig : public USceneRigActionState {
public:
    char pad_50[0x10];
    static USceneActionState_PlaySceneRig* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
