#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UPostProcessComponent;
class UObject;
class USceneComponent;
class UTimelineComponent;
#pragma pack(push, 1)
class AVFX_BP_ScreenFX_DamageDirection_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UPostProcessComponent* DamageDirection; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    float Damage_Dircetion_Spike_D93EC798415488C4E7D36D97047EF801; // 0x260
    float Damage_Dircetion_cloud_D93EC798415488C4E7D36D97047EF801; // 0x264
    float Damage_Dircetion_Direct_D93EC798415488C4E7D36D97047EF801; // 0x268
    ETimelineDirection::Type Damage_Dircetion__Direction_D93EC798415488C4E7D36D97047EF801; // 0x26c
    char pad_26d[0x3];
    UTimelineComponent* Damage_Dircetion; // 0x270
    float Parameter_Value; // 0x278
    char pad_27c[0x4];
    static AVFX_BP_ScreenFX_DamageDirection_C* StaticClass();
    void Damage_Dircetion__FinishedFunc();
    void Damage_Dircetion__UpdateFunc();
    void ReceiveBeginPlay0();
    void DamageEffect(UObject* Caller, int32_t Int1, int32_t Int2);
    void ExecuteUbergraph_VFX_BP_ScreenFX_DamageDirection(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
