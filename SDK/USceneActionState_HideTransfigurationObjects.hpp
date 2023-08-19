#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_HideTransfigurationObjects : public USceneRigActionState {
public:
    char pad_50[0x20];
    static USceneActionState_HideTransfigurationObjects* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
