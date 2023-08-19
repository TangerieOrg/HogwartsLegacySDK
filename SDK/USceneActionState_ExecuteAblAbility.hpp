#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ExecuteAblAbility : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    static USceneActionState_ExecuteAblAbility* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
