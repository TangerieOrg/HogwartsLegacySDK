#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UActorProvider.hpp"
class UAnimationArchitectTagProvider;
class UNameProvider;
#pragma pack(push, 1)
class UActor_SceneRigCamera : public UActorProvider {
public:
    FGameplayTagContainer Tags; // 0x38
    TArray<FGameplayTagContainer> FallbackTags; // 0x58
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x68
    TArray<UNameProvider*> EnabledRegisteredCameraNames; // 0x78
    TArray<UNameProvider*> DisabledRegisteredCameraNames; // 0x88
    static UActor_SceneRigCamera* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
