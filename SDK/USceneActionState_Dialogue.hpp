#pragma once
#include <cstdint>
#include "FDialogueLineReference.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_Dialogue : public USceneRigObjectActionState {
public:
    char pad_70[0x10];
    FDialogueLineReference LineReference; // 0x80
    int32_t AudioHandle; // 0x90
    char pad_94[0xc];
    static USceneActionState_Dialogue* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
