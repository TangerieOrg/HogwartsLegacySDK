#include "ESlateVisibility.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UIndex_FG.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMenuCursorWidget.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_FG_ActionsButton_C.hpp"
#include "UUI_BP_FG_Index_C.hpp"
#include "UUI_BP_FieldGuideButton_Collections_C.hpp"
#include "UUI_BP_FieldGuideButton_Gear_C.hpp"
#include "UUI_BP_FieldGuideButton_Inventory_C.hpp"
#include "UUI_BP_FieldGuideButton_Map_C.hpp"
#include "UUI_BP_FieldGuideButton_Owlpost_C.hpp"
#include "UUI_BP_FieldGuideButton_Quests_C.hpp"
#include "UUI_BP_FieldGuideButton_Settings_C.hpp"
#include "UUI_BP_FieldGuideButton_Talents_C.hpp"
#include "UUI_BP_ParallaxWidget_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FG_Index_C::HideTooltip(UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue) {}
void UUI_BP_FG_Index_C::InventoryScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.InventoryScreenSelected__DelegateSignature"));
    struct Params_InventoryScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_InventoryScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::SetActionCompletionPct(float Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.SetActionCompletionPct"));
    struct Params_SetActionCompletionPct {
        float Percent; // 0x0
    }; // Size: 0x4
    Params_SetActionCompletionPct params{};
    params.Percent = (float)Percent;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::HideTutorialOverlay(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, int32_t CallFunc_GetZOrder_ReturnValue, UWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_GetZOrder_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.HideTutorialOverlay"));
    struct Params_HideTutorialOverlay {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x10
        int32_t CallFunc_GetZOrder_ReturnValue; // 0x18
        char pad_1c[0x4];
        UWidget* CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        char pad_2c[0x4];
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1; // 0x30
        bool CallFunc_Less_IntInt_ReturnValue; // 0x38
        char pad_39[0x3];
        int32_t CallFunc_GetZOrder_ReturnValue_1; // 0x3c
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x40
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x44
    }; // Size: 0x48
    Params_HideTutorialOverlay params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.CallFunc_GetZOrder_ReturnValue = (int32_t)CallFunc_GetZOrder_ReturnValue;
    params.CallFunc_Array_Get_Item = (UWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetZOrder_ReturnValue_1 = (int32_t)CallFunc_GetZOrder_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
UUI_BP_FG_Index_C* UUI_BP_FG_Index_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C");
    return (UUI_BP_FG_Index_C*)res;
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_20_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_20_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_20_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_20_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FG_Index_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_FG_Index_C::TutorialSaysHighlightChallenges(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.TutorialSaysHighlightChallenges"));
    struct Params_TutorialSaysHighlightChallenges {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_TutorialSaysHighlightChallenges params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::UpdateNewItemStatus() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.UpdateNewItemStatus"));
    struct Params_UpdateNewItemStatus {
    }; // Size: 0x0
    Params_UpdateNewItemStatus params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BringWidgetBelowOverlay(UWidget* Widget, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32_t CallFunc_GetZOrder_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, int32_t CallFunc_GetZOrder_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BringWidgetBelowOverlay"));
    struct Params_BringWidgetBelowOverlay {
        UWidget* Widget; // 0x0
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x8
        ESlateVisibility CallFunc_GetVisibility_ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_GetZOrder_ReturnValue; // 0x14
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x18
        bool CallFunc_Array_RemoveItem_ReturnValue; // 0x19
        char pad_1a[0x6];
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1; // 0x20
        int32_t CallFunc_GetZOrder_ReturnValue_1; // 0x28
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x2c
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x30
    }; // Size: 0x34
    Params_BringWidgetBelowOverlay params{};
    params.Widget = (UWidget*)Widget;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.CallFunc_GetVisibility_ReturnValue = (ESlateVisibility)CallFunc_GetVisibility_ReturnValue;
    params.CallFunc_GetZOrder_ReturnValue = (int32_t)CallFunc_GetZOrder_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Array_RemoveItem_ReturnValue = (bool)CallFunc_Array_RemoveItem_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_1;
    params.CallFunc_GetZOrder_ReturnValue_1 = (int32_t)CallFunc_GetZOrder_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_18_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_18_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_18_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_18_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::OnSetSchoolPct0(float OldPct, float NewPct) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.OnSetSchoolPct"));
    struct Params_OnSetSchoolPct {
        float OldPct; // 0x0
        float NewPct; // 0x4
    }; // Size: 0x8
    Params_OnSetSchoolPct params{};
    params.OldPct = (float)OldPct;
    params.NewPct = (float)NewPct;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BringWidgetAboveOverlay(UWidget* Widget, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32_t CallFunc_GetZOrder_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, int32_t CallFunc_GetZOrder_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BringWidgetAboveOverlay"));
    struct Params_BringWidgetAboveOverlay {
        UWidget* Widget; // 0x0
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x8
        ESlateVisibility CallFunc_GetVisibility_ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_GetZOrder_ReturnValue; // 0x14
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x1c
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1; // 0x20
        int32_t CallFunc_GetZOrder_ReturnValue_1; // 0x28
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x30
    }; // Size: 0x34
    Params_BringWidgetAboveOverlay params{};
    params.Widget = (UWidget*)Widget;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.CallFunc_GetVisibility_ReturnValue = (ESlateVisibility)CallFunc_GetVisibility_ReturnValue;
    params.CallFunc_GetZOrder_ReturnValue = (int32_t)CallFunc_GetZOrder_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_1;
    params.CallFunc_GetZOrder_ReturnValue_1 = (int32_t)CallFunc_GetZOrder_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::ShowTutorialOverlay(ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.ShowTutorialOverlay"));
    struct Params_ShowTutorialOverlay {
        ESlateVisibility CallFunc_GetVisibility_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ShowTutorialOverlay params{};
    params.CallFunc_GetVisibility_ReturnValue = (ESlateVisibility)CallFunc_GetVisibility_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::ShowYearTooltip(int32_t Year, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue) {}
void UUI_BP_FG_Index_C::SetPlayerXPLevel(UExperienceManager* CallFunc_Get_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32_t CallFunc_GetExperiencePoints_ReturnValue, int32_t CallFunc_GetExperienceLevelStartPoints_ReturnValue, int32_t CallFunc_GetExperienceLevelEndPoints_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, UExperienceManager* CallFunc_Get_ReturnValue_1, int32_t CallFunc_GetExperienceLevel_ReturnValue) {}
void UUI_BP_FG_Index_C::SetHouseAssets(bool CallFunc_AsyncFindIconTexture2D_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool K2Node_SwitchString_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.SetHouseAssets"));
    struct Params_SetHouseAssets {
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x0
        char pad_1[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x10
        bool K2Node_SwitchString_CmpSuccess; // 0x20
    }; // Size: 0x21
    Params_SetHouseAssets params{};
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::OnGetAvailableAssignments0(FString DisplayText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.OnGetAvailableAssignments"));
    struct Params_OnGetAvailableAssignments {
        FString DisplayText; // 0x0
    }; // Size: 0x10
    Params_OnGetAvailableAssignments params{};
    params.DisplayText = (FString)DisplayText;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::OnSetPlayerLevel0(int32_t NewLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.OnSetPlayerLevel"));
    struct Params_OnSetPlayerLevel {
        int32_t NewLevel; // 0x0
    }; // Size: 0x4
    Params_OnSetPlayerLevel params{};
    params.NewLevel = (int32_t)NewLevel;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::OnSetActionsPct0(float OldPct, float NewPct) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.OnSetActionsPct"));
    struct Params_OnSetActionsPct {
        float OldPct; // 0x0
        float NewPct; // 0x4
    }; // Size: 0x8
    Params_OnSetActionsPct params{};
    params.OldPct = (float)OldPct;
    params.NewPct = (float)NewPct;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::SetPlayerLevelTutorialHighlight(bool ShowHighlight) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.SetPlayerLevelTutorialHighlight"));
    struct Params_SetPlayerLevelTutorialHighlight {
        bool ShowHighlight; // 0x0
    }; // Size: 0x1
    Params_SetPlayerLevelTutorialHighlight params{};
    params.ShowHighlight = (bool)ShowHighlight;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::GoToPage(TArray<FString>& DestinationStack) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.GoToPage"));
    struct Params_GoToPage {
        TArray<FString> DestinationStack; // 0x0
    }; // Size: 0x10
    Params_GoToPage params{};
    params.DestinationStack = (TArray<FString>)DestinationStack;
    ProcessEvent(func, &params);
    DestinationStack = params.DestinationStack;
}
void UUI_BP_FG_Index_C::SetSchoolProgressTutorialHighlight(bool ShowHighlight) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.SetSchoolProgressTutorialHighlight"));
    struct Params_SetSchoolProgressTutorialHighlight {
        bool ShowHighlight; // 0x0
    }; // Size: 0x1
    Params_SetSchoolProgressTutorialHighlight params{};
    params.ShowHighlight = (bool)ShowHighlight;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::ShowIndexIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.ShowIndexIntro"));
    struct Params_ShowIndexIntro {
    }; // Size: 0x0
    Params_ShowIndexIntro params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_19_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_19_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_19_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_19_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_16_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_16_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_16_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_16_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_17_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_17_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_17_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_17_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::QuestsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.QuestsScreenSelected__DelegateSignature"));
    struct Params_QuestsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_QuestsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_33_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_33_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_33_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_33_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_34_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_34_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_34_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_34_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_35_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_35_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_35_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_35_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::ExecuteUbergraph_UI_BP_FG_Index(int32_t EntryPoint, FLegendItemData K2Node_MakeStruct_LegendItemData, bool Temp_bool_Variable, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1, FString K2Node_Event_DisplayText, bool Temp_bool_Variable_1, int32_t K2Node_Event_NewLevel, float K2Node_Event_OldPct_1, float K2Node_Event_NewPct_1, float K2Node_Event_OldPct, float K2Node_Event_NewPct, TArray<FString>& K2Node_Event_DestinationStack, FLegendItemData K2Node_MakeStruct_LegendItemData_1, bool K2Node_CustomEvent_ShowHighlight_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_ShowHighlight, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue_1, bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue_2, UTutorialSystem* CallFunc_Get_ReturnValue_3, bool CallFunc_IsTutorialStepActiveByAlias_ReturnValue, bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {}
void UUI_BP_FG_Index_C::ActionsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.ActionsScreenSelected__DelegateSignature"));
    struct Params_ActionsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_ActionsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::OwlMailScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.OwlMailScreenSelected__DelegateSignature"));
    struct Params_OwlMailScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_OwlMailScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::CollectionsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.CollectionsScreenSelected__DelegateSignature"));
    struct Params_CollectionsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_CollectionsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::MapScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.MapScreenSelected__DelegateSignature"));
    struct Params_MapScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_MapScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::SettingsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.SettingsScreenSelected__DelegateSignature"));
    struct Params_SettingsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_SettingsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::TalentsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.TalentsScreenSelected__DelegateSignature"));
    struct Params_TalentsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_TalentsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_Index_C::GearScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FG_Index.UI_BP_FG_Index_C.GearScreenSelected__DelegateSignature"));
    struct Params_GearScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_GearScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
