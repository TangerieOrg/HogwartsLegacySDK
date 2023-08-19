#pragma once
#include <cstdint>
#include "FPickupNotificationData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UImage;
class UBorder;
class UUIManager;
class UObject;
#pragma pack(push, 1)
class UUI_BP_FastTravelUnlockNotification_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* HideSpecialNotification; // 0x2f0
    UWidgetAnimation* ShowSpecialNotification; // 0x2f8
    UPhoenixTextBlock* newItem_Header; // 0x300
    UPhoenixTextBlock* NewItemLabel; // 0x308
    UImage* specialItemIcon; // 0x310
    UBorder* TheBorder; // 0x318
    TArray<FPickupNotificationData> ItemsToShow; // 0x320
    static UUI_BP_FastTravelUnlockNotification_C* StaticClass();
    void ShowNotification(FString ItemName, FString IconName, int32_t Count, FString Header, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
    void HideComplete(UUIManager* CallFunc_Get_ReturnValue);
    void Hide();
    void I_AddCollectionKnownNotification(FName CollectionID, FName CollectionCategory);
    void I_AddCollectionObtainedNotification(FName CollectionID, FName CollectionCategory);
    void I_AddChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t MaxLevels);
    void I_ItemCollected(FString Name, FString IconName, int32_t Count, FString Header, bool SpecialCollection, FName Variation);
    void I_AddGenericNotification(FString HeaderText, FString SubheaderText, FString IconName);
    void Construct();
    void RequestFastTravelUnlockedNotification(FString ItemId);
    void OnDisplayFTNotification(UObject* Caller);
    void ExecuteUbergraph_UI_BP_FastTravelUnlockNotification(int32_t EntryPoint, FString K2Node_Event_HeaderText, FString K2Node_Event_SubheaderText, FString K2Node_Event_IconName, UUIManager* CallFunc_Get_ReturnValue, FString K2Node_Event_Name, FString K2Node_Event_IconName_1, int32_t K2Node_Event_Count, FString K2Node_Event_Header, bool K2Node_Event_SpecialCollection, FName K2Node_Event_Variation, FPickupNotificationData K2Node_MakeStruct_PickupNotificationData, FName K2Node_Event_ChallengeID, FName K2Node_Event_ChallengeCategory, int32_t K2Node_Event_CompletedLevel, int32_t K2Node_Event_MaxLevels, int32_t CallFunc_Array_Add_ReturnValue, FName K2Node_Event_CollectionID, FName K2Node_Event_CollectionCategory, FName K2Node_Event_CollectionID_1, FName K2Node_Event_CollectionCategory_1, FString K2Node_CustomEvent_ItemID, UObject* K2Node_CustomEvent_Caller, FPickupNotificationData K2Node_MakeStruct_PickupNotificationData_1, FPickupNotificationData CallFunc_Array_Get_Item);
}; // Size: 0x330
#pragma pack(pop)
