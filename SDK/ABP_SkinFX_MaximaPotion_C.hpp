#pragma once
#include <cstdint>
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UTimelineComponent;
class UObject;
class AMunitionType_Base;
#pragma pack(push, 1)
class ABP_SkinFX_MaximaPotion_C : public ABP_SkinFX_Graph_Parent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5d0
    float Timeline_0_NewTrack_1_63F33BB74A32786DC2EA72B7E6537515; // 0x5d8
    ETimelineDirection::Type Timeline_0__Direction_63F33BB74A32786DC2EA72B7E6537515; // 0x5dc
    char pad_5dd[0x3];
    UTimelineComponent* Timeline_0; // 0x5e0
    FHermesBPDelegateHandle Handle; // 0x5e8
    static ABP_SkinFX_MaximaPotion_C* StaticClass();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MunitionCreatedWithData(UObject* Caller, AMunitionType_Base* MunitionType);
    void SkinFXNotifyStart();
    void SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime);
    void SkinFXNotifyRetrigger(float CurrentTime);
    void ExecuteUbergraph_BP_SkinFX_MaximaPotion(int32_t EntryPoint);
}; // Size: 0x5f8
#pragma pack(pop)
