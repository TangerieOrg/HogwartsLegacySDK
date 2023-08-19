#pragma once
#include <cstdint>
#include "EFacialEmotion.hpp"
#include "EManagedEyeStatePriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "GazeStatesEnum.hpp"
#include "UActorComponent.hpp"
class UAnimRequest_Dialogue;
class UAimEyesData;
class UAnimRequest_AmbientEyes;
class UAnimRequest_FacialEmotion;
class UAnimRequest_FacialAnimation;
class UAnimSequence;
class AActor;
class UDataTable;
#pragma pack(push, 1)
class UFacialComponent : public UActorComponent {
public:
    UAnimRequest_Dialogue* DialogueAnimRequest; // 0xc8
    char pad_d0[0x400];
    UAimEyesData* IdleAimEyes; // 0x4d0
    UAimEyesData* ListeningAimEyes; // 0x4d8
    UAimEyesData* SpeakingAimEyes; // 0x4e0
    char pad_4e8[0x50];
    UAnimRequest_FacialEmotion* FacialEmotionAnimRequest; // 0x538
    char pad_540[0x140];
    UAnimRequest_FacialAnimation* FacialAnimationAnimRequest; // 0x680
    char pad_688[0x70];
    UAnimRequest_AmbientEyes* AmbientEyesAnimRequest; // 0x6f8
    TArray<UDataTable*> DialogueLineDataTables; // 0x700
    char pad_710[0x8];
    UAnimSequence* CurrentDialogueLineAnim; // 0x718
    char pad_720[0x98];
    static UFacialComponent* StaticClass();
    void StartSettingGazeState(GazeStatesEnum InGazeState, EManagedEyeStatePriority InPriority);
    void SetAmbientEyesDefaultValue(bool bValue);
    void SetAdditiveEyeTargetDefaultValue(bool bValue);
    void ReloadAnimDataTables();
    void OnHealthChanged(AActor* Actor, float Delta, bool bIndicateHUD);
    void OnCharacterLoadComplete(AActor* Actor);
    bool IsPlayingDialogueLine();
    bool IsLoadingDialogueLineAnimDataTables();
    UAnimSequence* GetFacialEmotionAnim(FName Emotion, FGameplayTagContainer AnimTags);
    UAnimSequence* GetFacialAnimByTags(FGameplayTagContainer AnimTags);
    void GetDialogueLineAnim(FName DialogueLine);
    EFacialEmotion GetActiveFacialEmotion();
    void FinishSettingGazeState(EManagedEyeStatePriority InPriority);
    bool EditorPlayDialogueLine(FName DialogueLine, FName OverrideDialogueLineEmotion);
    bool EditorLoadLanguage(FString Lang);
    TArray<FName> EditorGetDialogueLineIds();
    bool EditorCancelPlayingCurrentDialogueLine();
    void DoubleBlinkNow();
    void BlinkNow();
}; // Size: 0x7b8
#pragma pack(pop)
