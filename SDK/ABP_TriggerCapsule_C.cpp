#include "ABP_TriggerCapsule_C.hpp"
#include "ATriggerCapsule.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UStaticMeshComponent.hpp"
ABP_TriggerCapsule_C* ABP_TriggerCapsule_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/BP_TriggerCapsule.BP_TriggerCapsule_C");
    return (ABP_TriggerCapsule_C*)res;
}
void ABP_TriggerCapsule_C::UserConstructionScript(UMaterialInstanceDynamic* DynamicMaterial, FTransform Temp_struct_Variable, UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FTransform Temp_struct_Variable_1, UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_1, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue_2, UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_2, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_2, bool CallFunc_AvaIsRunningCommandlet_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_4, FTransform Temp_struct_Variable_2, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, FLinearColor K2Node_MakeStruct_LinearColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_TriggerCapsule.BP_TriggerCapsule_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UMaterialInstanceDynamic* DynamicMaterial; // 0x0
        char pad_8[0x8];
        FTransform Temp_struct_Variable; // 0x10
        UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision; // 0x40
        bool K2Node_DynamicCast_bSuccess; // 0x48
        char pad_49[0x3];
        float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius; // 0x4c
        float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere; // 0x50
        char pad_54[0x4];
        UStaticMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x58
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x60
        char pad_64[0x4];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x68
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x70
        FVector CallFunc_MakeVector_ReturnValue; // 0x74
        FTransform Temp_struct_Variable_1; // 0x80
        UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision_1; // 0xb0
        bool K2Node_DynamicCast_bSuccess_1; // 0xb8
        char pad_b9[0x3];
        float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_1; // 0xbc
        float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_1; // 0xc0
        char pad_c4[0x4];
        UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1; // 0xc8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xd0
        FVector CallFunc_MakeVector_ReturnValue_1; // 0xd4
        float CallFunc_Divide_FloatFloat_ReturnValue_2; // 0xe0
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0xe4
        FVector CallFunc_MakeVector_ReturnValue_2; // 0x16c
        UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision_2; // 0x178
        bool K2Node_DynamicCast_bSuccess_2; // 0x180
        char pad_181[0x3];
        float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_2; // 0x184
        float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_2; // 0x188
        bool CallFunc_AvaIsRunningCommandlet_ReturnValue; // 0x18c
        char pad_18d[0x3];
        FVector CallFunc_MakeVector_ReturnValue_3; // 0x190
        bool CallFunc_Not_PreBool_ReturnValue; // 0x19c
        char pad_19d[0x3];
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1; // 0x1a0
        bool CallFunc_BooleanAND_ReturnValue; // 0x228
        char pad_229[0x3];
        float CallFunc_Divide_FloatFloat_ReturnValue_3; // 0x22c
        FVector CallFunc_MakeVector_ReturnValue_4; // 0x230
        char pad_23c[0x4];
        FTransform Temp_struct_Variable_2; // 0x240
        UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2; // 0x270
        float CallFunc_BreakColor_R; // 0x278
        float CallFunc_BreakColor_G; // 0x27c
        float CallFunc_BreakColor_B; // 0x280
        float CallFunc_BreakColor_A; // 0x284
        FLinearColor K2Node_MakeStruct_LinearColor; // 0x288
    }; // Size: 0x298
    Params_UserConstructionScript params{};
    params.DynamicMaterial = (UMaterialInstanceDynamic*)DynamicMaterial;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.K2Node_DynamicCast_AsCapsule_Collision = (UCapsuleComponent*)K2Node_DynamicCast_AsCapsule_Collision;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius = (float)CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius;
    params.CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere = (float)CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere;
    params.CallFunc_AddComponent_ReturnValue = (UStaticMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.Temp_struct_Variable_1 = (FTransform)Temp_struct_Variable_1;
    params.K2Node_DynamicCast_AsCapsule_Collision_1 = (UCapsuleComponent*)K2Node_DynamicCast_AsCapsule_Collision_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_1 = (float)CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_1;
    params.CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_1 = (float)CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_1;
    params.CallFunc_AddComponent_ReturnValue_1 = (UStaticMeshComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue_2 = (float)CallFunc_Divide_FloatFloat_ReturnValue_2;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_MakeVector_ReturnValue_2 = (FVector)CallFunc_MakeVector_ReturnValue_2;
    params.K2Node_DynamicCast_AsCapsule_Collision_2 = (UCapsuleComponent*)K2Node_DynamicCast_AsCapsule_Collision_2;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_2 = (float)CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_2;
    params.CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_2 = (float)CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_2;
    params.CallFunc_AvaIsRunningCommandlet_ReturnValue = (bool)CallFunc_AvaIsRunningCommandlet_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_3 = (FVector)CallFunc_MakeVector_ReturnValue_3;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_3 = (float)CallFunc_Divide_FloatFloat_ReturnValue_3;
    params.CallFunc_MakeVector_ReturnValue_4 = (FVector)CallFunc_MakeVector_ReturnValue_4;
    params.Temp_struct_Variable_2 = (FTransform)Temp_struct_Variable_2;
    params.CallFunc_AddComponent_ReturnValue_2 = (UStaticMeshComponent*)CallFunc_AddComponent_ReturnValue_2;
    params.CallFunc_BreakColor_R = (float)CallFunc_BreakColor_R;
    params.CallFunc_BreakColor_G = (float)CallFunc_BreakColor_G;
    params.CallFunc_BreakColor_B = (float)CallFunc_BreakColor_B;
    params.CallFunc_BreakColor_A = (float)CallFunc_BreakColor_A;
    params.K2Node_MakeStruct_LinearColor = (FLinearColor)K2Node_MakeStruct_LinearColor;
    ProcessEvent(func, &params);
}
