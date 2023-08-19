#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ConversationLightRigOptions : public USceneRigObjectActionBase {
public:
    bool GetFromConversation; // 0xa0
    bool bKeepStateOnCompletion; // 0xa1
    bool bUsesSkyColors; // 0xa2
    char pad_a3[0x1];
    float KeyLightColorTemperature; // 0xa4
    float RimLightColorTemperature; // 0xa8
    float FillLightColorTemperature; // 0xac
    float KeyLightIntensity; // 0xb0
    float RimLightIntensity; // 0xb4
    float FillLightIntensity; // 0xb8
    char pad_bc[0x4];
    static USceneAction_ConversationLightRigOptions* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
