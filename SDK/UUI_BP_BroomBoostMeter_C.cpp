#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_BroomBoostMeter_C.hpp"
#include "UUI_BP_BroomBoostSection_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_BroomBoostMeter_C* UUI_BP_BroomBoostMeter_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C");
    return (UUI_BP_BroomBoostMeter_C*)res;
}
void UUI_BP_BroomBoostMeter_C::ToggleCloseToGroundEffect(bool ShouldShow, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.ToggleCloseToGroundEffect"));
    struct Params_ToggleCloseToGroundEffect {
        bool ShouldShow; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ToggleCloseToGroundEffect params{};
    params.ShouldShow = (bool)ShouldShow;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostMeter_C::BoostInputChanged(bool BoostHeld, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.BoostInputChanged"));
    struct Params_BoostInputChanged {
        bool BoostHeld; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1
        bool CallFunc_BooleanAND_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BoostInputChanged params{};
    params.BoostHeld = (bool)BoostHeld;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostMeter_C::ToggleBoostingEffect(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.ToggleBoostingEffect"));
    struct Params_ToggleBoostingEffect {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ToggleBoostingEffect params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostMeter_C::UpdateMeter(float BoostPercent, bool IsInTurbo, int32_t NumMeters, bool CallFunc_Not_PreBool_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, int32_t CallFunc_GetNumUpgrades_Upgrades, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.UpdateMeter"));
    struct Params_UpdateMeter {
        float BoostPercent; // 0x0
        bool IsInTurbo; // 0x4
        char pad_5[0x3];
        int32_t NumMeters; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue; // 0xc
        char pad_d[0x3];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x10
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x18
        int32_t CallFunc_GetNumUpgrades_Upgrades; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x24
    }; // Size: 0x28
    Params_UpdateMeter params{};
    params.BoostPercent = (float)BoostPercent;
    params.IsInTurbo = (bool)IsInTurbo;
    params.NumMeters = (int32_t)NumMeters;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.CallFunc_GetNumUpgrades_Upgrades = (int32_t)CallFunc_GetNumUpgrades_Upgrades;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostMeter_C::SetVisibleSegments(int32_t Upgrades, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, UUI_BP_BroomBoostSection_C* CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.SetVisibleSegments"));
    struct Params_SetVisibleSegments {
        int32_t Upgrades; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x4
        ESlateVisibility Temp_byte_Variable_1; // 0x5
        char pad_6[0x2];
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x14
        bool Temp_bool_Variable; // 0x18
        char pad_19[0x7];
        UUI_BP_BroomBoostSection_C* CallFunc_Array_Get_Item; // 0x20
        ESlateVisibility K2Node_Select_Default; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x2c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_SetVisibleSegments params{};
    params.Upgrades = (int32_t)Upgrades;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Array_Get_Item = (UUI_BP_BroomBoostSection_C*)CallFunc_Array_Get_Item;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostMeter_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostMeter_C::GetNumUpgrades(int32_t& Upgrades, FName CallFunc_GetLockName_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, FName CallFunc_GetLockName_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue_1, FName CallFunc_GetLockName_ReturnValue_2, bool CallFunc_IsUnlocked_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.GetNumUpgrades"));
    struct Params_GetNumUpgrades {
        int32_t Upgrades; // 0x0
        FName CallFunc_GetLockName_ReturnValue; // 0x4
        bool CallFunc_IsUnlocked_ReturnValue; // 0xc
        char pad_d[0x3];
        FName CallFunc_GetLockName_ReturnValue_1; // 0x10
        bool CallFunc_IsUnlocked_ReturnValue_1; // 0x18
        char pad_19[0x3];
        FName CallFunc_GetLockName_ReturnValue_2; // 0x1c
        bool CallFunc_IsUnlocked_ReturnValue_2; // 0x24
    }; // Size: 0x25
    Params_GetNumUpgrades params{};
    params.Upgrades = (int32_t)Upgrades;
    params.CallFunc_GetLockName_ReturnValue = (FName)CallFunc_GetLockName_ReturnValue;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_GetLockName_ReturnValue_1 = (FName)CallFunc_GetLockName_ReturnValue_1;
    params.CallFunc_IsUnlocked_ReturnValue_1 = (bool)CallFunc_IsUnlocked_ReturnValue_1;
    params.CallFunc_GetLockName_ReturnValue_2 = (FName)CallFunc_GetLockName_ReturnValue_2;
    params.CallFunc_IsUnlocked_ReturnValue_2 = (bool)CallFunc_IsUnlocked_ReturnValue_2;
    ProcessEvent(func, &params);
    Upgrades = params.Upgrades;
}
void UUI_BP_BroomBoostMeter_C::SyncUpgradeSegments() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.SyncUpgradeSegments"));
    struct Params_SyncUpgradeSegments {
    }; // Size: 0x0
    Params_SyncUpgradeSegments params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostMeter_C::ExecuteUbergraph_UI_BP_BroomBoostMeter(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32_t CallFunc_GetNumUpgrades_Upgrades, int32_t CallFunc_GetNumUpgrades_Upgrades_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostMeter.UI_BP_BroomBoostMeter_C.ExecuteUbergraph_UI_BP_BroomBoostMeter"));
    struct Params_ExecuteUbergraph_UI_BP_BroomBoostMeter {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x8
        int32_t CallFunc_GetNumUpgrades_Upgrades; // 0x10
        int32_t CallFunc_GetNumUpgrades_Upgrades_1; // 0x14
    }; // Size: 0x18
    Params_ExecuteUbergraph_UI_BP_BroomBoostMeter params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_GetNumUpgrades_Upgrades = (int32_t)CallFunc_GetNumUpgrades_Upgrades;
    params.CallFunc_GetNumUpgrades_Upgrades_1 = (int32_t)CallFunc_GetNumUpgrades_Upgrades_1;
    ProcessEvent(func, &params);
}
