#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_StencilFX : public USceneRigObjectActionState {
public:
    FName StartedFX; // 0x70
    static USceneActionState_StencilFX* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
