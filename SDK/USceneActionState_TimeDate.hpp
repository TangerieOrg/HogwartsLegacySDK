#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_TimeDate : public USceneRigActionState {
public:
    char pad_50[0x8];
    float LerpAlpha; // 0x58
    char pad_5c[0x4];
    static USceneActionState_TimeDate* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
