#pragma once
#include <cstdint>
#include "EOrientation.hpp"
#include "FGeometry.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UGridBackground;
class UUniformGridSlot;
class UIconButtonWidget;
class UOverlay;
class UUniformGridPanel;
class UUI_BP_SimpleScrollBox_C;
class UClass;
struct FPointerEvent;
class UWidget;
class UObject;
#pragma pack(push, 1)
class UUI_BP_ItemScrollBox_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UGridBackground* GridBackground_0; // 0x270
    UOverlay* GridOverlayContainer; // 0x278
    UUniformGridPanel* IconGrid; // 0x280
    UUI_BP_SimpleScrollBox_C* UI_BP_SimpleScrollBox; // 0x288
    int32_t Stride; // 0x290
    int32_t NumRowsDisplayed; // 0x294
    int32_t IconCount; // 0x298
    char pad_29c[0x4];
    TArray<UIconButtonWidget*> Buttons; // 0x2a0
    UClass* IconClass; // 0x2b0
    UUserWidget* ParentWidget; // 0x2b8
    FVector2D IconSize; // 0x2c0
    bool IsInitialized; // 0x2c8
    char pad_2c9[0x3];
    float ScrollbarThickness; // 0x2cc
    FVector2D Size; // 0x2d0
    FMargin SlotPadding; // 0x2d8
    FMargin GridPadding; // 0x2e8
    bool ShowBackgroundGrid; // 0x2f8
    bool Container_or_Inventory; // 0x2f9
    bool CanCache; // 0x2fa
    char pad_2fb[0x55];
    int32_t LastHoveredIndex; // 0x350
    float IconGrid_Padding_Top; // 0x354
    EOrientation Orientation; // 0x358
    char pad_359[0x3];
    float BottomScrollOverlap; // 0x35c
    static UUI_BP_ItemScrollBox_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void FakeButtonHoveredEvent(int32_t HoveredButtonIndex, bool CallFunc_Array_IsValidIndex_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item);
    void ButtonUnhovered(UIconButtonWidget* Button);
    void ButtonHovered(UIconButtonWidget* Button);
    void ButtonClicked(UIconButtonWidget* Button);
    void ToggleCaching(bool ShouldCache);
    void SetCursorPos(bool Container___Inventory);
    void GetCursorPos(bool& Container_or_Inventory);
    void FindHoveredSlot(int32_t& HoveredIndex, int32_t Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void LockScrollBoxToVisibleIcons(int32_t NumIcons, int32_t ColumnCount, int32_t NumRows, int32_t CallFunc_Divide_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void InitValues(UUserWidget* Parent, int32_t Rows, int32_t Columns, UClass* IconClass, FVector2D IconSize, int32_t IconCount);
    void SetIconClass(UClass* NewClass, bool CallFunc_NotEqual_ClassClass_ReturnValue);
    void ManageButtons();
    void ComputeSize(FVector2D& Size, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_11, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetIconPosition(UObject* GridSlot, int32_t CurrentCount, UUniformGridSlot* K2Node_DynamicCast_AsUniform_Grid_Slot, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Divide_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32_t CallFunc_Percent_IntInt_ReturnValue);
    void RefreshGrid(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetGrid(UObject*& UniformGrid);
    void SetStride(int32_t NewStride);
    void InEditorPostConstruct();
    void SetParent(UUserWidget* Parent);
    void Initialize();
    void Repopulate();
    void SetButtonClass(UClass* ButtonClass);
    void OnMouseEnter0(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    void SetUpScrollbox(UUserWidget* Parent, int32_t Rows, int32_t Columns, UClass* IconClass, FVector2D IconSize, int32_t IconCount);
    void OnMouseLeave0(FPointerEvent& MouseEvent);
    void I_SetButtonClass(UClass* Widget_Class);
    void I_SetCursorPos(bool Container___Inventory);
    void PreConstruct0(bool IsDesignTime);
    void OnInitialized0();
    void ExecuteUbergraph_UI_BP_ItemScrollBox(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, UUserWidget* K2Node_Event_Parent, FVector2D CallFunc_ComputeSize_Size, UClass* K2Node_CustomEvent_ButtonClass, UIconButtonWidget* CallFunc_Array_Get_Item);
    void OnButtonUnhovered__DelegateSignature(UIconButtonWidget* Button);
    void OnButtonHovered__DelegateSignature(UIconButtonWidget* Button);
    void OnButtonClicked__DelegateSignature(UIconButtonWidget* Button);
    void ScrollBoxExited__DelegateSignature();
    void ScrollBoxEntered__DelegateSignature();
}; // Size: 0x360
#pragma pack(pop)
