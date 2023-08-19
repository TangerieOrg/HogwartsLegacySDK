#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class UNiagaraComponent;
class USceneComponent;
class UDecalComponent;
class UMaterialInstanceDynamic;
class UTimelineComponent;
class UMaterialInterface;
#pragma pack(push, 1)
class AVFX_BP_Spider_Stop_Splat_Acro_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UNiagaraComponent* Niagara; // 0x250
    UDecalComponent* Decal; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    float Decal_Timeline_Alpha_Erossion_4B04303A47B1617E4058E7B18AE278AC; // 0x268
    ETimelineDirection::Type Decal_Timeline__Direction_4B04303A47B1617E4058E7B18AE278AC; // 0x26c
    char pad_26d[0x3];
    UTimelineComponent* Decal_Timeline; // 0x270
    UMaterialInstanceDynamic* Mat_Decal; // 0x278
    UMaterialInterface* Decal_Material; // 0x280
    static AVFX_BP_Spider_Stop_Splat_Acro_C* StaticClass();
    void UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Decal_Timeline__FinishedFunc();
    void Decal_Timeline__UpdateFunc();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Acro(int32_t EntryPoint, int32_t CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32_t CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, FTransform Temp_struct_Variable, UNiagaraComponent* CallFunc_AddComponent_ReturnValue);
}; // Size: 0x288
#pragma pack(pop)
