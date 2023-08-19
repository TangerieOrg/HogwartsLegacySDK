#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "EUMGSequencePlayMode\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UNoMountHUDBase.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UImage;
#pragma pack(push, 1)
class UUI_BP_NoDismount_C : public UNoMountHUDBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
    UWidgetAnimation* fade; // 0x2f8
    UImage* NoDismount; // 0x300
    UImage* NoFly; // 0x308
    UCanvasPanel* Root; // 0x310
    static UUI_BP_NoDismount_C* StaticClass();
    void GetIcon();
    void SetIconVisible(bool CanDismount, bool CanFly, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void Construct();
    void WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_0();
    void OnUseStateChanged(bool Show);
    void HideNoDismount(bool CanDismount, bool CanFly);
    void ExecuteUbergraph_UI_BP_NoDismount(int32_t EntryPoint, bool K2Node_CustomEvent_CanDismount, bool K2Node_CustomEvent_CanFly, bool Temp_bool_Variable, EUMGSequencePlayMode::Type Temp_byte_Variable, EUMGSequencePlayMode::Type Temp_byte_Variable_1, bool K2Node_Event_Show, EUMGSequencePlayMode::Type K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}; // Size: 0x318
#pragma pack(pop)
