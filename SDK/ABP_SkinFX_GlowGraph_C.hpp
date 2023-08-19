#pragma once
#include <cstdint>
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UTimelineComponent;
#pragma pack(push, 1)
class ABP_SkinFX_GlowGraph_C : public ABP_SkinFX_Graph_Parent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5d0
    float EmissiveAmount_EmissiveAmount_FBC318D54D7DAED5FB1ABCB52741A5DC; // 0x5d8
    ETimelineDirection::Type EmissiveAmount__Direction_FBC318D54D7DAED5FB1ABCB52741A5DC; // 0x5dc
    char pad_5dd[0x3];
    UTimelineComponent* EmissiveAmount; // 0x5e0
    FLinearColor Color; // 0x5e8
    float FadeOutStart; // 0x5f8
    char pad_5fc[0x4];
    static ABP_SkinFX_GlowGraph_C* StaticClass();
    void EmissiveAmount__FinishedFunc();
    void EmissiveAmount__UpdateFunc();
    void SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime);
    void SkinFXInitialUpdate();
    void SkinFXNotifyStart();
    void SkinFXNotifyRetrigger(float CurrentTime);
    void SkinFXNotifyKill();
    void ExecuteUbergraph_BP_SkinFX_GlowGraph(int32_t EntryPoint, ESkinFXEffectEndStyle K2Node_Event_endStyle, float K2Node_Event_currentTime_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Event_currentTime);
}; // Size: 0x600
#pragma pack(pop)
