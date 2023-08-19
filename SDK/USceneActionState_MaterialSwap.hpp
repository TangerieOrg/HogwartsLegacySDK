#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UMaterialSwap;
#pragma pack(push, 1)
class USceneActionState_MaterialSwap : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    UMaterialSwap* MaterialSwap; // 0x78
    static USceneActionState_MaterialSwap* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
