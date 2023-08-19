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
class AVFX_BP_Decal3D_Blast_Confringo_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UDecalSphereHelper* DecalSphereHelper; // 0x250
    UDecalComponent* Decal; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    float Timeline_0_Alpha_40CBFBED4324C6E3E35F5192E54CDDB4; // 0x268
    ETimelineDirection::Type Timeline_0__Direction_40CBFBED4324C6E3E35F5192E54CDDB4; // 0x26c
    char pad_26d[0x3];
    UTimelineComponent* Timeline_0; // 0x270
    UMaterialInstanceDynamic* MAT_Decal; // 0x278
    FName NewVar_0; // 0x280
    FRandomStream Random_Seed; // 0x288
    static AVFX_BP_Decal3D_Blast_Confringo_C* StaticClass();
    void UserConstructionScript0(FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, FVector CallFunc_GetActorForwardVector_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay0();
    void Fade_Decal();
    void ExecuteUbergraph_VFX_BP_Decal3D_Blast_Confringo(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
