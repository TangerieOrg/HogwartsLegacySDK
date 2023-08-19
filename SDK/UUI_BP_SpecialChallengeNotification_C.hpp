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
#pragma pack(push, 1)
class UUI_BP_SpecialChallengeNotification_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* HideChallengeUnlock_Anim; // 0x2f0
    UWidgetAnimation* ShowChallengeUnlock_Anim; // 0x2f8
    UImage* challengeIcon; // 0x300
    UPhoenixTextBlock* CompleteMissionName; // 0x308
    UImage* pulseCloud; // 0x310
    UImage* pulseRing; // 0x318
    UImage* shieldSparks_1; // 0x320
    float Duration; // 0x328
    char pad_32c[0x4];
    TArray<FChallengeNotificationData> NotificationData; // 0x330
    FString ChallengeName; // 0x340
    static UUI_BP_SpecialChallengeNotification_C* StaticClass();
    void SetChallengeDisplayText(FName ChallengeID, int32_t TotalRequired, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_Conv_NameToString_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array);
    void ClearNotification(UUIManager* CallFunc_GetUIManagerPure_ReturnValue);
    void HideChallengeUnlock(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void RequestChallengeUnlock(FName ChallengeID, FName ChallengeCategory, int32_t TotalRequired);
    void IconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1();
    void OnShowNotification(UObject* Caller);
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_UI_BP_SpecialChallengeNotification(int32_t EntryPoint);
}; // Size: 0x350
#pragma pack(pop)
