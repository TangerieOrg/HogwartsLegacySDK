#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "E_GroundFog\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_GroundFog.hpp"
class UBoxComponent;
class UWaterInteractionComponent;
class UBillboardComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class USceneComponent;
class UMaterialInterface;
class UMaterialInstance;
#pragma pack(push, 1)
class ABP_GroundFog_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UBoxComponent* FogPlayerOverlapVolume; // 0x250
    UBillboardComponent* Billboard; // 0x258
    UStaticMeshComponent* StaticMesh; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    bool Enabled; // 0x270
    bool Author_Fog___TURN_OFF_WHEN_FINISHED; // 0x271
    bool Use_Sphere_Shape; // 0x272
    bool Enable_Player_Interaction; // 0x273
    E_GroundFog::Type Fog_Preset; // 0x274
    char pad_275[0x53];
    float Fog_Density_Multiplier; // 0x2c8
    bool Override_Minimum_Fog_Density; // 0x2cc
    char pad_2cd[0x3];
    float Minimum_Fog_Density; // 0x2d0
    bool Use_Manual_Settings; // 0x2d4
    char pad_2d5[0x3];
    FSTR_GroundFog Maunal_Settings; // 0x2d8
    float Cull_Distance; // 0x324
    float Volume_Fog_Buffer_Depth; // 0x328
    float Min_Density; // 0x32c
    UMaterialInstanceDynamic* Dynamic_Material; // 0x330
    static ABP_GroundFog_C* StaticClass();
    void GetFogMaterial(UMaterialInterface*& Material, UMaterialInstance* CubeMaterial_Interactive, UMaterialInstance* CubeMaterial, UMaterialInstance* SphereMaterial_Interactive, UMaterialInstance* SphereMaterial);
    void UserConstructionScript0(float NewLocalVar_0, UMaterialInstanceDynamic* Material, bool Temp_bool_Variable, UMaterialInterface* CallFunc_GetFogMaterial_Material, UMaterialInterface* CallFunc_GetFogMaterial_Material_1, bool Temp_bool_Variable_1, FSTR_GroundFog CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FSTR_GroundFog CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, FSTR_GroundFog K2Node_Select_Default, FSTR_GroundFog K2Node_Select_Default_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void Turn_off_Fog_past_a_distance();
    void ReceiveBeginPlay0();
    void ReceiveActorBeginOverlap0(AActor* OtherActor);
    void ReceiveActorEndOverlap0(AActor* OtherActor);
    void ExecuteUbergraph_BP_GroundFog(int32_t EntryPoint, AActor* K2Node_Event_OtherActor_1, AActor* K2Node_Event_OtherActor, UWaterInteractionComponent* CallFunc_GetComponentByClass_ReturnValue, UWaterInteractionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x338
#pragma pack(pop)
