#pragma once
#include <cstdint>
#include "ESpellButton.hpp"
#include "FKey.hpp"
#include "USceneRigObjectActionState.hpp"
class UGlobalLightingCustomBlendableFocusValue;
#pragma pack(push, 1)
class USceneActionState_PIM : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    UGlobalLightingCustomBlendableFocusValue* CustomFocusBlendable; // 0x78
    char pad_80[0x1c8];
    static USceneActionState_PIM* StaticClass();
    void WidgetLoaded();
    void TelescopeWidgetLoaded();
    void HandleWildcardAxisChanged(float AxisVal);
    void HandleWildcardActionReleased();
    void HandleWildcardActionPressed();
    void HandleSpellButtonPressed(ESpellButton SpellButton);
    void HandleModifierReleased();
    void HandleModifierPressed();
    void HandleModifierAxisChanged(float AxisVal);
    void HandleAnalogStick(FKey Key, float AnalogValue);
    void HandleAcceptActionReleased();
    void HandleAcceptActionPressed();
    void FinishNow(bool bSuccess);
}; // Size: 0x248
#pragma pack(pop)
