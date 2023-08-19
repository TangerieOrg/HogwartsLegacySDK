#pragma once
#include <cstdint>
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UNotificationWidget.hpp"
class UWidgetAnimation;
class AHUD;
class UImage;
class UPhoenixTextBlock;
class APlayerController;
class APhoenixHUD;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UUI_BP_ChallengeNotification_C : public UNotificationWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UWidgetAnimation* NotificationIN; // 0x2b8
    UWidgetAnimation* NotificationOUT; // 0x2c0
    UImage* challengeIcon; // 0x2c8
    UPhoenixTextBlock* CurrentCount; // 0x2d0
    UPhoenixTextBlock* MaxCount; // 0x2d8
    char pad_2e0[0x10];
    FTimerHandle LifetimeHandle; // 0x2f0
    static UUI_BP_ChallengeNotification_C* StaticClass();
    void IncrementNotification(int32_t NewCount);
    void SetNotificationData(FName ChallengeID, FName Category, int32_t CurrentCount, int32_t MaxCount, int32_t TempTier, FString StrCategory, FString tempChallengeIcon, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_Conv_NameToString_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array);
    void ClearKnowledgeFlag(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess);
    void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1();
    void ShowNotification();
    void WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2();
    void ChallengeNotificationIconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void LifetimeComplete();
    void ExecuteUbergraph_UI_BP_ChallengeNotification(int32_t EntryPoint, FTimerHandle CallFunc_K2_InvalidateTimerHandle_ReturnValue);
    void OutAnimationStarted__DelegateSignature();
}; // Size: 0x2f8
#pragma pack(pop)
