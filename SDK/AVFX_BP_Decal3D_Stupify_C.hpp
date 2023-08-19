#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
class UDecalSphereHelper;
class UDecalComponent;
class UMaterialInstanceDynamic;
class USceneComponent;
class UTimelineComponent;
#pragma pack(push, 1)
class AVFX_BP_Decal3D_Stupify_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UDecalSphereHelper* DecalSphereHelper; // 0x250
    UDecalComponent* Decal; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    float Timeline_2_Alpha_C27138AA42B10D795A5D1E8CFE5514F3; // 0x268
    ETimelineDirection::Type Timeline_2__Direction_C27138AA42B10D795A5D1E8CFE5514F3; // 0x26c
    char pad_26d[0x3];
    UTimelineComponent* Timeline_2; // 0x270
    float Timeline_1_Alpha_A471E1BB487073B5424E0186F28D91C9; // 0x278
    ETimelineDirection::Type Timeline_1__Direction_A471E1BB487073B5424E0186F28D91C9; // 0x27c
    char pad_27d[0x3];
    UTimelineComponent* Timeline_1; // 0x280
    UMaterialInstanceDynamic* MAT_Decal; // 0x288
    FRandomStream Random_Seed; // 0x290
    static AVFX_BP_Decal3D_Stupify_C* StaticClass();
    void UserConstructionScript0(float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay0();
    void Fade_Decal();
    void Fade_Emissive();
    void ExecuteUbergraph_VFX_BP_Decal3D_Stupify(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
