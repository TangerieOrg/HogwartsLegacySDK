#include "APawn.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UButton.hpp"
#include "UCategoryNavBarWidget.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UInputComponent.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_FG_CategoryBarButton_C.hpp"
#include "UUI_BP_FG_CategoryNavBar_C.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
#include "UWidget.hpp"
void UUI_BP_FG_CategoryNavBar_C::SetCategoryNewIndicator(bool IsNew, int32_t CategoryIndex, UUI_BP_FG_CategoryBarButton_C* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.SetCategoryNewIndicator"));
    struct Params_SetCategoryNewIndicator {
        bool IsNew; // 0x0
        char pad_1[0x3];
        int32_t CategoryIndex; // 0x4
        UUI_BP_FG_CategoryBarButton_C* CallFunc_Array_Get_Item; // 0x8
    }; // Size: 0x10
    Params_SetCategoryNewIndicator params{};
    params.IsNew = (bool)IsNew;
    params.CategoryIndex = (int32_t)CategoryIndex;
    params.CallFunc_Array_Get_Item = (UUI_BP_FG_CategoryBarButton_C*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
UUI_BP_FG_CategoryNavBar_C* UUI_BP_FG_CategoryNavBar_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C");
    return (UUI_BP_FG_CategoryNavBar_C*)res;
}
void UUI_BP_FG_CategoryNavBar_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_FG_CategoryNavBar_C::GoToNextCategory(bool Temp_bool_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Array_LastIndex_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_GoToCategory_CategoryChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToNextCategory"));
    struct Params_GoToNextCategory {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Variable; // 0x4
        int32_t CallFunc_Array_LastIndex_ReturnValue; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t K2Node_Select_Default; // 0x14
        bool CallFunc_GoToCategory_CategoryChanged; // 0x18
    }; // Size: 0x19
    Params_GoToNextCategory params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Array_LastIndex_ReturnValue = (int32_t)CallFunc_Array_LastIndex_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.CallFunc_GoToCategory_CategoryChanged = (bool)CallFunc_GoToCategory_CategoryChanged;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::GetButton(int32_t ButtonIndex, UIconButtonWidget*& Button, UUI_BP_FG_CategoryBarButton_C* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GetButton"));
    struct Params_GetButton {
        int32_t ButtonIndex; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* Button; // 0x8
        UUI_BP_FG_CategoryBarButton_C* CallFunc_Array_Get_Item; // 0x10
    }; // Size: 0x18
    Params_GetButton params{};
    params.ButtonIndex = (int32_t)ButtonIndex;
    params.Button = (UIconButtonWidget*)Button;
    params.CallFunc_Array_Get_Item = (UUI_BP_FG_CategoryBarButton_C*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
    Button = params.Button;
}
UIconButtonWidget* UUI_BP_FG_CategoryNavBar_C::GetButtonByIndex0(int32_t Index, UIconButtonWidget* CallFunc_GetButton_Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GetButtonByIndex"));
    struct Params_GetButtonByIndex {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* ReturnValue; // 0x8
        UIconButtonWidget* CallFunc_GetButton_Button; // 0x10
    }; // Size: 0x18
    Params_GetButtonByIndex params{};
    params.Index = (int32_t)Index;
    params.CallFunc_GetButton_Button = (UIconButtonWidget*)CallFunc_GetButton_Button;
    ProcessEvent(func, &params);
    return (UIconButtonWidget*)params.ReturnValue;
}
int32_t UUI_BP_FG_CategoryNavBar_C::GetIndexOfButton0(UIconButtonWidget* Button, int32_t CallFunc_GetChildIndex_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GetIndexOfButton"));
    struct Params_GetIndexOfButton {
        UIconButtonWidget* Button; // 0x0
        int32_t ReturnValue; // 0x8
        int32_t CallFunc_GetChildIndex_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetIndexOfButton params{};
    params.Button = (UIconButtonWidget*)Button;
    params.CallFunc_GetChildIndex_ReturnValue = (int32_t)CallFunc_GetChildIndex_ReturnValue;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UUI_BP_FG_CategoryNavBar_C::GoToPrevCategory(bool Temp_bool_Variable, int32_t CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_GoToCategory_CategoryChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToPrevCategory"));
    struct Params_GoToPrevCategory {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_Array_LastIndex_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0xc
        int32_t K2Node_Select_Default; // 0x10
        bool CallFunc_GoToCategory_CategoryChanged; // 0x14
    }; // Size: 0x15
    Params_GoToPrevCategory params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Array_LastIndex_ReturnValue = (int32_t)CallFunc_Array_LastIndex_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.CallFunc_GoToCategory_CategoryChanged = (bool)CallFunc_GoToCategory_CategoryChanged;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::InitCategoryButtons(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_SetState_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.InitCategoryButtons"));
    struct Params_InitCategoryButtons {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xc
        char pad_d[0x3];
        UIconButtonWidget* CallFunc_Array_Get_Item; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        bool CallFunc_SetState_ReturnValue; // 0x1c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x1d
    }; // Size: 0x1e
    Params_InitCategoryButtons params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UIconButtonWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_SetState_ReturnValue = (bool)CallFunc_SetState_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::GoToCategory(int32_t NewCategoryIndex, bool& CategoryChanged, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UIconButtonWidget* K2Node_DynamicCast_AsIcon_Button_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetState_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, UIconButtonWidget* K2Node_DynamicCast_AsIcon_Button_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetState_ReturnValue_1, int32_t CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToCategory"));
    struct Params_GoToCategory {
        int32_t NewCategoryIndex; // 0x0
        bool CategoryChanged; // 0x4
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x5
        char pad_6[0x2];
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x8
        UIconButtonWidget* K2Node_DynamicCast_AsIcon_Button_Widget; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_SetState_ReturnValue; // 0x19
        char pad_1a[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x1c
        UWidget* CallFunc_GetChildAt_ReturnValue_1; // 0x20
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x28
        char pad_29[0x7];
        UIconButtonWidget* K2Node_DynamicCast_AsIcon_Button_Widget_1; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_SetState_ReturnValue_1; // 0x39
        char pad_3a[0x2];
        int32_t CallFunc_Array_LastIndex_ReturnValue; // 0x3c
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x40
        bool CallFunc_BooleanAND_ReturnValue; // 0x41
    }; // Size: 0x42
    Params_GoToCategory params{};
    params.NewCategoryIndex = (int32_t)NewCategoryIndex;
    params.CategoryChanged = (bool)CategoryChanged;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.K2Node_DynamicCast_AsIcon_Button_Widget = (UIconButtonWidget*)K2Node_DynamicCast_AsIcon_Button_Widget;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_SetState_ReturnValue = (bool)CallFunc_SetState_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_GetChildAt_ReturnValue_1 = (UWidget*)CallFunc_GetChildAt_ReturnValue_1;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsIcon_Button_Widget_1 = (UIconButtonWidget*)K2Node_DynamicCast_AsIcon_Button_Widget_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_SetState_ReturnValue_1 = (bool)CallFunc_SetState_ReturnValue_1;
    params.CallFunc_Array_LastIndex_ReturnValue = (int32_t)CallFunc_Array_LastIndex_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    CategoryChanged = params.CategoryChanged;
}
void UUI_BP_FG_CategoryNavBar_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::I_SetCategoryNames(TArray<void*>& Categories) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.I_SetCategoryNames"));
    struct Params_I_SetCategoryNames {
        TArray<void*> Categories; // 0x0
    }; // Size: 0x10
    Params_I_SetCategoryNames params{};
    params.Categories = (TArray<void*>)Categories;
    ProcessEvent(func, &params);
    Categories = params.Categories;
}
void UUI_BP_FG_CategoryNavBar_C::BndEvt__UI_BP_FG_CategoryNavBar_NavBarDownButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.BndEvt__UI_BP_FG_CategoryNavBar_NavBarDownButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_CategoryNavBar_NavBarDownButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FG_CategoryNavBar_NavBarDownButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::GoToCategoryNext() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToCategoryNext"));
    struct Params_GoToCategoryNext {
    }; // Size: 0x0
    Params_GoToCategoryNext params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::ExecuteUbergraph_UI_BP_FG_CategoryNavBar(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, TArray<void*>& K2Node_Event_Categories, int32_t CallFunc_Array_Length_ReturnValue, int32_t K2Node_Event_Index, UUserWidget* K2Node_Event_NewOwner, UUserWidget* K2Node_Event_Parent, APawn* CallFunc_GetPlayerPawn_ReturnValue, UInputComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, FMargin K2Node_MakeStruct_Margin) {}
void UUI_BP_FG_CategoryNavBar_C::GoToCategoryPrev() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.GoToCategoryPrev"));
    struct Params_GoToCategoryPrev {
    }; // Size: 0x0
    Params_GoToCategoryPrev params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::SetCurCategoryIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.SetCurCategoryIndex"));
    struct Params_SetCurCategoryIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_SetCurCategoryIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.HoveredCategory__DelegateSignature"));
    struct Params_HoveredCategory__DelegateSignature {
        int32_t ButtonIndex; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* CategoryButton; // 0x8
    }; // Size: 0x10
    Params_HoveredCategory__DelegateSignature params{};
    params.ButtonIndex = (int32_t)ButtonIndex;
    params.CategoryButton = (UIconButtonWidget*)CategoryButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::NavBar_InitCategoryButtons() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.NavBar_InitCategoryButtons"));
    struct Params_NavBar_InitCategoryButtons {
    }; // Size: 0x0
    Params_NavBar_InitCategoryButtons params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::SetOwner(UUserWidget* NewOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.SetOwner"));
    struct Params_SetOwner {
        UUserWidget* NewOwner; // 0x0
    }; // Size: 0x8
    Params_SetOwner params{};
    params.NewOwner = (UUserWidget*)NewOwner;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::PopulateCategoryButtons() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.PopulateCategoryButtons"));
    struct Params_PopulateCategoryButtons {
    }; // Size: 0x0
    Params_PopulateCategoryButtons params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::OnHover0(UIconButtonWidget* hoveredButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.OnHover"));
    struct Params_OnHover {
        UIconButtonWidget* hoveredButton; // 0x0
    }; // Size: 0x8
    Params_OnHover params{};
    params.hoveredButton = (UIconButtonWidget*)hoveredButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::OnUnhover0(UIconButtonWidget* hoveredButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.OnUnhover"));
    struct Params_OnUnhover {
        UIconButtonWidget* hoveredButton; // 0x0
    }; // Size: 0x8
    Params_OnUnhover params{};
    params.hoveredButton = (UIconButtonWidget*)hoveredButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::OnClick0(int32_t SelectedCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.OnClick"));
    struct Params_OnClick {
        int32_t SelectedCategory; // 0x0
    }; // Size: 0x4
    Params_OnClick params{};
    params.SelectedCategory = (int32_t)SelectedCategory;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::BndEvt__UI_BP_FG_CategoryNavBar_NavBarUpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.BndEvt__UI_BP_FG_CategoryNavBar_NavBarUpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_CategoryNavBar_NavBarUpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FG_CategoryNavBar_NavBarUpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::RefreshCategoryNewCounts() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.RefreshCategoryNewCounts"));
    struct Params_RefreshCategoryNewCounts {
    }; // Size: 0x0
    Params_RefreshCategoryNewCounts params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::ChangedCategory__DelegateSignature(int32_t NewCategoryIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.ChangedCategory__DelegateSignature"));
    struct Params_ChangedCategory__DelegateSignature {
        int32_t NewCategoryIndex; // 0x0
    }; // Size: 0x4
    Params_ChangedCategory__DelegateSignature params{};
    params.NewCategoryIndex = (int32_t)NewCategoryIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryNavBar_C::UnhoveredCategory__DelegateSignature(int32_t Index, UIconButtonWidget* CategoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_FG_CategoryNavBar.UI_BP_FG_CategoryNavBar_C.UnhoveredCategory__DelegateSignature"));
    struct Params_UnhoveredCategory__DelegateSignature {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* CategoryButton; // 0x8
    }; // Size: 0x10
    Params_UnhoveredCategory__DelegateSignature params{};
    params.Index = (int32_t)Index;
    params.CategoryButton = (UIconButtonWidget*)CategoryButton;
    ProcessEvent(func, &params);
}
