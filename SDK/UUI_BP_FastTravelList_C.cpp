#include "APlayerController.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFastTravelList.hpp"
#include "UFastTravelManager.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_FastTravelButton_C.hpp"
#include "UUI_BP_FastTravelList_C.hpp"
#include "UUI_BP_SimpleScrollBox_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FastTravelList_C::PopulateLocationList(TArray<FString>& ListArray, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, UFastTravelManager* CallFunc_Get_ReturnValue, bool CallFunc_IsFastTravelUnlockedForLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin) {}
void UUI_BP_FastTravelList_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
UUI_BP_FastTravelList_C* UUI_BP_FastTravelList_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C");
    return (UUI_BP_FastTravelList_C*)res;
}
void UUI_BP_FastTravelList_C::AddList0(TArray<FString>& ItemList) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.AddList"));
    struct Params_AddList {
        TArray<FString> ItemList; // 0x0
    }; // Size: 0x10
    Params_AddList params{};
    params.ItemList = (TArray<FString>)ItemList;
    ProcessEvent(func, &params);
    ItemList = params.ItemList;
}
TArray<FString> UUI_BP_FastTravelList_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_FastTravelList_C::ClearListMenuItems0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.ClearListMenuItems"));
    struct Params_ClearListMenuItems {
    }; // Size: 0x0
    Params_ClearListMenuItems params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::ClearLocationList() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.ClearLocationList"));
    struct Params_ClearLocationList {
    }; // Size: 0x0
    Params_ClearLocationList params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::OnLocationUnhovered(UUI_BP_FastTravelButton_C* Button, APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePositionScaledByDPI_LocationX, float CallFunc_GetMousePositionScaledByDPI_LocationY, bool CallFunc_GetMousePositionScaledByDPI_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnLocationUnhovered"));
    struct Params_OnLocationUnhovered {
        UUI_BP_FastTravelButton_C* Button; // 0x0
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        float CallFunc_GetMousePositionScaledByDPI_LocationX; // 0x10
        float CallFunc_GetMousePositionScaledByDPI_LocationY; // 0x14
        bool CallFunc_GetMousePositionScaledByDPI_ReturnValue; // 0x18
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_OnLocationUnhovered params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetMousePositionScaledByDPI_LocationX = (float)CallFunc_GetMousePositionScaledByDPI_LocationX;
    params.CallFunc_GetMousePositionScaledByDPI_LocationY = (float)CallFunc_GetMousePositionScaledByDPI_LocationY;
    params.CallFunc_GetMousePositionScaledByDPI_ReturnValue = (bool)CallFunc_GetMousePositionScaledByDPI_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::OnLocationHovered(UUI_BP_FastTravelButton_C* Button, APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePositionScaledByDPI_LocationX, float CallFunc_GetMousePositionScaledByDPI_LocationY, bool CallFunc_GetMousePositionScaledByDPI_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnLocationHovered"));
    struct Params_OnLocationHovered {
        UUI_BP_FastTravelButton_C* Button; // 0x0
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        float CallFunc_GetMousePositionScaledByDPI_LocationX; // 0x10
        float CallFunc_GetMousePositionScaledByDPI_LocationY; // 0x14
        bool CallFunc_GetMousePositionScaledByDPI_ReturnValue; // 0x18
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_OnLocationHovered params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetMousePositionScaledByDPI_LocationX = (float)CallFunc_GetMousePositionScaledByDPI_LocationX;
    params.CallFunc_GetMousePositionScaledByDPI_LocationY = (float)CallFunc_GetMousePositionScaledByDPI_LocationY;
    params.CallFunc_GetMousePositionScaledByDPI_ReturnValue = (bool)CallFunc_GetMousePositionScaledByDPI_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::OnLocationClicked(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnLocationClicked"));
    struct Params_OnLocationClicked {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnLocationClicked params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::SetListTitle0(FString Title) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.SetListTitle"));
    struct Params_SetListTitle {
        FString Title; // 0x0
    }; // Size: 0x10
    Params_SetListTitle params{};
    params.Title = (FString)Title;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::ClearHighlightListMenuItem0(bool bCallUnHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.ClearHighlightListMenuItem"));
    struct Params_ClearHighlightListMenuItem {
        bool bCallUnHovered; // 0x0
    }; // Size: 0x1
    Params_ClearHighlightListMenuItem params{};
    params.bCallUnHovered = (bool)bCallUnHovered;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::DisableItem0(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.DisableItem"));
    struct Params_DisableItem {
        FString ItemName; // 0x0
    }; // Size: 0x10
    Params_DisableItem params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::HighlightListMenuItem0(FString ItemName, bool bCallUnHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.HighlightListMenuItem"));
    struct Params_HighlightListMenuItem {
        FString ItemName; // 0x0
        bool bCallUnHovered; // 0x10
    }; // Size: 0x11
    Params_HighlightListMenuItem params{};
    params.ItemName = (FString)ItemName;
    params.bCallUnHovered = (bool)bCallUnHovered;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::AddListMenuItem0(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.AddListMenuItem"));
    struct Params_AddListMenuItem {
        FString ItemName; // 0x0
    }; // Size: 0x10
    Params_AddListMenuItem params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::ShowEvent0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.ShowEvent"));
    struct Params_ShowEvent {
    }; // Size: 0x0
    Params_ShowEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::HideEvent0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.HideEvent"));
    struct Params_HideEvent {
    }; // Size: 0x0
    Params_HideEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::EnableItem0(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.EnableItem"));
    struct Params_EnableItem {
        FString ItemName; // 0x0
    }; // Size: 0x10
    Params_EnableItem params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::ExecuteUbergraph_UI_BP_FastTravelList(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, FString CallFunc_Array_Get_Item, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FString CallFunc_Array_Get_Item_1, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, FString K2Node_Event_Title, bool K2Node_Event_bCallUnHovered_1, FString K2Node_Event_ItemName_3, bool K2Node_Event_bCallUnHovered, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, FString K2Node_Event_ItemName_2, TArray<FString>& K2Node_Event_ItemList, bool CallFunc_IsValid_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_2, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, UUI_BP_FastTravelButton_C* K2Node_DynamicCast_AsUI_BP_Fast_Travel_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FString K2Node_Event_ItemName_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, UWidget* CallFunc_GetChildAt_ReturnValue_1, FString K2Node_Event_ItemName, UWidget* CallFunc_GetChildAt_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.ExecuteUbergraph_UI_BP_FastTravelList"));
    struct Params_ExecuteUbergraph_UI_BP_FastTravelList {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0xc
        FString CallFunc_Array_Get_Item; // 0x10
        bool Temp_bool_Variable; // 0x20
        bool CallFunc_Not_PreBool_ReturnValue; // 0x21
        char pad_22[0x2];
        int32_t Temp_int_Loop_Counter_Variable; // 0x24
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
        int32_t Temp_int_Array_Index_Variable_1; // 0x30
        char pad_34[0x4];
        FString CallFunc_Array_Get_Item_1; // 0x38
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x4c
        char pad_4d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x50
        char pad_54[0x4];
        FString K2Node_Event_Title; // 0x58
        bool K2Node_Event_bCallUnHovered_1; // 0x68
        char pad_69[0x7];
        FString K2Node_Event_ItemName_3; // 0x70
        bool K2Node_Event_bCallUnHovered; // 0x80
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x81
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x82
        char pad_83[0x5];
        FString K2Node_Event_ItemName_2; // 0x88
        TArray<FString> K2Node_Event_ItemList; // 0x98
        bool CallFunc_IsValid_ReturnValue; // 0xa8
        char pad_a9[0x3];
        int32_t Temp_int_Variable; // 0xac
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0xb0
        char pad_b4[0x4];
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0xb8
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0xc0
        char pad_c4[0x4];
        UUI_BP_FastTravelButton_C* K2Node_DynamicCast_AsUI_BP_Fast_Travel_Button; // 0xc8
        bool K2Node_DynamicCast_bSuccess; // 0xd0
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xd1
        bool CallFunc_BooleanAND_ReturnValue; // 0xd2
        bool CallFunc_IsValid_ReturnValue_1; // 0xd3
        char pad_d4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0xd8
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0xe0
        char pad_e1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0xe8
        FString K2Node_Event_ItemName_1; // 0xf0
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x100
        char pad_101[0x7];
        UWidget* CallFunc_GetChildAt_ReturnValue_1; // 0x108
        FString K2Node_Event_ItemName; // 0x110
        UWidget* CallFunc_GetChildAt_ReturnValue_2; // 0x120
        bool CallFunc_EqualEqual_StrStr_ReturnValue_2; // 0x128
    }; // Size: 0x129
    Params_ExecuteUbergraph_UI_BP_FastTravelList params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item_1 = (FString)CallFunc_Array_Get_Item_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.K2Node_Event_Title = (FString)K2Node_Event_Title;
    params.K2Node_Event_bCallUnHovered_1 = (bool)K2Node_Event_bCallUnHovered_1;
    params.K2Node_Event_ItemName_3 = (FString)K2Node_Event_ItemName_3;
    params.K2Node_Event_bCallUnHovered = (bool)K2Node_Event_bCallUnHovered;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.K2Node_Event_ItemName_2 = (FString)K2Node_Event_ItemName_2;
    params.K2Node_Event_ItemList = (TArray<FString>)K2Node_Event_ItemList;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Fast_Travel_Button = (UUI_BP_FastTravelButton_C*)K2Node_DynamicCast_AsUI_BP_Fast_Travel_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_Event_ItemName_1 = (FString)K2Node_Event_ItemName_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_GetChildAt_ReturnValue_1 = (UWidget*)CallFunc_GetChildAt_ReturnValue_1;
    params.K2Node_Event_ItemName = (FString)K2Node_Event_ItemName;
    params.CallFunc_GetChildAt_ReturnValue_2 = (UWidget*)CallFunc_GetChildAt_ReturnValue_2;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_2 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_2;
    ProcessEvent(func, &params);
    K2Node_Event_ItemList = params.K2Node_Event_ItemList;
}
void UUI_BP_FastTravelList_C::OnFastTravelButtonUnhovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnFastTravelButtonUnhovered__DelegateSignature"));
    struct Params_OnFastTravelButtonUnhovered__DelegateSignature {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnFastTravelButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelList_C::OnFastTravelButtonHovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelList.UI_BP_FastTravelList_C.OnFastTravelButtonHovered__DelegateSignature"));
    struct Params_OnFastTravelButtonHovered__DelegateSignature {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnFastTravelButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
