#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_CharacterOptions : public USceneRigObjectActionState {
public:
    char pad_70[0xd0];
    static USceneActionState_CharacterOptions* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
