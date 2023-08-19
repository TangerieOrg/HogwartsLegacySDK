#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "USceneRigProvider.hpp"
class UAnimationArchitectTagProvider;
#pragma pack(push, 1)
class USceneRig_ConversationAmbient : public USceneRigProvider {
public:
    char pad_28[0x18];
    FGameplayTagContainer Tags; // 0x40
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x60
    static USceneRig_ConversationAmbient* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
