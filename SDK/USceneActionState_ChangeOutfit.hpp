#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ChangeOutfit : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    static USceneActionState_ChangeOutfit* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
