#pragma once
#include <cstdint>
#include "ATriggerCapsule.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UCapsuleComponent;
#pragma pack(push, 1)
class ABP_TriggerCapsule_C : public ATriggerCapsule {
public:
    FLinearColor Color; // 0x250
    bool Visualize; // 0x260
    char pad_261[0x7];
    static ABP_TriggerCapsule_C* StaticClass();
    void UserConstructionScript(UMaterialInstanceDynamic* DynamicMaterial, FTransform Temp_struct_Variable, UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FTransform Temp_struct_Variable_1, UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_1, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue_2, UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutRadius_2, float CallFunc_GetScaledCapsuleSize_WithoutHemisphere_OutHalfHeightWithoutHemisphere_2, bool CallFunc_AvaIsRunningCommandlet_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_4, FTransform Temp_struct_Variable_2, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, FLinearColor K2Node_MakeStruct_LinearColor);
}; // Size: 0x268
#pragma pack(pop)
