#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FTimerHandle.hpp"
#include "UHUDElementGroup.hpp"
class UUMGSequencePlayer;
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UPhoenixImage;
class UOverlay;
class UPhoenixRichTextBlock;
class UPhoenixTextBlock;
class ABiped_Player;
struct FLockManagerLock;
class UMaterialInstanceDynamic;
class UObject;
class UTexture2D;
struct FInventoryResult;
class UQuickActionManager;
#pragma pack(push, 1)
class UUI_BP_QuickItemHUD_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* Deactivate; // 0x2f0
    UWidgetAnimation* Activate; // 0x2f8
    UWidgetAnimation* NewItemSelected; // 0x300
    UImage* ActiveFlames; // 0x308
    UImage* ActiveGlow; // 0x310
    UCanvasPanel* ActiveHighlight; // 0x318
    UPhoenixImage* ActiveSparks; // 0x320
    UOverlay* Count; // 0x328
    UPhoenixRichTextBlock* ItemButtonText; // 0x330
    UPhoenixTextBlock* ItemCountText; // 0x338
    UImage* ItemIcon; // 0x340
    UImage* itemMeter; // 0x348
    UCanvasPanel* ItemPanel; // 0x350
    UOverlay* UsageCount; // 0x358
    UPhoenixTextBlock* UsageCountText; // 0x360
    TArray<FName> ItemPickupLocks; // 0x368
    bool TimerActive; // 0x378
    char pad_379[0x3];
    float potionDuration; // 0x37c
    char pad_380[0x50];
    FSlateColor DefaultHighlightColor; // 0x3d0
    FName SelectedItemName; // 0x3f8
    char pad_400[0x20];
    static UUI_BP_QuickItemHUD_C* StaticClass();
    void FocusPotionExpired();
    void SetHighlightColor(FName PotionID, bool Temp_bool_Variable, FSlateColor CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FSlateColor K2Node_Select_Default);
    void SetTimerActive(bool ACTIVE, bool ShowAnimation, bool ForceOperation, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, UWidgetAnimation* K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void UpdatePlantUsageCount(FName ItemName, int32_t PlantMax, int32_t PlantCount);
    void ResetTimer(FName PotionName, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_GetAbilityActive_ReturnValue);
    void ActivateTimer(FName ItemName, float CallFunc_GetPotionDuration_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void Update_Fill_Meter(float FillPercentage, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_GetAbilityDurationRemaining_ReturnValue, float CallFunc_GetPotionDuration_ReturnValue, bool CallFunc_GetAbilityActive_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5);
    void Set_Item_Panel_Visibility(bool FoundItem, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsUnlocked_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void SetItemCount(FName ItemName, int32_t ItemCount, bool CallFunc_NotEqual_NameName_ReturnValue, int32_t CallFunc_GetCount_ReturnValue);
    void SetItem(FName ItemName, FName IconName, int32_t ItemCount, bool CallFunc_EqualEqual_NameName_ReturnValue, FName Temp_name_Variable, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, FName K2Node_Select_Default);
    void AbilityAdded(UObject* Caller, FName& String);
    void WheelItemSelected(UObject* Caller, FName& String);
    void WheelItemUnlocked(UObject* Caller, FLockManagerLock& Lock);
    void ItemIconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PlayerInventoryChanged(UObject* Caller, FInventoryResult& InventoryResult);
    void QuickItemUsed(UObject* Caller, FName& String);
    void ShowButtonGraphicsFlagChanged(UObject* Caller, int32_t int);
    void PlayerPlantCountChanged(UObject* Caller);
    void PostLoadPlayerSpawn();
    void RestartChallenge(UObject* Caller);
    void ExecuteUbergraph_UI_BP_QuickItemHUD(int32_t EntryPoint, UQuickActionManager* CallFunc_Get_ReturnValue, bool Temp_bool_Variable, FName CallFunc_GetQuickWheelItem_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1);
    void OnFocusPotionExpired__DelegateSignature();
    void OnFocusPotionApplied__DelegateSignature();
}; // Size: 0x420
#pragma pack(pop)
