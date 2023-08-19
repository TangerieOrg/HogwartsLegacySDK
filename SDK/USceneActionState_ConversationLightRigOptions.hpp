#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ConversationLightRigOptions : public USceneRigObjectActionState {
public:
    char pad_70[0x20];
    static USceneActionState_ConversationLightRigOptions* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
