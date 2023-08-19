#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UNameProvider;
#pragma pack(push, 1)
class USceneAction_DisableConversationCamera : public USceneRigActionBase {
public:
    TArray<UNameProvider*> EnabledRegisteredCameraNames; // 0x88
    TArray<UNameProvider*> DisabledRegisteredCameraNames; // 0x98
    static USceneAction_DisableConversationCamera* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
