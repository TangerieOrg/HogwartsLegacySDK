#pragma once
#include <cstdint>
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UTimelineComponent;
class AActor;
class ABiped_Player;
#pragma pack(push, 1)
class ABP_SkinFX_InvisibilityPotion_C : public ABP_SkinFX_Graph_Parent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5d0
    float Timeline_0_NewTrack_2_7CA3028A4E086227129F9C99BDE5B8A9; // 0x5d8
    float Timeline_0_NewTrack_1_7CA3028A4E086227129F9C99BDE5B8A9; // 0x5dc
    float Timeline_0_NewTrack_0_7CA3028A4E086227129F9C99BDE5B8A9; // 0x5e0
    ETimelineDirection::Type Timeline_0__Direction_7CA3028A4E086227129F9C99BDE5B8A9; // 0x5e4
    char pad_5e5[0x3];
    UTimelineComponent* Timeline_0; // 0x5e8
    static ABP_SkinFX_InvisibilityPotion_C* StaticClass();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SkinFXNotifyStart();
    void SkinFXNotifyKill();
    void SkinFXNotifyRetrigger(float CurrentTime);
    void SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime);
    void ExecuteUbergraph_BP_SkinFX_InvisibilityPotion(int32_t EntryPoint, AActor* CallFunc_GetAttachParentActor_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x5f0
#pragma pack(pop)
