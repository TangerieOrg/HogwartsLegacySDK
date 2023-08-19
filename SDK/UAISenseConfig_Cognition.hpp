#pragma once
#include <cstdint>
#include "FInputContextWithType.hpp"
#include "FStencilManagerEffectName.hpp"
#include "UAISenseConfig.hpp"
class UCogGroupBestTargetProcess;
#pragma pack(push, 1)
class UAISenseConfig_Cognition : public UAISenseConfig {
public:
    bool bStartActive; // 0x48
    char pad_49[0x7];
    TArray<FInputContextWithType> LogicContexts; // 0x50
    TArray<UCogGroupBestTargetProcess*> BestTargetProcesses; // 0x60
    bool bStencilPerceivedTarget; // 0x70
    char pad_71[0x3];
    FStencilManagerEffectName StencilEffect; // 0x74
    FStencilManagerEffectName StencilOwnedEffect; // 0x7c
    char pad_84[0x4];
    static UAISenseConfig_Cognition* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
