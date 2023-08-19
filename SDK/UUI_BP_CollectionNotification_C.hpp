#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UNotificationWidget.hpp"
class AHUD;
class UWidgetAnimation;
class UImage;
class UPhoenixTextBlock;
class APhoenixHUD;
class APlayerController;
class UInvalidationBox;
class UUIManager;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_CollectionNotification_C : public UNotificationWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UWidgetAnimation* NotificationIN; // 0x2b8
    UWidgetAnimation* NotificationOUT; // 0x2c0
    UImage* categoryIcon; // 0x2c8
    UPhoenixTextBlock* CollectionID; // 0x2d0
    UPhoenixTextBlock* CollectionState; // 0x2d8
    UInvalidationBox* InvalidationBox_0; // 0x2e0
    UImage* Item; // 0x2e8
    UImage* pulseCloud; // 0x2f0
    UImage* pulseRing; // 0x2f8
    float RemainingLifeTime; // 0x300
    bool ShouldTickLifetime; // 0x304
    bool canAddToInventory; // 0x305
    char pad_306[0x2];
    static UUI_BP_CollectionNotification_C* StaticClass();
    void CheckItemID(FString NewID, FString& SetItemID, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void SetNotificationData(FName CollectionID, FName Category, FString CollectionState, FString tempChallengeIcon, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_CheckItemID_SetItemID, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2, FString CallFunc_Conv_NameToString_ReturnValue_2);
    void ClearKnowledgeFlag(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess);
    void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ActivateNotification();
    void WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2();
    void ExecuteUbergraph_UI_BP_CollectionNotification(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue);
}; // Size: 0x308
#pragma pack(pop)
