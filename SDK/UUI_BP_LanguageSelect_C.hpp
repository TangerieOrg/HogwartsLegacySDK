#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "USettingsTabWidget.hpp"
class UWidgetAnimation;
class UUI_BP_MenuTextButton_C;
class UUI_BP_Legend_Horizontal_Screen_C;
struct FVector2D;
class UUserWidget;
#pragma pack(push, 1)
class UUI_BP_LanguageSelect_C : public USettingsTabWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3f0
    UWidgetAnimation* showDetails; // 0x3f8
    UUI_BP_MenuTextButton_C* LB_Arabic; // 0x400
    UUI_BP_MenuTextButton_C* LB_Chinese; // 0x408
    UUI_BP_MenuTextButton_C* LB_Chinese_Simp; // 0x410
    UUI_BP_MenuTextButton_C* LB_English; // 0x418
    UUI_BP_MenuTextButton_C* LB_French; // 0x420
    UUI_BP_MenuTextButton_C* LB_German; // 0x428
    UUI_BP_MenuTextButton_C* LB_Italian; // 0x430
    UUI_BP_MenuTextButton_C* LB_Japanese; // 0x438
    UUI_BP_MenuTextButton_C* LB_Korean; // 0x440
    UUI_BP_MenuTextButton_C* LB_Polish; // 0x448
    UUI_BP_MenuTextButton_C* LB_Portuguese; // 0x450
    UUI_BP_MenuTextButton_C* LB_Russian; // 0x458
    UUI_BP_MenuTextButton_C* LB_Spanish; // 0x460
    UUI_BP_MenuTextButton_C* LB_Spanish_LA; // 0x468
    UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x470
    TArray<UUI_BP_MenuTextButton_C*> LanguageButtonArray; // 0x478
    char pad_488[0xa0];
    UUI_BP_MenuTextButton_C* currentLanguageButton; // 0x528
    char pad_530[0x10];
    static UUI_BP_LanguageSelect_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void SetOSTLanguage(UUI_BP_MenuTextButton_C* SelectedButton, bool CallFunc_IsValid_ReturnValue, TArray<FString>& CallFunc_Map_Keys_Keys, TArray<UUI_BP_MenuTextButton_C*>& CallFunc_Map_Values_Values, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, FString CallFunc_Array_Get_Item);
    void InEditorPostConstruct();
    void SetParent(UUserWidget* Parent);
    void Initialize();
    void Construct();
    void BndEvt__UI_BP_LanguageSelect_LB_Arabic_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Chinese_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Chinese_Simp_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_English_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_French_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_German_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Italian_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Japanese_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Korean_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Polish_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Portuguese_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Russian_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Spanish_K2Node_ComponentBoundEvent_12_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_LanguageSelect_LB_Spanish_LA_K2Node_ComponentBoundEvent_13_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void ExecuteUbergraph_UI_BP_LanguageSelect(int32_t EntryPoint, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button, UUserWidget* K2Node_Event_Parent, FString CallFunc_GetCurrentLanguage_ReturnValue, UUI_BP_MenuTextButton_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_13);
    void LanguageSelected__DelegateSignature();
}; // Size: 0x540
#pragma pack(pop)
