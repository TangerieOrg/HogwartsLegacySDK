#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_Unskippable : public USceneRigActionState {
public:
    char pad_50[0x20];
    static USceneActionState_Unskippable* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
