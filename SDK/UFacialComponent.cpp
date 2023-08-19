#include "AActor.hpp"
#include "EFacialEmotion.hpp"
#include "EManagedEyeStatePriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "GazeStatesEnum.hpp"
#include "UActorComponent.hpp"
#include "UAimEyesData.hpp"
#include "UAnimRequest_AmbientEyes.hpp"
#include "UAnimRequest_Dialogue.hpp"
#include "UAnimRequest_FacialAnimation.hpp"
#include "UAnimRequest_FacialEmotion.hpp"
#include "UAnimSequence.hpp"
#include "UDataTable.hpp"
#include "UFacialComponent.hpp"
#include "UFunction.hpp"
void UFacialComponent::StartSettingGazeState(GazeStatesEnum InGazeState, EManagedEyeStatePriority InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.StartSettingGazeState"));
    struct Params_StartSettingGazeState {
        GazeStatesEnum InGazeState; // 0x0
        EManagedEyeStatePriority InPriority; // 0x1
    }; // Size: 0x2
    Params_StartSettingGazeState params{};
    params.InGazeState = (GazeStatesEnum)InGazeState;
    params.InPriority = (EManagedEyeStatePriority)InPriority;
    ProcessEvent(func, &params);
}
bool UFacialComponent::EditorCancelPlayingCurrentDialogueLine() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.EditorCancelPlayingCurrentDialogueLine"));
    struct Params_EditorCancelPlayingCurrentDialogueLine {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EditorCancelPlayingCurrentDialogueLine params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UFacialComponent* UFacialComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.FacialComponent");
    return (UFacialComponent*)res;
}
void UFacialComponent::SetAmbientEyesDefaultValue(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.SetAmbientEyesDefaultValue"));
    struct Params_SetAmbientEyesDefaultValue {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetAmbientEyesDefaultValue params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UFacialComponent::SetAdditiveEyeTargetDefaultValue(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.SetAdditiveEyeTargetDefaultValue"));
    struct Params_SetAdditiveEyeTargetDefaultValue {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetAdditiveEyeTargetDefaultValue params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UFacialComponent::ReloadAnimDataTables() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.ReloadAnimDataTables"));
    struct Params_ReloadAnimDataTables {
    }; // Size: 0x0
    Params_ReloadAnimDataTables params{};
    ProcessEvent(func, &params);
}
void UFacialComponent::DoubleBlinkNow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.DoubleBlinkNow"));
    struct Params_DoubleBlinkNow {
    }; // Size: 0x0
    Params_DoubleBlinkNow params{};
    ProcessEvent(func, &params);
}
void UFacialComponent::OnHealthChanged(AActor* Actor, float Delta, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.OnHealthChanged"));
    struct Params_OnHealthChanged {
        AActor* Actor; // 0x0
        float Delta; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_OnHealthChanged params{};
    params.Actor = (AActor*)Actor;
    params.Delta = (float)Delta;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
bool UFacialComponent::EditorLoadLanguage(FString Lang) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.EditorLoadLanguage"));
    struct Params_EditorLoadLanguage {
        FString Lang; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EditorLoadLanguage params{};
    params.Lang = (FString)Lang;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFacialComponent::OnCharacterLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
UAnimSequence* UFacialComponent::GetFacialEmotionAnim(FName Emotion, FGameplayTagContainer AnimTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.GetFacialEmotionAnim"));
    struct Params_GetFacialEmotionAnim {
        FName Emotion; // 0x0
        FGameplayTagContainer AnimTags; // 0x8
        UAnimSequence* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_GetFacialEmotionAnim params{};
    params.Emotion = (FName)Emotion;
    params.AnimTags = (FGameplayTagContainer)AnimTags;
    ProcessEvent(func, &params);
    return (UAnimSequence*)params.ReturnValue;
}
bool UFacialComponent::IsPlayingDialogueLine() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.IsPlayingDialogueLine"));
    struct Params_IsPlayingDialogueLine {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayingDialogueLine params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFacialComponent::IsLoadingDialogueLineAnimDataTables() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.IsLoadingDialogueLineAnimDataTables"));
    struct Params_IsLoadingDialogueLineAnimDataTables {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLoadingDialogueLineAnimDataTables params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAnimSequence* UFacialComponent::GetFacialAnimByTags(FGameplayTagContainer AnimTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.GetFacialAnimByTags"));
    struct Params_GetFacialAnimByTags {
        FGameplayTagContainer AnimTags; // 0x0
        UAnimSequence* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_GetFacialAnimByTags params{};
    params.AnimTags = (FGameplayTagContainer)AnimTags;
    ProcessEvent(func, &params);
    return (UAnimSequence*)params.ReturnValue;
}
bool UFacialComponent::EditorPlayDialogueLine(FName DialogueLine, FName OverrideDialogueLineEmotion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.EditorPlayDialogueLine"));
    struct Params_EditorPlayDialogueLine {
        FName DialogueLine; // 0x0
        FName OverrideDialogueLineEmotion; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EditorPlayDialogueLine params{};
    params.DialogueLine = (FName)DialogueLine;
    params.OverrideDialogueLineEmotion = (FName)OverrideDialogueLineEmotion;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFacialComponent::GetDialogueLineAnim(FName DialogueLine) {}
EFacialEmotion UFacialComponent::GetActiveFacialEmotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.GetActiveFacialEmotion"));
    struct Params_GetActiveFacialEmotion {
        EFacialEmotion ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActiveFacialEmotion params{};
    ProcessEvent(func, &params);
    return (EFacialEmotion)params.ReturnValue;
}
void UFacialComponent::FinishSettingGazeState(EManagedEyeStatePriority InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.FinishSettingGazeState"));
    struct Params_FinishSettingGazeState {
        EManagedEyeStatePriority InPriority; // 0x0
    }; // Size: 0x1
    Params_FinishSettingGazeState params{};
    params.InPriority = (EManagedEyeStatePriority)InPriority;
    ProcessEvent(func, &params);
}
TArray<FName> UFacialComponent::EditorGetDialogueLineIds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.EditorGetDialogueLineIds"));
    struct Params_EditorGetDialogueLineIds {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EditorGetDialogueLineIds params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UFacialComponent::BlinkNow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FacialComponent.BlinkNow"));
    struct Params_BlinkNow {
    }; // Size: 0x0
    Params_BlinkNow params{};
    ProcessEvent(func, &params);
}
