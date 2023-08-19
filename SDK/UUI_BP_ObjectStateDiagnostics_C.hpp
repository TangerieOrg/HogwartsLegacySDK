#pragma once
#include <cstdint>
#include "ECheckBoxState.hpp"
#include "UUserWidget.hpp"
class UProgressBar;
class UCheckBox;
class UObjectStateInfo;
#pragma pack(push, 1)
class UUI_BP_ObjectStateDiagnostics_C : public UUserWidget {
public:
    UProgressBar* Charred_Bar; // 0x268
    UCheckBox* Frozen_CheckBox; // 0x270
    UProgressBar* Health_Bar; // 0x278
    UCheckBox* OnFire_CheckBox; // 0x280
    UProgressBar* Wetness_Bar; // 0x288
    UObjectStateInfo* ObjectStateInfo; // 0x290
    static UUI_BP_ObjectStateDiagnostics_C* StaticClass();
    ECheckBoxState GetOnFireCheckedState(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOnFire_ReturnValue);
    ECheckBoxState GetFrozenCheckedState(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFrozen_ReturnValue);
    float GetCharredPercent(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetPercentCharred_ReturnValue);
    float GetHealthPercent(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
    float GetWetnessPercent(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetWetness_ReturnValue);
}; // Size: 0x298
#pragma pack(pop)
