#include "ABiped_Player.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FInventoryResult.hpp"
#include "FLockManagerLock.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FTimerHandle.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UQuickActionManager.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_QuickItemHUD_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_QuickItemHUD_C* UUI_BP_QuickItemHUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C");
    return (UUI_BP_QuickItemHUD_C*)res;
}
void UUI_BP_QuickItemHUD_C::PlayerInventoryChanged(UObject* Caller, FInventoryResult& InventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.PlayerInventoryChanged"));
    struct Params_PlayerInventoryChanged {
        UObject* Caller; // 0x0
        FInventoryResult InventoryResult; // 0x8
    }; // Size: 0x90
    Params_PlayerInventoryChanged params{};
    params.Caller = (UObject*)Caller;
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
}
void UUI_BP_QuickItemHUD_C::FocusPotionExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.FocusPotionExpired"));
    struct Params_FocusPotionExpired {
    }; // Size: 0x0
    Params_FocusPotionExpired params{};
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::ResetTimer(FName PotionName, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_GetAbilityActive_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ResetTimer"));
    struct Params_ResetTimer {
        FName PotionName; // 0x0
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        bool CallFunc_GetAbilityActive_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ResetTimer params{};
    params.PotionName = (FName)PotionName;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetAbilityActive_ReturnValue = (bool)CallFunc_GetAbilityActive_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::ExecuteUbergraph_UI_BP_QuickItemHUD(int32_t EntryPoint, UQuickActionManager* CallFunc_Get_ReturnValue, bool Temp_bool_Variable, FName CallFunc_GetQuickWheelItem_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1) {}
void UUI_BP_QuickItemHUD_C::SetHighlightColor(FName PotionID, bool Temp_bool_Variable, FSlateColor CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FSlateColor K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.SetHighlightColor"));
    struct Params_SetHighlightColor {
        FName PotionID; // 0x0
        bool Temp_bool_Variable; // 0x8
        char pad_9[0x7];
        FSlateColor CallFunc_Map_Find_Value; // 0x10
        bool CallFunc_Map_Find_ReturnValue; // 0x38
        char pad_39[0x7];
        FSlateColor K2Node_Select_Default; // 0x40
    }; // Size: 0x68
    Params_SetHighlightColor params{};
    params.PotionID = (FName)PotionID;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Map_Find_Value = (FSlateColor)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.K2Node_Select_Default = (FSlateColor)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::UpdatePlantUsageCount(FName ItemName, int32_t PlantMax, int32_t PlantCount) {}
void UUI_BP_QuickItemHUD_C::AbilityAdded(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.AbilityAdded"));
    struct Params_AbilityAdded {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_AbilityAdded params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void UUI_BP_QuickItemHUD_C::SetTimerActive(bool ACTIVE, bool ShowAnimation, bool ForceOperation, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, UWidgetAnimation* K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.SetTimerActive"));
    struct Params_SetTimerActive {
        bool ACTIVE; // 0x0
        bool ShowAnimation; // 0x1
        bool ForceOperation; // 0x2
        char pad_3[0x1];
        float Temp_float_Variable; // 0x4
        bool Temp_bool_Variable; // 0x8
        char pad_9[0x3];
        float Temp_float_Variable_1; // 0xc
        bool CallFunc_Not_PreBool_ReturnValue; // 0x10
        bool Temp_bool_Variable_1; // 0x11
        char pad_12[0x2];
        float K2Node_Select_Default; // 0x14
        UWidgetAnimation* K2Node_Select_Default_1; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x28
        bool CallFunc_BooleanOR_ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_SetTimerActive params{};
    params.ACTIVE = (bool)ACTIVE;
    params.ShowAnimation = (bool)ShowAnimation;
    params.ForceOperation = (bool)ForceOperation;
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_float_Variable_1 = (float)Temp_float_Variable_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default = (float)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (UWidgetAnimation*)K2Node_Select_Default_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::Update_Fill_Meter(float FillPercentage, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_GetAbilityDurationRemaining_ReturnValue, float CallFunc_GetPotionDuration_ReturnValue, bool CallFunc_GetAbilityActive_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.Update Fill Meter"));
    struct Params_Update_Fill_Meter {
        float FillPercentage; // 0x0
        char pad_4[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x10
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x18
        float CallFunc_GetAbilityDurationRemaining_ReturnValue; // 0x20
        float CallFunc_GetPotionDuration_ReturnValue; // 0x24
        bool CallFunc_GetAbilityActive_ReturnValue; // 0x28
        char pad_29[0x3];
        float CallFunc_MapRangeClamped_ReturnValue; // 0x2c
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x30
        char pad_31[0x7];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2; // 0x38
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3; // 0x40
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4; // 0x48
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5; // 0x50
    }; // Size: 0x58
    Params_Update_Fill_Meter params{};
    params.FillPercentage = (float)FillPercentage;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.CallFunc_GetAbilityDurationRemaining_ReturnValue = (float)CallFunc_GetAbilityDurationRemaining_ReturnValue;
    params.CallFunc_GetPotionDuration_ReturnValue = (float)CallFunc_GetPotionDuration_ReturnValue;
    params.CallFunc_GetAbilityActive_ReturnValue = (bool)CallFunc_GetAbilityActive_ReturnValue;
    params.CallFunc_MapRangeClamped_ReturnValue = (float)CallFunc_MapRangeClamped_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_2 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_2;
    params.CallFunc_GetDynamicMaterial_ReturnValue_3 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_3;
    params.CallFunc_GetDynamicMaterial_ReturnValue_4 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_4;
    params.CallFunc_GetDynamicMaterial_ReturnValue_5 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_5;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::ActivateTimer(FName ItemName, float CallFunc_GetPotionDuration_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ActivateTimer"));
    struct Params_ActivateTimer {
        FName ItemName; // 0x0
        float CallFunc_GetPotionDuration_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xc
        char pad_d[0x3];
        FTimerHandle CallFunc_K2_SetTimer_ReturnValue; // 0x10
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ActivateTimer params{};
    params.ItemName = (FName)ItemName;
    params.CallFunc_GetPotionDuration_ReturnValue = (float)CallFunc_GetPotionDuration_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_K2_SetTimer_ReturnValue = (FTimerHandle)CallFunc_K2_SetTimer_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::Set_Item_Panel_Visibility(bool FoundItem, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsUnlocked_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.Set Item Panel Visibility"));
    struct Params_Set_Item_Panel_Visibility {
        bool FoundItem; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        FName CallFunc_Array_Get_Item; // 0x10
        ESlateVisibility K2Node_Select_Default; // 0x18
        bool CallFunc_IsUnlocked_ReturnValue; // 0x19
        char pad_1a[0x2];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x20
        bool CallFunc_BooleanOR_ReturnValue; // 0x21
    }; // Size: 0x22
    Params_Set_Item_Panel_Visibility params{};
    params.FoundItem = (bool)FoundItem;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::SetItemCount(FName ItemName, int32_t ItemCount, bool CallFunc_NotEqual_NameName_ReturnValue, int32_t CallFunc_GetCount_ReturnValue) {}
void UUI_BP_QuickItemHUD_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::SetItem(FName ItemName, FName IconName, int32_t ItemCount, bool CallFunc_EqualEqual_NameName_ReturnValue, FName Temp_name_Variable, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, FName K2Node_Select_Default) {}
void UUI_BP_QuickItemHUD_C::WheelItemSelected(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.WheelItemSelected"));
    struct Params_WheelItemSelected {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_WheelItemSelected params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void UUI_BP_QuickItemHUD_C::WheelItemUnlocked(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.WheelItemUnlocked"));
    struct Params_WheelItemUnlocked {
        UObject* Caller; // 0x0
        FLockManagerLock Lock; // 0x8
    }; // Size: 0x14
    Params_WheelItemUnlocked params{};
    params.Caller = (UObject*)Caller;
    params.Lock = (FLockManagerLock)Lock;
    ProcessEvent(func, &params);
    Lock = params.Lock;
}
void UUI_BP_QuickItemHUD_C::ItemIconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ItemIconLoaded"));
    struct Params_ItemIconLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_ItemIconLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::QuickItemUsed(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.QuickItemUsed"));
    struct Params_QuickItemUsed {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_QuickItemUsed params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void UUI_BP_QuickItemHUD_C::ShowButtonGraphicsFlagChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.ShowButtonGraphicsFlagChanged"));
    struct Params_ShowButtonGraphicsFlagChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_ShowButtonGraphicsFlagChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::PlayerPlantCountChanged(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.PlayerPlantCountChanged"));
    struct Params_PlayerPlantCountChanged {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_PlayerPlantCountChanged params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::PostLoadPlayerSpawn() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.PostLoadPlayerSpawn"));
    struct Params_PostLoadPlayerSpawn {
    }; // Size: 0x0
    Params_PostLoadPlayerSpawn params{};
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::RestartChallenge(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.RestartChallenge"));
    struct Params_RestartChallenge {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RestartChallenge params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::OnFocusPotionExpired__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.OnFocusPotionExpired__DelegateSignature"));
    struct Params_OnFocusPotionExpired__DelegateSignature {
    }; // Size: 0x0
    Params_OnFocusPotionExpired__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_QuickItemHUD_C::OnFocusPotionApplied__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickItemHUD.UI_BP_QuickItemHUD_C.OnFocusPotionApplied__DelegateSignature"));
    struct Params_OnFocusPotionApplied__DelegateSignature {
    }; // Size: 0x0
    Params_OnFocusPotionApplied__DelegateSignature params{};
    ProcessEvent(func, &params);
}
