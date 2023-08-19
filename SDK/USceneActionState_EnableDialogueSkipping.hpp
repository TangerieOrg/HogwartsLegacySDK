#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_EnableDialogueSkipping : public USceneRigActionState {
public:
    char pad_50[0x98];
    static USceneActionState_EnableDialogueSkipping* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
