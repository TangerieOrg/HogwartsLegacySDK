#pragma once
#include <cstdint>
#include "FAnimNode_Constraint.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_CopyPoseFromMesh.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_Root.hpp"
#include "FBoolClothInteractorValue.hpp"
#include "FClothMountTargets.hpp"
#include "FFloatClothInteractorValue.hpp"
#include "FFormatArgumentData.hpp"
#include "FIntClothInteractorValue.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector2DClothInteractorValue.hpp"
#include "FVectorClothInteractorValue.hpp"
#include "UAnimInstance.hpp"
class UChaosClothingInteractor;
class AActor;
class UObject;
class UClothingSimulationInteractor;
class USkeletalMeshComponent;
struct FPoseLink;
class UClothingInteractor;
class UChaosClothingSimulationInteractor;
class UChaosClothSharedSimConfig;
class UChaosClothConfig;
#pragma pack(push, 1)
class UABP_Robe_ClothJoints_Base_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2c8
    FAnimNode_Constraint AnimGraphNode_Constraint_4; // 0x4a0
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5a8
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x5c8
    FAnimNode_Constraint AnimGraphNode_Constraint_3; // 0x5e8
    FAnimNode_Constraint AnimGraphNode_Constraint_2; // 0x6f0
    FAnimNode_Constraint AnimGraphNode_Constraint_1; // 0x7f8
    FAnimNode_Constraint AnimGraphNode_Constraint; // 0x900
    char pad_a08[0x8];
    FAnimNode_LookAt AnimGraphNode_LookAt_4; // 0xa10
    FAnimNode_LookAt AnimGraphNode_LookAt_3; // 0xbc0
    FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0xd70
    FAnimNode_LookAt AnimGraphNode_LookAt_1; // 0xf20
    FAnimNode_Root AnimGraphNode_Root; // 0x10d0
    FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1100
    FTransform ClothTargetHips; // 0x12b0
    FTransform ClothTargetLeft; // 0x12e0
    FTransform ClothTargetRight; // 0x1310
    float ClothTargetAlpha; // 0x1340
    float ClothTargetAlphaDesired; // 0x1344
    FClothMountTargets Cloth_Mount_Targets; // 0x1348
    TArray<FName> ValidClothingAssetNames; // 0x1360
    FVector2DClothInteractorValue Anim_Drive_Stiffness; // 0x1370
    FVector2DClothInteractorValue Anim_Drive_Damping; // 0x137c
    FFloatClothInteractorValue Drag_Coefficient; // 0x1388
    FFloatClothInteractorValue Lift_Coefficient; // 0x1390
    FFloatClothInteractorValue Collision_Thickness; // 0x1398
    FFloatClothInteractorValue Friction_Coefficient; // 0x13a0
    FFloatClothInteractorValue Damping_Coefficient; // 0x13a8
    bool Show_Debug; // 0x13b0
    char pad_13b1[0x3];
    FFloatClothInteractorValue Gravity_Scale; // 0x13b4
    FBoolClothInteractorValue UseGravityOverride; // 0x13bc
    char pad_13be[0x2];
    FVectorClothInteractorValue Gravity_Override; // 0x13c0
    FVector2DClothInteractorValue Tether_Stiffness; // 0x13d0
    FFloatClothInteractorValue Edge_Stiffness; // 0x13dc
    FFloatClothInteractorValue Bending_Stiffness; // 0x13e4
    FFloatClothInteractorValue Area_Stiffness; // 0x13ec
    FVectorClothInteractorValue Linear_Velocity_Scale; // 0x13f4
    FFloatClothInteractorValue Angular_Velocity_Scale; // 0x1404
    FFloatClothInteractorValue Fictitious_Angular_Scale; // 0x140c
    FFloatClothInteractorValue Wind_Velocity_Scale; // 0x1414
    FIntClothInteractorValue Interation_Count; // 0x141c
    FIntClothInteractorValue Subdivision_Count; // 0x1424
    char pad_142c[0x4];
    UObject* Caller; // 0x1430
    float PreviousClothAlpha; // 0x1438
    float BlendTime; // 0x143c
    FVector2D ActiveAnimDriveStiffness; // 0x1440
    FVector2D ActiveAnimDriveDamping; // 0x1448
    float LastAnimDriveVelocityScale; // 0x1450
    bool Targets_Only; // 0x1454
    char pad_1455[0xb];
    static UABP_Robe_ClothJoints_Base_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void GetVelocityActor(AActor*& NewParam, AActor* CallFunc_GetOwningActor_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void GetSpeed(float& Speed, AActor* CallFunc_GetVelocityActor_NewParam, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue);
    void UpdateVelocityAnimDrive(FVector2D LocalAnimDriveStiffness, float AnimDriveVelocityScale, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetSpeed_Speed, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_MapRangeClamped_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, TArray<FName>& CallFunc_Map_Keys_Keys, FName CallFunc_Array_Get_Item, FString CallFunc_Conv_NameToString_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_ShouldProcessClothingAsset_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Conv_Vector2dToString_ReturnValue);
    void UpdateClothAlpha(float DeltaTime, float DeltaAlpha, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
    bool ShouldProcessClothingAsset(FString ClothingAsset, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_FindSubstring_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void Restore_Clothing_Asset_Values(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, UChaosClothingSimulationInteractor* K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor, bool K2Node_DynamicCast_bSuccess, TArray<FName>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_ShouldProcessClothingAsset_ReturnValue, UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess_1);
    void Restore_Cloth_Interactor_Values(UChaosClothingInteractor* ChaosClothInteractor, UChaosClothingSimulationInteractor* ChaosClothSimInterator, UChaosClothSharedSimConfig* ChaosClothSharedSimConfig, UChaosClothConfig* ChaosClothConfig, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array);
    void Set_Cloth_Interactor_Values(UChaosClothingInteractor* ChaosClothInteractor, UChaosClothingSimulationInteractor* ChaosClothSimInterator, float DefaultWindVelocityScale, UChaosClothSharedSimConfig* ChaosClothSharedSimConfig, UChaosClothConfig* ChaosClothConfig, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_EvaluateIntClothInteractorValue_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32_t CallFunc_EvaluateIntClothInteractorValue_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array);
    void Update_Cloth_Target(bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FTransform CallFunc_GetTransformBP_ReturnValue, FTransform CallFunc_GetTransformBP_ReturnValue_1, FTransform CallFunc_GetTransformBP_ReturnValue_2);
    void Set_Clothing_Asset_Values(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, UChaosClothingSimulationInteractor* K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor, bool K2Node_DynamicCast_bSuccess, TArray<FName>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_ShouldProcessClothingAsset_ReturnValue, UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess_1);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_2585B5A94FF85B361E3034931BCB0624();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FB17C4724885D341E2012B9B4FF5781E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_A6077BAE40160E78E9E8C690781E2893();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FA19EDC14B7EEBA1388BFC9C77A50936();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_5EEAE11C437407E030FA068B5DF9635C();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void BlueprintInitializeAnimation0();
    void OnClothTargetEnd();
    void OnClothTargetStart(FClothMountTargets& ClothMountTargets, UObject* Caller, bool BlendIn, bool TargetsOnly);
    void ExecuteUbergraph_ABP_Robe_ClothJoints_Base(int32_t EntryPoint, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, float K2Node_Event_DeltaTimeX, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, AActor* CallFunc_GetOwningActor_ReturnValue);
}; // Size: 0x1460
#pragma pack(pop)
