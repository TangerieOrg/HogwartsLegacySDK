#pragma once
#include <cstdint>
#include "ESpellCategory.hpp"
#include "FDataTableRowHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UPhoenixImage;
class UScaleBox;
class UImage;
#pragma pack(push, 1)
class UUI_BP_ComboHelper_SpellItem_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* Ready; // 0x270
    UWidgetAnimation* Fail; // 0x278
    UWidgetAnimation* Success; // 0x280
    UPhoenixImage* colorPulse; // 0x288
    UCanvasPanel* contentHolder; // 0x290
    UPhoenixImage* itemBack; // 0x298
    UScaleBox* Outline; // 0x2a0
    UImage* SpellIcon; // 0x2a8
    UPhoenixImage* stateBack; // 0x2b0
    UPhoenixImage* stateFlame; // 0x2b8
    UCanvasPanel* stateIcon; // 0x2c0
    UPhoenixImage* successMark; // 0x2c8
    char pad_2d0[0x20];
    FString SpellName; // 0x2f0
    static UUI_BP_ComboHelper_SpellItem_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_1();
    void SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_0();
    void ShowStatusSuccess(bool ShowStatus);
    void Set_Spell_Category_Color(ESpellCategory SpellCategory, FDataTableRowHandle TempColorTag, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, bool K2Node_SwitchEnum_CmpSuccess, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5);
    void SuccessAnimationFinished();
    void FailureAnimationFinished();
    void SetSpellName(FString SpellName);
    void PlaySuccess();
    void PlayFail();
    void ResetState();
    void PlayReady();
    void ExecuteUbergraph_UI_BP_ComboHelper_SpellItem(int32_t EntryPoint, FString K2Node_CustomEvent_SpellName, bool CallFunc_StartsWith_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void OnFailureAnimationComplete__DelegateSignature();
    void OnSuccessAnimationComplete__DelegateSignature();
}; // Size: 0x300
#pragma pack(pop)
