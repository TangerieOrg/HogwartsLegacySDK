#pragma once
#include <cstdint>
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UTimelineComponent;
#pragma pack(push, 1)
class ABP_SkinFX_StoneSkin_C : public ABP_SkinFX_Graph_Parent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5d0
    float Timeline_1_NewTrack_0_461AD6A145C277F47E9CACA8B97F7887; // 0x5d8
    ETimelineDirection::Type Timeline_1__Direction_461AD6A145C277F47E9CACA8B97F7887; // 0x5dc
    char pad_5dd[0x3];
    UTimelineComponent* Timeline_1; // 0x5e0
    float Timeline_0_NewTrack_1_13D198C14C93B8D3DBC74EBF02E16550; // 0x5e8
    float Timeline_0_NewTrack_0_13D198C14C93B8D3DBC74EBF02E16550; // 0x5ec
    ETimelineDirection::Type Timeline_0__Direction_13D198C14C93B8D3DBC74EBF02E16550; // 0x5f0
    char pad_5f1[0x7];
    UTimelineComponent* Timeline_0; // 0x5f8
    static ABP_SkinFX_StoneSkin_C* StaticClass();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void SkinFXNotifyRetrigger(float CurrentTime);
    void SkinFXNotifyStart();
    void SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_SkinFX_StoneSkin(int32_t EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x600
#pragma pack(pop)
