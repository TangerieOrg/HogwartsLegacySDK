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
#pragma pack(push, 1)
class AVFX_BP_Spider_Stop_Splat_Wood_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UNiagaraComponent* Niagara; // 0x250
    UDecalComponent* Decal; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    float Decal_Timeline_Alpha_Erossion_EB7049DA4398B8313DEE47B54485E141; // 0x268
    ETimelineDirection::Type Decal_Timeline__Direction_EB7049DA4398B8313DEE47B54485E141; // 0x26c
    char pad_26d[0x3];
    UTimelineComponent* Decal_Timeline; // 0x270
    UMaterialInstanceDynamic* Mat_Decal; // 0x278
    static AVFX_BP_Spider_Stop_Splat_Wood_C* StaticClass();
    void UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Decal_Timeline__FinishedFunc();
    void Decal_Timeline__UpdateFunc();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Wood(int32_t EntryPoint, FTransform Temp_struct_Variable, UNiagaraComponent* CallFunc_AddComponent_ReturnValue);
}; // Size: 0x280
#pragma pack(pop)
