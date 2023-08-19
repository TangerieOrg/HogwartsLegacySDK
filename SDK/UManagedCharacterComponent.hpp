#pragma once
#include <cstdint>
#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "EManagedMovementModePriority.hpp"
#include "EMovementMode.hpp"
#include "FGameplayTagContainer.hpp"
#include "UManagedStateComponent.hpp"
class UObject;
#pragma pack(push, 1)
class UManagedCharacterComponent : public UManagedStateComponent {
public:
    char pad_170[0x240];
    static UManagedCharacterComponent* StaticClass();
    void StartSettingMovementMode(EMovementMode InMovementMode, EManagedMovementModePriority Priority, UObject* Provider);
    void SetStartFacialEmotionWithTags(EFacialEmotion Emotion, UObject* Provider, float Transition, EManagedFacialEmotionPriority ManagedFacialEmotionPriority, FGameplayTagContainer AnimTags);
    void SetStartFacialEmotion(EFacialEmotion Emotion, UObject* Provider, float Transition, EManagedFacialEmotionPriority ManagedFacialEmotionPriority);
    void SetFinishFacialEmotion(UObject* Provider, EManagedFacialEmotionPriority ManagedFacialEmotionPriority);
    void SetDefaultFacialEmotion(EFacialEmotion Emotion, float Transition);
    void FinishSettingMovementMode(EManagedMovementModePriority Priority, UObject* Provider);
}; // Size: 0x3b0
#pragma pack(pop)
