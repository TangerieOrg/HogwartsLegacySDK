#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCategoryNavBarWidget.hpp"
class UButton;
class UVerticalBox;
class UPhoenixRichTextBlock;
class UUIManager;
class UWidget;
class UUI_BP_FG_CategoryBarButton_C;
struct FVector2D;
class UUserWidget;
class APawn;
class UIconButtonWidget;
class UInputComponent;
#pragma pack(push, 1)
class UUI_BP_FG_CategoryNavBar_C : public UCategoryNavBarWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x288
    UVerticalBox* CategoryList; // 0x290
    UPhoenixRichTextBlock* DownDpad; // 0x298
    UButton* NavBarDownButton; // 0x2a0
    UButton* NavBarUpButton; // 0x2a8
    TArray<UUI_BP_FG_CategoryBarButton_C*> CategoryButtons; // 0x2b0
    char pad_2c0[0x10];
    UUserWidget* Owner; // 0x2d0
    char pad_2d8[0x20];
    bool ShowCategoryNames; // 0x2f8
    bool ShowCategoryCount; // 0x2f9
    bool UsesCategoryNewIndicators; // 0x2fa
    char pad_2fb[0x5];
    static UUI_BP_FG_CategoryNavBar_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void SetCategoryNewIndicator(bool IsNew, int32_t CategoryIndex, UUI_BP_FG_CategoryBarButton_C* CallFunc_Array_Get_Item);
    void GetButton(int32_t ButtonIndex, UIconButtonWidget*& Button, UUI_BP_FG_CategoryBarButton_C* CallFunc_Array_Get_Item);
    UIconButtonWidget* GetButtonByIndex0(int32_t Index, UIconButtonWidget* CallFunc_GetButton_Button);
    int32_t GetIndexOfButton0(UIconButtonWidget* Button, int32_t CallFunc_GetChildIndex_ReturnValue);
    void GoToPrevCategory(bool Temp_bool_Variable, int32_t CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_GoToCategory_CategoryChanged);
    void GoToNextCategory(bool Temp_bool_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Array_LastIndex_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_GoToCategory_CategoryChanged);
    void InitCategoryButtons(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_SetState_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GoToCategory(int32_t NewCategoryIndex, bool& CategoryChanged, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UIconButtonWidget* K2Node_DynamicCast_AsIcon_Button_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetState_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, UIconButtonWidget* K2Node_DynamicCast_AsIcon_Button_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetState_ReturnValue_1, int32_t CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
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
    void PopulateCategoryButtons();
    void OnHover0(UIconButtonWidget* hoveredButton);
    void OnUnhover0(UIconButtonWidget* hoveredButton);
    void OnClick0(int32_t SelectedCategory);
    void BndEvt__UI_BP_FG_CategoryNavBar_NavBarUpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_FG_CategoryNavBar_NavBarDownButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void RefreshCategoryNewCounts();
    void ExecuteUbergraph_UI_BP_FG_CategoryNavBar(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, TArray<void*>& K2Node_Event_Categories, int32_t CallFunc_Array_Length_ReturnValue, int32_t K2Node_Event_Index, UUserWidget* K2Node_Event_NewOwner, UUserWidget* K2Node_Event_Parent, APawn* CallFunc_GetPlayerPawn_ReturnValue, UInputComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, FMargin K2Node_MakeStruct_Margin);
    void ChangedCategory__DelegateSignature(int32_t NewCategoryIndex);
    void UnhoveredCategory__DelegateSignature(int32_t Index, UIconButtonWidget* CategoryButton);
    void HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton);
}; // Size: 0x300
#pragma pack(pop)
