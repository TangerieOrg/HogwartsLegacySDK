#include "FDuelTechnique_UIData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UDuelTechniquesHUDBase.hpp"
#include "UFunction.hpp"
#include "UInvalidationBox.hpp"
#include "UUI_BP_DuelTechnique_Item_C.hpp"
#include "UUI_BP_DuelTechniques_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_DuelTechniques_C::FindTechnique(FName TechniqueID, UUI_BP_DuelTechnique_Item_C*& TechniqueItem, UUI_BP_DuelTechnique_Item_C* CurItem, FName CallFunc_GetTechniqueID_ID, bool CallFunc_EqualEqual_NameName_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UUI_BP_DuelTechnique_Item_C* K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.FindTechnique"));
    struct Params_FindTechnique {
        FName TechniqueID; // 0x0
        UUI_BP_DuelTechnique_Item_C* TechniqueItem; // 0x8
        UUI_BP_DuelTechnique_Item_C* CurItem; // 0x10
        FName CallFunc_GetTechniqueID_ID; // 0x18
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x20
        char pad_21[0x3];
        int32_t Temp_int_Variable; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x28
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0x2c
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x30
        char pad_34[0x4];
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x38
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x40
        char pad_41[0x7];
        UUI_BP_DuelTechnique_Item_C* K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item; // 0x48
        bool K2Node_DynamicCast_bSuccess; // 0x50
    }; // Size: 0x51
    Params_FindTechnique params{};
    params.TechniqueID = (FName)TechniqueID;
    params.TechniqueItem = (UUI_BP_DuelTechnique_Item_C*)TechniqueItem;
    params.CurItem = (UUI_BP_DuelTechnique_Item_C*)CurItem;
    params.CallFunc_GetTechniqueID_ID = (FName)CallFunc_GetTechniqueID_ID;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item = (UUI_BP_DuelTechnique_Item_C*)K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    TechniqueItem = params.TechniqueItem;
}
UUI_BP_DuelTechniques_C* UUI_BP_DuelTechniques_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C");
    return (UUI_BP_DuelTechniques_C*)res;
}
void UUI_BP_DuelTechniques_C::SequenceEvent__ENTRYPOINTUI_BP_DuelTechniques_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.SequenceEvent__ENTRYPOINTUI_BP_DuelTechniques_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_DuelTechniques_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_DuelTechniques_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechniques_C::ClearTechniques() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.ClearTechniques"));
    struct Params_ClearTechniques {
    }; // Size: 0x0
    Params_ClearTechniques params{};
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechniques_C::ExecuteUbergraph_UI_BP_DuelTechniques(int32_t EntryPoint, FName K2Node_Event_TechniqueID_3, int32_t K2Node_Event_newValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUI_BP_DuelTechnique_Item_C* CallFunc_FindTechnique_TechniqueItem, TArray<FDuelTechnique_UIData>& K2Node_Event_TechniqueUIData, bool CallFunc_IsValid_ReturnValue, FName K2Node_Event_TechniqueID_2, bool K2Node_Event_IsNew_1, UUI_BP_DuelTechnique_Item_C* CallFunc_FindTechnique_TechniqueItem_1, bool CallFunc_IsValid_ReturnValue_1, FName K2Node_Event_TechniqueID_1) {}
void UUI_BP_DuelTechniques_C::UpdateTechnique(FName TechniqueID, int32_t NewValue, UUI_BP_DuelTechnique_Item_C* CurItem, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UUI_BP_DuelTechnique_Item_C* K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, FName CallFunc_GetTechniqueID_ID, bool CallFunc_EqualEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.UpdateTechnique"));
    struct Params_UpdateTechnique {
        FName TechniqueID; // 0x0
        int32_t NewValue; // 0x8
        char pad_c[0x4];
        UUI_BP_DuelTechnique_Item_C* CurItem; // 0x10
        bool Temp_bool_Variable; // 0x18
        bool CallFunc_Not_PreBool_ReturnValue; // 0x19
        char pad_1a[0x2];
        int32_t Temp_int_Variable; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x20
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0x24
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x28
        char pad_2c[0x4];
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x30
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x38
        char pad_39[0x7];
        UUI_BP_DuelTechnique_Item_C* K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item; // 0x40
        bool K2Node_DynamicCast_bSuccess; // 0x48
        bool CallFunc_BooleanAND_ReturnValue; // 0x49
        char pad_4a[0x2];
        FName CallFunc_GetTechniqueID_ID; // 0x4c
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x54
    }; // Size: 0x55
    Params_UpdateTechnique params{};
    params.TechniqueID = (FName)TechniqueID;
    params.NewValue = (int32_t)NewValue;
    params.CurItem = (UUI_BP_DuelTechnique_Item_C*)CurItem;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item = (UUI_BP_DuelTechnique_Item_C*)K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetTechniqueID_ID = (FName)CallFunc_GetTechniqueID_ID;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechniques_C::Add_Duel_Techniques(TArray<FDuelTechnique_UIData>& TechniqueData, UUI_BP_DuelTechnique_Item_C* TechniqueItem, FDuelTechnique_UIData CurTechnique, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, FDuelTechnique_UIData CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_DuelTechnique_Item_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.Add Duel Techniques"));
    struct Params_Add_Duel_Techniques {
        TArray<FDuelTechnique_UIData> TechniqueData; // 0x0
        UUI_BP_DuelTechnique_Item_C* TechniqueItem; // 0x10
        FDuelTechnique_UIData CurTechnique; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x38
        int32_t Temp_int_Array_Index_Variable; // 0x3c
        int32_t Temp_int_Loop_Counter_Variable; // 0x40
        char pad_44[0x4];
        FDuelTechnique_UIData CallFunc_Array_Get_Item; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue; // 0x68
        char pad_69[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x6c
        UUI_BP_DuelTechnique_Item_C* CallFunc_Create_ReturnValue; // 0x70
        FMargin K2Node_MakeStruct_Margin; // 0x78
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x88
        bool CallFunc_Not_PreBool_ReturnValue; // 0x90
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x91
        bool CallFunc_BooleanAND_ReturnValue; // 0x92
    }; // Size: 0x93
    Params_Add_Duel_Techniques params{};
    params.TechniqueData = (TArray<FDuelTechnique_UIData>)TechniqueData;
    params.TechniqueItem = (UUI_BP_DuelTechnique_Item_C*)TechniqueItem;
    params.CurTechnique = (FDuelTechnique_UIData)CurTechnique;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (FDuelTechnique_UIData)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_DuelTechnique_Item_C*)CallFunc_Create_ReturnValue;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    TechniqueData = params.TechniqueData;
}
void UUI_BP_DuelTechniques_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechniques_C::OnFadeDuelTechniquesFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnFadeDuelTechniquesFinished"));
    struct Params_OnFadeDuelTechniquesFinished {
    }; // Size: 0x0
    Params_OnFadeDuelTechniquesFinished params{};
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechniques_C::OnDuelTechniqueUpdatedByID0(FName TechniqueID, int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniqueUpdatedByID"));
    struct Params_OnDuelTechniqueUpdatedByID {
        FName TechniqueID; // 0x0
        int32_t NewValue; // 0x8
    }; // Size: 0xc
    Params_OnDuelTechniqueUpdatedByID params{};
    params.TechniqueID = (FName)TechniqueID;
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechniques_C::OnDuelTechniquesInitialized0(TArray<FDuelTechnique_UIData>& TechniqueUIData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniquesInitialized"));
    struct Params_OnDuelTechniquesInitialized {
        TArray<FDuelTechnique_UIData> TechniqueUIData; // 0x0
    }; // Size: 0x10
    Params_OnDuelTechniquesInitialized params{};
    params.TechniqueUIData = (TArray<FDuelTechnique_UIData>)TechniqueUIData;
    ProcessEvent(func, &params);
    TechniqueUIData = params.TechniqueUIData;
}
void UUI_BP_DuelTechniques_C::OnDuelTechniqueProgressCompletedByID0(FName TechniqueID, bool IsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniqueProgressCompletedByID"));
    struct Params_OnDuelTechniqueProgressCompletedByID {
        FName TechniqueID; // 0x0
        bool IsNew; // 0x8
    }; // Size: 0x9
    Params_OnDuelTechniqueProgressCompletedByID params{};
    params.TechniqueID = (FName)TechniqueID;
    params.IsNew = (bool)IsNew;
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechniques_C::OnTimedTechniqueUpdated0(FName TechniqueID) {}
void UUI_BP_DuelTechniques_C::OnDuelTechniqueProgressFailedByID0(FName TechniqueID, bool IsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniqueProgressFailedByID"));
    struct Params_OnDuelTechniqueProgressFailedByID {
        FName TechniqueID; // 0x0
        bool IsNew; // 0x8
    }; // Size: 0x9
    Params_OnDuelTechniqueProgressFailedByID params{};
    params.TechniqueID = (FName)TechniqueID;
    params.IsNew = (bool)IsNew;
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechniques_C::OnDuelTechniquesDone0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniquesDone"));
    struct Params_OnDuelTechniquesDone {
    }; // Size: 0x0
    Params_OnDuelTechniquesDone params{};
    ProcessEvent(func, &params);
}
