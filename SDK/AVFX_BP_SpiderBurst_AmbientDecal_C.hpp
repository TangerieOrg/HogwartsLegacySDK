#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UDecalComponent;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class USceneComponent;
class UTimelineComponent;
class UMeshComponent;
#pragma pack(push, 1)
class AVFX_BP_SpiderBurst_AmbientDecal_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UDecalComponent* DecalSplat; // 0x250
    UNiagaraComponent* Niagara; // 0x258
    UDecalComponent* Decal; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    float Timeline_SplatAlpha_NewTrack_0_254009184A33F5C5C40AE09A8BA69941; // 0x270
    float Timeline_SplatAlpha_NewTrack_2_254009184A33F5C5C40AE09A8BA69941; // 0x274
    ETimelineDirection::Type Timeline_SplatAlpha__Direction_254009184A33F5C5C40AE09A8BA69941; // 0x278
    char pad_279[0x7];
    UTimelineComponent* Timeline_SplatAlpha; // 0x280
    float Timeline_0_NewTrack_0_CCEF00DA4665E25CC748E3820A7FE401; // 0x288
    ETimelineDirection::Type Timeline_0__Direction_CCEF00DA4665E25CC748E3820A7FE401; // 0x28c
    char pad_28d[0x3];
    UTimelineComponent* Timeline_0; // 0x290
    float Timeline_Emissive_NewTrack_0_AE46A04C47D28DBB134FC7937CCCAB9E; // 0x298
    ETimelineDirection::Type Timeline_Emissive__Direction_AE46A04C47D28DBB134FC7937CCCAB9E; // 0x29c
    char pad_29d[0x3];
    UTimelineComponent* Timeline_Emissive; // 0x2a0
    UMaterialInstanceDynamic* Decal_Mat; // 0x2a8
    UMeshComponent* decal_Splat; // 0x2b0
    UMaterialInstanceDynamic* Decal_Splatter; // 0x2b8
    static AVFX_BP_SpiderBurst_AmbientDecal_C* StaticClass();
    void UserConstructionScript0(UDecalComponent* NewLocalVar_0, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void Timeline_Emissive__FinishedFunc();
    void Timeline_Emissive__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_SplatAlpha__FinishedFunc();
    void Timeline_SplatAlpha__UpdateFunc();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_VFX_BP_SpiderBurst_AmbientDecal(int32_t EntryPoint);
}; // Size: 0x2c0
#pragma pack(pop)
