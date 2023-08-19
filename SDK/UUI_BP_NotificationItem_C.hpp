#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRarityColors.hpp"
#include "FTimerHandle.hpp"
#include "GearStatType.hpp"
#include "UNotificationWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UImage;
class UPhoenixImage;
class UBorder;
class UUIManager;
class UGearManager;
class UObject;
#pragma pack(push, 1)
class UUI_BP_NotificationItem_C : public UNotificationWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UWidgetAnimation* NotificationIN; // 0x2b8
    UWidgetAnimation* NotificationOUT; // 0x2c0
    UImage* Burst; // 0x2c8
    UPhoenixImage* compareArrow; // 0x2d0
    UImage* countBack; // 0x2d8
    UBorder* iconBorder; // 0x2e0
    UCanvasPanel* ItemCountPanel; // 0x2e8
    UImage* Outline; // 0x2f0
    UImage* outlineglow; // 0x2f8
    UImage* QuestBack; // 0x300
    UImage* rarityBack; // 0x308
    UImage* sparkles; // 0x310
    UBorder* textBorder; // 0x318
    float RemainingLifeTime; // 0x320
    bool ShouldTickLifetime; // 0x324
    bool canAddToInventory; // 0x325
    char pad_326[0x12];
    FTimerHandle LifetimeTimer; // 0x338
    FHermesBPDelegateHandle NotificationAbortionHandle; // 0x340
    bool CountVisible; // 0x350
    char pad_351[0x7];
    static UUI_BP_NotificationItem_C* StaticClass();
    void SetPlayerHouseBroom(UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void Compare_Gear_Stats(FName GearID, int32_t TempNewGearDeffense, int32_t TempNewGearOffense, FDataTableRowHandle TempCompareColor, EGearSlotIDEnum tempGearSlot, int32_t TempEquippedStat, int32_t TempNewStat, FGearItemID TempGearItemID, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue, int32_t CallFunc_GetGearItemStats_OffenseStat, int32_t CallFunc_GetGearItemStats_DefenseStat, FGearItemID K2Node_MakeStruct_GearItemID, int32_t CallFunc_GetGearItemStats_OffenseStat_1, int32_t CallFunc_GetGearItemStats_DefenseStat_1, UGearManager* CallFunc_Get_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    bool IncrementCount(int32_t Amount, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
    void AddCount(int32_t Amount);
    void SetItemNotificationType(bool isQuestItem);
    void Set_Rarity_State(FName RarityTier, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FRarityColors CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue, FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue_1);
    void WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1();
    void LifetimeComplete();
    void WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2();
    void ActivateNotification();
    void SetIsInventoryFullNotification(bool IsInventoryFull);
    void ToggleCountVisibility(bool IsVisible);
    void NotificationAborted(UObject* Caller);
    void ExecuteUbergraph_UI_BP_NotificationItem(int32_t EntryPoint, bool Temp_bool_Variable);
    void NotificationComplete__DelegateSignature(UUI_BP_NotificationItem_C* Item);
}; // Size: 0x358
#pragma pack(pop)
