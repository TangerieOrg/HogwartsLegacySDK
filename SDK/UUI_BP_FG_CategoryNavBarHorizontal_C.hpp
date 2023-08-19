#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UCategoryNavBarWidget.hpp"
struct FVector2D;
class UUserWidget;
class APawn;
class UHorizontalBox;
class UIconButtonWidget;
class UOverlay;
class UPhoenixRichTextBlock;
class UButton;
class UUI_BP_FG_CategoryBarButton_C;
class UWidget;
class UInputComponent;
#pragma pack(push, 1)
class UUI_BP_FG_CategoryNavBarHorizontal_C : public UCategoryNavBarWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x288
    UHorizontalBox* CategoryListH; // 0x290
    UOverlay* LeftButtonOverlay; // 0x298
    UPhoenixRichTextBlock* leftDpad; // 0x2a0
    UButton* NavBarLeftButton; // 0x2a8
    UButton* NavBarRightButton; // 0x2b0
    UOverlay* RightButtonOverlay; // 0x2b8
    UPhoenixRichTextBlock* rightDpad; // 0x2c0
    TArray<UUI_BP_FG_CategoryBarButton_C*> CategoryButtons; // 0x2c8
    char pad_2d8[0x10];
    UUserWidget* Owner; // 0x2e8
    char pad_2f0[0x20];
    bool ShowCategoryNames; // 0x310
    bool ShowCategoryCount; // 0x311
    bool UseAlternateButtons; // 0x312
    char pad_313[0x5];
    FString AlternatePreviousButton; // 0x318
    FString AlternateNextButton; // 0x328
    int32_t dpadFontSize; // 0x338
    char pad_33c[0x4];
    static UUI_BP_FG_CategoryNavBarHorizontal_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void GetButton(int32_t ButtonIndex, UIconButtonWidget*& Button, UUI_BP_FG_CategoryBarButton_C* CallFunc_Array_Get_Item);
    UIconButtonWidget* GetButtonByIndex(int32_t Index, UIconButtonWidget* CallFunc_GetButton_Button);
    int32_t GetIndexOfButton(UIconButtonWidget* Button, int32_t CallFunc_GetChildIndex_ReturnValue);
    void GoToPrevCategory(bool Temp_bool_Variable, int32_t CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_GoToCategory_CategoryChanged);
    void GoToNextCategory(bool Temp_bool_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Array_LastIndex_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_GoToCategory_CategoryChanged);
    void InitCategoryButtons(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_SetState_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GoToCategory(int32_t NewCategoryIndex, bool& CategoryChanged, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UIconButtonWidget* K2Node_DynamicCast_AsIcon_Button_Widget, bool K2Node_DynamicCast_bSuccess, UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_SetState_ReturnValue, UIconButtonWidget* K2Node_DynamicCast_AsIcon_Button_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_SetState_ReturnValue_1, int32_t CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void RefreshCategoryNewCounts();
    void InEditorPostConstruct();
    void I_SetCategoryNames(TArray<void*>& Categories);
    void GoToCategoryNext();
    void GoToCategoryPrev();
    void SetCurCategoryIndex(int32_t Index);
    void NavBar_InitCategoryButtons();
    void SetOwner(UUserWidget* NewOwner);
    void SetParent(UUserWidget* Parent);
    void Initialize();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PopulateCategoryButtons();
    void OnHover(UIconButtonWidget* hoveredButton);
    void OnUnhover(UIconButtonWidget* hoveredButton);
    void OnClick(int32_t SelectedCategory);
    void BndEvt__UI_BP_FG_CategoryNavBarHorizontal_NavBarLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_FG_CategoryNavBarHorizontal_NavBarRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void SetNavButtonsVisible(bool Visible);
    void ExecuteUbergraph_UI_BP_FG_CategoryNavBarHorizontal(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, TArray<void*>& K2Node_Event_Categories, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t K2Node_Event_Index, UUserWidget* K2Node_Event_NewOwner, UUserWidget* K2Node_Event_Parent, APawn* CallFunc_GetPlayerPawn_ReturnValue, UInputComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_Event_IsDesignTime);
    void ChangedCategory__DelegateSignature(int32_t NewCategoryIndex);
    void UnhoveredCategory__DelegateSignature(int32_t Index, UIconButtonWidget* CategoryButton);
    void HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton);
}; // Size: 0x340
#pragma pack(pop)
