#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
#pragma pack(push, 1)
class UUI_BP_SavingIcon_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* hideAutoSave; // 0x2f0
    UWidgetAnimation* showAutoSave; // 0x2f8
    UImage* Houses; // 0x300
    bool UseManualHide; // 0x308
    char pad_309[0x7];
    static UUI_BP_SavingIcon_C* StaticClass();
    void StopLoopingSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void StartLoopingSave();
    void HideSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void WidgetAnimationEvt_hideAutoSave_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_showAutoSave_K2Node_WidgetAnimationEvent_1();
    void ExecuteUbergraph_UI_BP_SavingIcon(int32_t EntryPoint, bool CallFunc_Not_PreBool_ReturnValue);
}; // Size: 0x310
#pragma pack(pop)
