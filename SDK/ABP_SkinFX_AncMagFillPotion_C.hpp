#pragma once
#include <cstdint>
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ABP_SkinFX_AncMagFillPotion_C : public ABP_SkinFX_Graph_Parent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5d0
    static ABP_SkinFX_AncMagFillPotion_C* StaticClass();
    void SkinFXNotifyStart();
    void SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime);
    void SkinFXNotifyRetrigger(float CurrentTime);
    void ExecuteUbergraph_BP_SkinFX_AncMagFillPotion(int32_t EntryPoint, float K2Node_Event_currentTime, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x5d8
#pragma pack(pop)
