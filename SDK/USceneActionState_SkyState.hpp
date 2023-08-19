#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_SkyState : public USceneRigActionState {
public:
    char pad_50[0x8];
    float LerpAlpha; // 0x58
    char pad_5c[0x4];
    static USceneActionState_SkyState* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
