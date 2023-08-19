#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
#pragma pack(push, 1)
class UUI_BP_AutoSave_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* SaveLoop_House; // 0x2f0
    UWidgetAnimation* hideAutoSave; // 0x2f8
    UWidgetAnimation* showAutoSave; // 0x300
    UImage* Houses; // 0x308
    bool UseManualHide; // 0x310
    char pad_311[0x7];
    static UUI_BP_AutoSave_C* StaticClass();
    void StopLoopingSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void StartLoopingSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void HideSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void WidgetAnimationEvt_hideAutoSave_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_showAutoSave_K2Node_WidgetAnimationEvent_1();
    void ExecuteUbergraph_UI_BP_AutoSave(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}; // Size: 0x318
#pragma pack(pop)
