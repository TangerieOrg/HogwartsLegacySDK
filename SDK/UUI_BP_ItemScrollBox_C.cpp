#include "EOrientation.hpp"
#include "FGeometry.hpp"
#include "FMargin.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UGridBackground.hpp"
#include "UIconButtonWidget.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UUI_BP_ItemScrollBox_C.hpp"
#include "UUI_BP_SimpleScrollBox_C.hpp"
#include "UUniformGridPanel.hpp"
#include "UUniformGridSlot.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
void UUI_BP_ItemScrollBox_C::ComputeSize(FVector2D& Size, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_11, FVector2D CallFunc_MakeVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ComputeSize"));
    struct Params_ComputeSize {
        FVector2D Size; // 0x0
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x8
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0xc
        float CallFunc_Add_FloatFloat_ReturnValue_2; // 0x10
        float CallFunc_Add_FloatFloat_ReturnValue_3; // 0x14
        float CallFunc_BreakVector2D_X; // 0x18
        float CallFunc_BreakVector2D_Y; // 0x1c
        float CallFunc_Add_FloatFloat_ReturnValue_4; // 0x20
        float CallFunc_Add_FloatFloat_ReturnValue_5; // 0x24
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x28
        float CallFunc_Add_FloatFloat_ReturnValue_6; // 0x2c
        float CallFunc_Multiply_IntFloat_ReturnValue_1; // 0x30
        float CallFunc_Add_FloatFloat_ReturnValue_7; // 0x34
        float CallFunc_Add_FloatFloat_ReturnValue_8; // 0x38
        float CallFunc_Add_FloatFloat_ReturnValue_9; // 0x3c
        float CallFunc_Add_FloatFloat_ReturnValue_10; // 0x40
        float CallFunc_Add_FloatFloat_ReturnValue_11; // 0x44
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x48
    }; // Size: 0x50
    Params_ComputeSize params{};
    params.Size = (FVector2D)Size;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_2 = (float)CallFunc_Add_FloatFloat_ReturnValue_2;
    params.CallFunc_Add_FloatFloat_ReturnValue_3 = (float)CallFunc_Add_FloatFloat_ReturnValue_3;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Add_FloatFloat_ReturnValue_4 = (float)CallFunc_Add_FloatFloat_ReturnValue_4;
    params.CallFunc_Add_FloatFloat_ReturnValue_5 = (float)CallFunc_Add_FloatFloat_ReturnValue_5;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_6 = (float)CallFunc_Add_FloatFloat_ReturnValue_6;
    params.CallFunc_Multiply_IntFloat_ReturnValue_1 = (float)CallFunc_Multiply_IntFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_7 = (float)CallFunc_Add_FloatFloat_ReturnValue_7;
    params.CallFunc_Add_FloatFloat_ReturnValue_8 = (float)CallFunc_Add_FloatFloat_ReturnValue_8;
    params.CallFunc_Add_FloatFloat_ReturnValue_9 = (float)CallFunc_Add_FloatFloat_ReturnValue_9;
    params.CallFunc_Add_FloatFloat_ReturnValue_10 = (float)CallFunc_Add_FloatFloat_ReturnValue_10;
    params.CallFunc_Add_FloatFloat_ReturnValue_11 = (float)CallFunc_Add_FloatFloat_ReturnValue_11;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    ProcessEvent(func, &params);
    Size = params.Size;
}
void UUI_BP_ItemScrollBox_C::ButtonHovered(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ButtonHovered"));
    struct Params_ButtonHovered {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_ButtonHovered params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
UUI_BP_ItemScrollBox_C* UUI_BP_ItemScrollBox_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C");
    return (UUI_BP_ItemScrollBox_C*)res;
}
void UUI_BP_ItemScrollBox_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::GetGrid(UObject*& UniformGrid) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.GetGrid"));
    struct Params_GetGrid {
        UObject* UniformGrid; // 0x0
    }; // Size: 0x8
    Params_GetGrid params{};
    params.UniformGrid = (UObject*)UniformGrid;
    ProcessEvent(func, &params);
    UniformGrid = params.UniformGrid;
}
void UUI_BP_ItemScrollBox_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_ItemScrollBox_C::ToggleCaching(bool ShouldCache) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ToggleCaching"));
    struct Params_ToggleCaching {
        bool ShouldCache; // 0x0
    }; // Size: 0x1
    Params_ToggleCaching params{};
    params.ShouldCache = (bool)ShouldCache;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::OnInitialized0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::ButtonClicked(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ButtonClicked"));
    struct Params_ButtonClicked {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_ButtonClicked params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::FakeButtonHoveredEvent(int32_t HoveredButtonIndex, bool CallFunc_Array_IsValidIndex_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.FakeButtonHoveredEvent"));
    struct Params_FakeButtonHoveredEvent {
        int32_t HoveredButtonIndex; // 0x0
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x4
        char pad_5[0x3];
        UIconButtonWidget* CallFunc_Array_Get_Item; // 0x8
    }; // Size: 0x10
    Params_FakeButtonHoveredEvent params{};
    params.HoveredButtonIndex = (int32_t)HoveredButtonIndex;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.CallFunc_Array_Get_Item = (UIconButtonWidget*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::SetCursorPos(bool Container___Inventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetCursorPos"));
    struct Params_SetCursorPos {
        bool Container___Inventory; // 0x0
    }; // Size: 0x1
    Params_SetCursorPos params{};
    params.Container___Inventory = (bool)Container___Inventory;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::OnButtonHovered__DelegateSignature(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnButtonHovered__DelegateSignature"));
    struct Params_OnButtonHovered__DelegateSignature {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_OnButtonHovered__DelegateSignature params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::ButtonUnhovered(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ButtonUnhovered"));
    struct Params_ButtonUnhovered {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_ButtonUnhovered params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::ScrollBoxEntered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ScrollBoxEntered__DelegateSignature"));
    struct Params_ScrollBoxEntered__DelegateSignature {
    }; // Size: 0x0
    Params_ScrollBoxEntered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::GetCursorPos(bool& Container_or_Inventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.GetCursorPos"));
    struct Params_GetCursorPos {
        bool Container_or_Inventory; // 0x0
    }; // Size: 0x1
    Params_GetCursorPos params{};
    params.Container_or_Inventory = (bool)Container_or_Inventory;
    ProcessEvent(func, &params);
    Container_or_Inventory = params.Container_or_Inventory;
}
void UUI_BP_ItemScrollBox_C::FindHoveredSlot(int32_t& HoveredIndex, int32_t Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.FindHoveredSlot"));
    struct Params_FindHoveredSlot {
        int32_t HoveredIndex; // 0x0
        int32_t Temp_int_Variable; // 0x4
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x8
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0x10
        bool CallFunc_IsHovered_ReturnValue; // 0x14
        char pad_15[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x18
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x1c
        char pad_1d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x20
    }; // Size: 0x24
    Params_FindHoveredSlot params{};
    params.HoveredIndex = (int32_t)HoveredIndex;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.CallFunc_IsHovered_ReturnValue = (bool)CallFunc_IsHovered_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    HoveredIndex = params.HoveredIndex;
}
void UUI_BP_ItemScrollBox_C::OnButtonClicked__DelegateSignature(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnButtonClicked__DelegateSignature"));
    struct Params_OnButtonClicked__DelegateSignature {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_OnButtonClicked__DelegateSignature params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::I_SetCursorPos(bool Container___Inventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.I_SetCursorPos"));
    struct Params_I_SetCursorPos {
        bool Container___Inventory; // 0x0
    }; // Size: 0x1
    Params_I_SetCursorPos params{};
    params.Container___Inventory = (bool)Container___Inventory;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::LockScrollBoxToVisibleIcons(int32_t NumIcons, int32_t ColumnCount, int32_t NumRows, int32_t CallFunc_Divide_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.LockScrollBoxToVisibleIcons"));
    struct Params_LockScrollBoxToVisibleIcons {
        int32_t NumIcons; // 0x0
        int32_t ColumnCount; // 0x4
        int32_t NumRows; // 0x8
        int32_t CallFunc_Divide_IntInt_ReturnValue; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        int32_t Temp_int_Variable; // 0x14
        int32_t CallFunc_Percent_IntInt_ReturnValue; // 0x18
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_LockScrollBoxToVisibleIcons params{};
    params.NumIcons = (int32_t)NumIcons;
    params.ColumnCount = (int32_t)ColumnCount;
    params.NumRows = (int32_t)NumRows;
    params.CallFunc_Divide_IntInt_ReturnValue = (int32_t)CallFunc_Divide_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Percent_IntInt_ReturnValue = (int32_t)CallFunc_Percent_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::InitValues(UUserWidget* Parent, int32_t Rows, int32_t Columns, UClass* IconClass, FVector2D IconSize, int32_t IconCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.InitValues"));
    struct Params_InitValues {
        UUserWidget* Parent; // 0x0
        int32_t Rows; // 0x8
        int32_t Columns; // 0xc
        UClass* IconClass; // 0x10
        FVector2D IconSize; // 0x18
        int32_t IconCount; // 0x20
    }; // Size: 0x24
    Params_InitValues params{};
    params.Parent = (UUserWidget*)Parent;
    params.Rows = (int32_t)Rows;
    params.Columns = (int32_t)Columns;
    params.IconClass = (UClass*)IconClass;
    params.IconSize = (FVector2D)IconSize;
    params.IconCount = (int32_t)IconCount;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::ManageButtons() {}
void UUI_BP_ItemScrollBox_C::SetIconClass(UClass* NewClass, bool CallFunc_NotEqual_ClassClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetIconClass"));
    struct Params_SetIconClass {
        UClass* NewClass; // 0x0
        bool CallFunc_NotEqual_ClassClass_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetIconClass params{};
    params.NewClass = (UClass*)NewClass;
    params.CallFunc_NotEqual_ClassClass_ReturnValue = (bool)CallFunc_NotEqual_ClassClass_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::SetIconPosition(UObject* GridSlot, int32_t CurrentCount, UUniformGridSlot* K2Node_DynamicCast_AsUniform_Grid_Slot, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Divide_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32_t CallFunc_Percent_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetIconPosition"));
    struct Params_SetIconPosition {
        UObject* GridSlot; // 0x0
        int32_t CurrentCount; // 0x8
        char pad_c[0x4];
        UUniformGridSlot* K2Node_DynamicCast_AsUniform_Grid_Slot; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Divide_IntInt_ReturnValue; // 0x1c
        FMargin K2Node_MakeStruct_Margin; // 0x20
        int32_t CallFunc_Percent_IntInt_ReturnValue; // 0x30
    }; // Size: 0x34
    Params_SetIconPosition params{};
    params.GridSlot = (UObject*)GridSlot;
    params.CurrentCount = (int32_t)CurrentCount;
    params.K2Node_DynamicCast_AsUniform_Grid_Slot = (UUniformGridSlot*)K2Node_DynamicCast_AsUniform_Grid_Slot;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Divide_IntInt_ReturnValue = (int32_t)CallFunc_Divide_IntInt_ReturnValue;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_Percent_IntInt_ReturnValue = (int32_t)CallFunc_Percent_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::SetButtonClass(UClass* ButtonClass) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetButtonClass"));
    struct Params_SetButtonClass {
        UClass* ButtonClass; // 0x0
    }; // Size: 0x8
    Params_SetButtonClass params{};
    params.ButtonClass = (UClass*)ButtonClass;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::RefreshGrid(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.RefreshGrid"));
    struct Params_RefreshGrid {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_RefreshGrid params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::SetStride(int32_t NewStride) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetStride"));
    struct Params_SetStride {
        int32_t NewStride; // 0x0
    }; // Size: 0x4
    Params_SetStride params{};
    params.NewStride = (int32_t)NewStride;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::Repopulate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.Repopulate"));
    struct Params_Repopulate {
    }; // Size: 0x0
    Params_Repopulate params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::OnMouseEnter0(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnMouseEnter"));
    struct Params_OnMouseEnter {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
    }; // Size: 0xa8
    Params_OnMouseEnter params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
void UUI_BP_ItemScrollBox_C::SetUpScrollbox(UUserWidget* Parent, int32_t Rows, int32_t Columns, UClass* IconClass, FVector2D IconSize, int32_t IconCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.SetUpScrollbox"));
    struct Params_SetUpScrollbox {
        UUserWidget* Parent; // 0x0
        int32_t Rows; // 0x8
        int32_t Columns; // 0xc
        UClass* IconClass; // 0x10
        FVector2D IconSize; // 0x18
        int32_t IconCount; // 0x20
    }; // Size: 0x24
    Params_SetUpScrollbox params{};
    params.Parent = (UUserWidget*)Parent;
    params.Rows = (int32_t)Rows;
    params.Columns = (int32_t)Columns;
    params.IconClass = (UClass*)IconClass;
    params.IconSize = (FVector2D)IconSize;
    params.IconCount = (int32_t)IconCount;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::OnMouseLeave0(FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnMouseLeave"));
    struct Params_OnMouseLeave {
        FPointerEvent MouseEvent; // 0x0
    }; // Size: 0x70
    Params_OnMouseLeave params{};
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
void UUI_BP_ItemScrollBox_C::I_SetButtonClass(UClass* Widget_Class) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.I_SetButtonClass"));
    struct Params_I_SetButtonClass {
        UClass* Widget_Class; // 0x0
    }; // Size: 0x8
    Params_I_SetButtonClass params{};
    params.Widget_Class = (UClass*)Widget_Class;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::ExecuteUbergraph_UI_BP_ItemScrollBox(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, UUserWidget* K2Node_Event_Parent, FVector2D CallFunc_ComputeSize_Size, UClass* K2Node_CustomEvent_ButtonClass, UIconButtonWidget* CallFunc_Array_Get_Item) {}
void UUI_BP_ItemScrollBox_C::OnButtonUnhovered__DelegateSignature(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.OnButtonUnhovered__DelegateSignature"));
    struct Params_OnButtonUnhovered__DelegateSignature {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_OnButtonUnhovered__DelegateSignature params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_ItemScrollBox_C::ScrollBoxExited__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ItemScrollBox.UI_BP_ItemScrollBox_C.ScrollBoxExited__DelegateSignature"));
    struct Params_ScrollBoxExited__DelegateSignature {
    }; // Size: 0x0
    Params_ScrollBoxExited__DelegateSignature params{};
    ProcessEvent(func, &params);
}
