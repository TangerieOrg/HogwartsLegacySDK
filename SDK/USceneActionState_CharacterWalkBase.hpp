#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_CharacterWalkBase : public USceneRigObjectActionState {
public:
    char pad_70[0x18];
    static USceneActionState_CharacterWalkBase* StaticClass();
    void Arrived();
}; // Size: 0x88
#pragma pack(pop)
