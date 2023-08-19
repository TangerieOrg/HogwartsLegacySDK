#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_SetProperty : public USceneRigObjectActionState {
public:
    char pad_70[0x18];
    static USceneActionState_SetProperty* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
