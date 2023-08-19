#include "AActor.hpp"
#include "ABP_GroundFog_C.hpp"
#include "E_GroundFog\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_GroundFog.hpp"
#include "UBillboardComponent.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstance.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UWaterInteractionComponent.hpp"
ABP_GroundFog_C* ABP_GroundFog_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/BP_GroundFog.BP_GroundFog_C");
    return (ABP_GroundFog_C*)res;
}
void ABP_GroundFog_C::Turn_off_Fog_past_a_distance() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GroundFog.BP_GroundFog_C.Turn off Fog past a distance"));
    struct Params_Turn_off_Fog_past_a_distance {
    }; // Size: 0x0
    Params_Turn_off_Fog_past_a_distance params{};
    ProcessEvent(func, &params);
}
void ABP_GroundFog_C::GetFogMaterial(UMaterialInterface*& Material, UMaterialInstance* CubeMaterial_Interactive, UMaterialInstance* CubeMaterial, UMaterialInstance* SphereMaterial_Interactive, UMaterialInstance* SphereMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GroundFog.BP_GroundFog_C.GetFogMaterial"));
    struct Params_GetFogMaterial {
        UMaterialInterface* Material; // 0x0
        UMaterialInstance* CubeMaterial_Interactive; // 0x8
        UMaterialInstance* CubeMaterial; // 0x10
        UMaterialInstance* SphereMaterial_Interactive; // 0x18
        UMaterialInstance* SphereMaterial; // 0x20
    }; // Size: 0x28
    Params_GetFogMaterial params{};
    params.Material = (UMaterialInterface*)Material;
    params.CubeMaterial_Interactive = (UMaterialInstance*)CubeMaterial_Interactive;
    params.CubeMaterial = (UMaterialInstance*)CubeMaterial;
    params.SphereMaterial_Interactive = (UMaterialInstance*)SphereMaterial_Interactive;
    params.SphereMaterial = (UMaterialInstance*)SphereMaterial;
    ProcessEvent(func, &params);
    Material = params.Material;
}
void ABP_GroundFog_C::UserConstructionScript0(float NewLocalVar_0, UMaterialInstanceDynamic* Material, bool Temp_bool_Variable, UMaterialInterface* CallFunc_GetFogMaterial_Material, UMaterialInterface* CallFunc_GetFogMaterial_Material_1, bool Temp_bool_Variable_1, FSTR_GroundFog CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FSTR_GroundFog CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, FSTR_GroundFog K2Node_Select_Default, FSTR_GroundFog K2Node_Select_Default_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GroundFog.BP_GroundFog_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        float NewLocalVar_0; // 0x0
        char pad_4[0x4];
        UMaterialInstanceDynamic* Material; // 0x8
        bool Temp_bool_Variable; // 0x10
        char pad_11[0x7];
        UMaterialInterface* CallFunc_GetFogMaterial_Material; // 0x18
        UMaterialInterface* CallFunc_GetFogMaterial_Material_1; // 0x20
        bool Temp_bool_Variable_1; // 0x28
        char pad_29[0x3];
        FSTR_GroundFog CallFunc_Map_Find_Value; // 0x2c
        bool CallFunc_Map_Find_ReturnValue; // 0x78
        char pad_79[0x3];
        FSTR_GroundFog CallFunc_Map_Find_Value_1; // 0x7c
        bool CallFunc_Map_Find_ReturnValue_1; // 0xc8
        char pad_c9[0x3];
        FSTR_GroundFog K2Node_Select_Default; // 0xcc
        FSTR_GroundFog K2Node_Select_Default_1; // 0x118
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x164
        char pad_1ec[0x4];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x1f0
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x1f8
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x1fc
        float CallFunc_SelectFloat_ReturnValue; // 0x200
        float CallFunc_MapRangeClamped_ReturnValue; // 0x204
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x208
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x20c
        char pad_20d[0x3];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x210
    }; // Size: 0x218
    Params_UserConstructionScript params{};
    params.NewLocalVar_0 = (float)NewLocalVar_0;
    params.Material = (UMaterialInstanceDynamic*)Material;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetFogMaterial_Material = (UMaterialInterface*)CallFunc_GetFogMaterial_Material;
    params.CallFunc_GetFogMaterial_Material_1 = (UMaterialInterface*)CallFunc_GetFogMaterial_Material_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_Map_Find_Value = (FSTR_GroundFog)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_Map_Find_Value_1 = (FSTR_GroundFog)CallFunc_Map_Find_Value_1;
    params.CallFunc_Map_Find_ReturnValue_1 = (bool)CallFunc_Map_Find_ReturnValue_1;
    params.K2Node_Select_Default = (FSTR_GroundFog)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (FSTR_GroundFog)K2Node_Select_Default_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.CallFunc_MapRangeClamped_ReturnValue = (float)CallFunc_MapRangeClamped_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_GroundFog_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GroundFog.BP_GroundFog_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_GroundFog_C::ReceiveActorBeginOverlap0(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GroundFog.BP_GroundFog_C.ReceiveActorBeginOverlap"));
    struct Params_ReceiveActorBeginOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorBeginOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_GroundFog_C::ReceiveActorEndOverlap0(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GroundFog.BP_GroundFog_C.ReceiveActorEndOverlap"));
    struct Params_ReceiveActorEndOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorEndOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_GroundFog_C::ExecuteUbergraph_BP_GroundFog(int32_t EntryPoint, AActor* K2Node_Event_OtherActor_1, AActor* K2Node_Event_OtherActor, UWaterInteractionComponent* CallFunc_GetComponentByClass_ReturnValue, UWaterInteractionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GroundFog.BP_GroundFog_C.ExecuteUbergraph_BP_GroundFog"));
    struct Params_ExecuteUbergraph_BP_GroundFog {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OtherActor_1; // 0x8
        AActor* K2Node_Event_OtherActor; // 0x10
        UWaterInteractionComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        UWaterInteractionComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue_1; // 0x29
    }; // Size: 0x2a
    Params_ExecuteUbergraph_BP_GroundFog params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OtherActor_1 = (AActor*)K2Node_Event_OtherActor_1;
    params.K2Node_Event_OtherActor = (AActor*)K2Node_Event_OtherActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UWaterInteractionComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UWaterInteractionComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
