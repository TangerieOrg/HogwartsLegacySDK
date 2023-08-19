#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_PauseForVanishment : public USceneRigActionState {
public:
    char pad_50[0x8];
    static USceneActionState_PauseForVanishment* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
