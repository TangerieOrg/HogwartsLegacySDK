#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "EManagedMovementModePriority.hpp"
#include "EMovementMode.hpp"
#include "FGameplayTagContainer.hpp"
#include "UFunction.hpp"
#include "UManagedCharacterComponent.hpp"
#include "UManagedStateComponent.hpp"
#include "UObject.hpp"
UManagedCharacterComponent* UManagedCharacterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.ManagedCharacterComponent");
    return (UManagedCharacterComponent*)res;
}
void UManagedCharacterComponent::StartSettingMovementMode(EMovementMode InMovementMode, EManagedMovementModePriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedCharacterComponent.StartSettingMovementMode"));
    struct Params_StartSettingMovementMode {
        EMovementMode InMovementMode; // 0x0
        EManagedMovementModePriority Priority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_StartSettingMovementMode params{};
    params.InMovementMode = (EMovementMode)InMovementMode;
    params.Priority = (EManagedMovementModePriority)Priority;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void UManagedCharacterComponent::SetDefaultFacialEmotion(EFacialEmotion Emotion, float Transition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedCharacterComponent.SetDefaultFacialEmotion"));
    struct Params_SetDefaultFacialEmotion {
        EFacialEmotion Emotion; // 0x0
        char pad_1[0x3];
        float Transition; // 0x4
    }; // Size: 0x8
    Params_SetDefaultFacialEmotion params{};
    params.Emotion = (EFacialEmotion)Emotion;
    params.Transition = (float)Transition;
    ProcessEvent(func, &params);
}
void UManagedCharacterComponent::SetStartFacialEmotionWithTags(EFacialEmotion Emotion, UObject* Provider, float Transition, EManagedFacialEmotionPriority ManagedFacialEmotionPriority, FGameplayTagContainer AnimTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedCharacterComponent.SetStartFacialEmotionWithTags"));
    struct Params_SetStartFacialEmotionWithTags {
        EFacialEmotion Emotion; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
        float Transition; // 0x10
        EManagedFacialEmotionPriority ManagedFacialEmotionPriority; // 0x14
        char pad_15[0x3];
        FGameplayTagContainer AnimTags; // 0x18
    }; // Size: 0x38
    Params_SetStartFacialEmotionWithTags params{};
    params.Emotion = (EFacialEmotion)Emotion;
    params.Provider = (UObject*)Provider;
    params.Transition = (float)Transition;
    params.ManagedFacialEmotionPriority = (EManagedFacialEmotionPriority)ManagedFacialEmotionPriority;
    params.AnimTags = (FGameplayTagContainer)AnimTags;
    ProcessEvent(func, &params);
}
void UManagedCharacterComponent::SetStartFacialEmotion(EFacialEmotion Emotion, UObject* Provider, float Transition, EManagedFacialEmotionPriority ManagedFacialEmotionPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedCharacterComponent.SetStartFacialEmotion"));
    struct Params_SetStartFacialEmotion {
        EFacialEmotion Emotion; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
        float Transition; // 0x10
        EManagedFacialEmotionPriority ManagedFacialEmotionPriority; // 0x14
    }; // Size: 0x15
    Params_SetStartFacialEmotion params{};
    params.Emotion = (EFacialEmotion)Emotion;
    params.Provider = (UObject*)Provider;
    params.Transition = (float)Transition;
    params.ManagedFacialEmotionPriority = (EManagedFacialEmotionPriority)ManagedFacialEmotionPriority;
    ProcessEvent(func, &params);
}
void UManagedCharacterComponent::SetFinishFacialEmotion(UObject* Provider, EManagedFacialEmotionPriority ManagedFacialEmotionPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedCharacterComponent.SetFinishFacialEmotion"));
    struct Params_SetFinishFacialEmotion {
        UObject* Provider; // 0x0
        EManagedFacialEmotionPriority ManagedFacialEmotionPriority; // 0x8
    }; // Size: 0x9
    Params_SetFinishFacialEmotion params{};
    params.Provider = (UObject*)Provider;
    params.ManagedFacialEmotionPriority = (EManagedFacialEmotionPriority)ManagedFacialEmotionPriority;
    ProcessEvent(func, &params);
}
void UManagedCharacterComponent::FinishSettingMovementMode(EManagedMovementModePriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedCharacterComponent.FinishSettingMovementMode"));
    struct Params_FinishSettingMovementMode {
        EManagedMovementModePriority Priority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_FinishSettingMovementMode params{};
    params.Priority = (EManagedMovementModePriority)Priority;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
