#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "USettingsTabWidget.hpp"
#include "UUI_BP_LanguageSelect_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_LanguageSelect_C* UUI_BP_LanguageSelect_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C");
    return (UUI_BP_LanguageSelect_C*)res;
}
void UUI_BP_LanguageSelect_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_LanguageSelect_C::SetOSTLanguage(UUI_BP_MenuTextButton_C* SelectedButton, bool CallFunc_IsValid_ReturnValue, TArray<FString>& CallFunc_Map_Keys_Keys, TArray<UUI_BP_MenuTextButton_C*>& CallFunc_Map_Values_Values, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, FString CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.SetOSTLanguage"));
    struct Params_SetOSTLanguage {
        UUI_BP_MenuTextButton_C* SelectedButton; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        char pad_9[0x7];
        TArray<FString> CallFunc_Map_Keys_Keys; // 0x10
        TArray<UUI_BP_MenuTextButton_C*> CallFunc_Map_Values_Values; // 0x20
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x30
        char pad_31[0x3];
        int32_t CallFunc_Array_Find_ReturnValue; // 0x34
        FString CallFunc_Array_Get_Item; // 0x38
    }; // Size: 0x48
    Params_SetOSTLanguage params{};
    params.SelectedButton = (UUI_BP_MenuTextButton_C*)SelectedButton;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Map_Keys_Keys = (TArray<FString>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Map_Values_Values = (TArray<UUI_BP_MenuTextButton_C*>)CallFunc_Map_Values_Values;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Russian_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Russian_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Russian_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Russian_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Arabic_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Arabic_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Arabic_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Arabic_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Chinese_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Chinese_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Chinese_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Chinese_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Chinese_Simp_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Chinese_Simp_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Chinese_Simp_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Chinese_Simp_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_English_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_English_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_English_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_English_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_French_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_French_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_French_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_French_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_German_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_German_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_German_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_German_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Italian_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Italian_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Italian_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Italian_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Japanese_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Japanese_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Japanese_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Japanese_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Korean_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Korean_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Korean_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Korean_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Polish_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Polish_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Polish_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Polish_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Portuguese_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Portuguese_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Portuguese_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Portuguese_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Spanish_K2Node_ComponentBoundEvent_12_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Spanish_K2Node_ComponentBoundEvent_12_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Spanish_K2Node_ComponentBoundEvent_12_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Spanish_K2Node_ComponentBoundEvent_12_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::BndEvt__UI_BP_LanguageSelect_LB_Spanish_LA_K2Node_ComponentBoundEvent_13_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.BndEvt__UI_BP_LanguageSelect_LB_Spanish_LA_K2Node_ComponentBoundEvent_13_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_LanguageSelect_LB_Spanish_LA_K2Node_ComponentBoundEvent_13_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_LanguageSelect_LB_Spanish_LA_K2Node_ComponentBoundEvent_13_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LanguageSelect_C::ExecuteUbergraph_UI_BP_LanguageSelect(int32_t EntryPoint, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button, UUserWidget* K2Node_Event_Parent, FString CallFunc_GetCurrentLanguage_ReturnValue, UUI_BP_MenuTextButton_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_13) {}
void UUI_BP_LanguageSelect_C::LanguageSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_LanguageSelect.UI_BP_LanguageSelect_C.LanguageSelected__DelegateSignature"));
    struct Params_LanguageSelected__DelegateSignature {
    }; // Size: 0x0
    Params_LanguageSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
