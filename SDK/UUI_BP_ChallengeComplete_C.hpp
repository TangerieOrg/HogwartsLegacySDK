#pragma once
#include <cstdint>
#include "FChallengeNotificationData.hpp"
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UPhoenixTextBlock;
class UUIManager;
class UTexture2D;
class UObject;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_ChallengeComplete_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* HideChallengeUnlock_Anim; // 0x2f0
    UWidgetAnimation* ShowChallengeUnlock_Anim; // 0x2f8
    UImage* challengeIcon; // 0x300
    UPhoenixTextBlock* CompleteMissionName; // 0x308
    UImage* pulseCloud; // 0x310
    UImage* pulseRing; // 0x318
    UImage* shieldCloud; // 0x320
    UImage* shieldSparks_1; // 0x328
    float Duration; // 0x330
    char pad_334[0x4];
    TArray<FChallengeNotificationData> NotificationData; // 0x338
    static UUI_BP_ChallengeComplete_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_2();
    void SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_1();
    void SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_0();
    void SetChallengeDisplayText(FName ChallengeID, int32_t TotalRequired, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_Conv_NameToString_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array);
    void ClearNotification(UUIManager* CallFunc_GetUIManagerPure_ReturnValue);
    void PlayHideAnimation(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void IntroAnimationStart();
    void IntroAnimationEnd();
    void OutroAnimationEnded();
    void RequestChallengeComplete(FName ChallengeID, FName ChallengeCategory, int32_t CompletedTier, int32_t TotalTiers, int32_t TotalInstancesForLevel);
    void IconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1();
    void OnShowNotification(UObject* Caller);
    void OnInitialized();
    void ExecuteUbergraph_UI_BP_ChallengeComplete(int32_t EntryPoint, FName K2Node_CustomEvent_ChallengeID, FName K2Node_CustomEvent_ChallengeCategory, int32_t K2Node_CustomEvent_CompletedTier, int32_t K2Node_CustomEvent_TotalTiers, int32_t K2Node_CustomEvent_TotalInstancesForLevel, FChallengeNotificationData K2Node_MakeStruct_ChallengeNotificationData, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UTexture2D* K2Node_CustomEvent_LoadedTexture, UObject* K2Node_CustomEvent_CallbackParam, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UObject* K2Node_CustomEvent_Caller, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue);
}; // Size: 0x348
#pragma pack(pop)
