#pragma once
#include <cstdint>
#include "FPickupNotificationData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UPhoenixTextBlock;
class UBorder;
class UUIManager;
class UObject;
#pragma pack(push, 1)
class UUI_BP_CompanionLevelUp_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* HideSpecialNotification; // 0x2f0
    UWidgetAnimation* ShowSpecialNotification; // 0x2f8
    UImage* companionIcon; // 0x300
    UPhoenixTextBlock* CompanionName; // 0x308
    UImage* flame; // 0x310
    UImage* Left_Image; // 0x318
    UImage* Right_Image; // 0x320
    UBorder* TheBorder; // 0x328
    TArray<FPickupNotificationData> ItemsToShow; // 0x330
    static UUI_BP_CompanionLevelUp_C* StaticClass();
    void ShowNotification(FString ItemName, FString IconName, int32_t Count, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
    void HideComplete(UUIManager* CallFunc_Get_ReturnValue);
    void Hide();
    void I_AddCollectionKnownNotification(FName CollectionID, FName CollectionCategory);
    void I_AddCollectionObtainedNotification(FName CollectionID, FName CollectionCategory);
    void I_AddChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t MaxLevels);
    void I_ItemCollected(FString Name, FString IconName, int32_t Count, FString Header, bool SpecialCollection, FName Variation);
    void I_AddGenericNotification(FString HeaderText, FString SubheaderText, FString IconName);
    void Construct();
    void EventDisplaySpecialNotification(FString ItemId);
    void EventHideSpecialNotification();
    void HideAnimationFinished();
    void OnDisplaySpecialNotification(UObject* Caller);
    void ExecuteUbergraph_UI_BP_CompanionLevelUp(int32_t EntryPoint, FName K2Node_Event_ChallengeID, FName K2Node_Event_ChallengeCategory, int32_t K2Node_Event_CompletedLevel, int32_t K2Node_Event_MaxLevels, FString K2Node_Event_Name, FString K2Node_Event_IconName_1, int32_t K2Node_Event_Count, FString K2Node_Event_Header, bool K2Node_Event_SpecialCollection, FName K2Node_Event_Variation, FPickupNotificationData K2Node_MakeStruct_PickupNotificationData, FString K2Node_Event_HeaderText, FString K2Node_Event_SubheaderText, FString K2Node_Event_IconName, UUIManager* CallFunc_Get_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, FName K2Node_Event_CollectionID, FName K2Node_Event_CollectionCategory, FName K2Node_Event_CollectionID_1, FName K2Node_Event_CollectionCategory_1);
}; // Size: 0x340
#pragma pack(pop)
