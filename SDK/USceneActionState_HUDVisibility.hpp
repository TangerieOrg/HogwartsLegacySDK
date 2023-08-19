#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_HUDVisibility : public USceneRigActionState {
public:
    char pad_50[0x58];
    static USceneActionState_HUDVisibility* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
