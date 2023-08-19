#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_PlayForcedConversation : public USceneRigObjectActionState {
public:
    char pad_70[0x10];
    static USceneActionState_PlayForcedConversation* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
