#include "AActor.hpp"
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
#include "FPoseLink.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector2DClothInteractorValue.hpp"
#include "FVectorClothInteractorValue.hpp"
#include "UABP_Robe_ClothJoints_Base_C.hpp"
#include "UAnimInstance.hpp"
#include "UChaosClothConfig.hpp"
#include "UChaosClothSharedSimConfig.hpp"
#include "UChaosClothingInteractor.hpp"
#include "UChaosClothingSimulationInteractor.hpp"
#include "UClothingInteractor.hpp"
#include "UClothingSimulationInteractor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
void UABP_Robe_ClothJoints_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_5EEAE11C437407E030FA068B5DF9635C() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_5EEAE11C437407E030FA068B5DF9635C"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_5EEAE11C437407E030FA068B5DF9635C {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_5EEAE11C437407E030FA068B5DF9635C params{};
    ProcessEvent(func, &params);
}
UABP_Robe_ClothJoints_Base_C* UABP_Robe_ClothJoints_Base_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C");
    return (UABP_Robe_ClothJoints_Base_C*)res;
}
bool UABP_Robe_ClothJoints_Base_C::ShouldProcessClothingAsset(FString ClothingAsset, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_FindSubstring_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.ShouldProcessClothingAsset"));
    struct Params_ShouldProcessClothingAsset {
        FString ClothingAsset; // 0x0
        bool ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x14
        int32_t Temp_int_Loop_Counter_Variable; // 0x18
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1c
        FName CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        char pad_2c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x30
        bool CallFunc_Less_IntInt_ReturnValue; // 0x40
        char pad_41[0x3];
        int32_t CallFunc_FindSubstring_ReturnValue; // 0x44
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_ShouldProcessClothingAsset params{};
    params.ClothingAsset = (FString)ClothingAsset;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_FindSubstring_ReturnValue = (int32_t)CallFunc_FindSubstring_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UABP_Robe_ClothJoints_Base_C::UpdateClothAlpha(float DeltaTime, float DeltaAlpha, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.UpdateClothAlpha"));
    struct Params_UpdateClothAlpha {
        float DeltaTime; // 0x0
        float DeltaAlpha; // 0x4
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x8
        float CallFunc_FClamp_ReturnValue; // 0xc
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x10
        char pad_11[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x14
        float CallFunc_FClamp_ReturnValue_1; // 0x18
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x1c
        bool CallFunc_NotEqual_FloatFloat_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_UpdateClothAlpha params{};
    params.DeltaTime = (float)DeltaTime;
    params.DeltaAlpha = (float)DeltaAlpha;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_FClamp_ReturnValue_1 = (float)CallFunc_FClamp_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::Restore_Cloth_Interactor_Values(UChaosClothingInteractor* ChaosClothInteractor, UChaosClothingSimulationInteractor* ChaosClothSimInterator, UChaosClothSharedSimConfig* ChaosClothSharedSimConfig, UChaosClothConfig* ChaosClothConfig, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array) {}
void UABP_Robe_ClothJoints_Base_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UABP_Robe_ClothJoints_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_A6077BAE40160E78E9E8C690781E2893() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_A6077BAE40160E78E9E8C690781E2893"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_A6077BAE40160E78E9E8C690781E2893 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_A6077BAE40160E78E9E8C690781E2893 params{};
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::GetVelocityActor(AActor*& NewParam, AActor* CallFunc_GetOwningActor_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.GetVelocityActor"));
    struct Params_GetVelocityActor {
        AActor* NewParam; // 0x0
        AActor* CallFunc_GetOwningActor_ReturnValue; // 0x8
        AActor* CallFunc_GetAttachParentActor_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetVelocityActor params{};
    params.NewParam = (AActor*)NewParam;
    params.CallFunc_GetOwningActor_ReturnValue = (AActor*)CallFunc_GetOwningActor_ReturnValue;
    params.CallFunc_GetAttachParentActor_ReturnValue = (AActor*)CallFunc_GetAttachParentActor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
void UABP_Robe_ClothJoints_Base_C::Restore_Clothing_Asset_Values(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, UChaosClothingSimulationInteractor* K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor, bool K2Node_DynamicCast_bSuccess, TArray<FName>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_ShouldProcessClothingAsset_ReturnValue, UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.Restore Clothing Asset Values"));
    struct Params_Restore_Clothing_Asset_Values {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue; // 0x10
        UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue; // 0x18
        UChaosClothingSimulationInteractor* K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        TArray<FName> CallFunc_Map_Keys_Keys; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x40
        FName CallFunc_Array_Get_Item; // 0x44
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4c
        char pad_4d[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x50
        bool CallFunc_ShouldProcessClothingAsset_ReturnValue; // 0x60
        char pad_61[0x7];
        UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue; // 0x68
        UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor; // 0x70
        bool K2Node_DynamicCast_bSuccess_1; // 0x78
    }; // Size: 0x79
    Params_Restore_Clothing_Asset_Values params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetOwningComponent_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetOwningComponent_ReturnValue;
    params.CallFunc_GetClothingSimulationInteractor_ReturnValue = (UClothingSimulationInteractor*)CallFunc_GetClothingSimulationInteractor_ReturnValue;
    params.K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor = (UChaosClothingSimulationInteractor*)K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Map_Keys_Keys = (TArray<FName>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_ShouldProcessClothingAsset_ReturnValue = (bool)CallFunc_ShouldProcessClothingAsset_ReturnValue;
    params.CallFunc_GetClothingInteractor_ReturnValue = (UClothingInteractor*)CallFunc_GetClothingInteractor_ReturnValue;
    params.K2Node_DynamicCast_AsChaos_Clothing_Interactor = (UChaosClothingInteractor*)K2Node_DynamicCast_AsChaos_Clothing_Interactor;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
}
void UABP_Robe_ClothJoints_Base_C::GetSpeed(float& Speed, AActor* CallFunc_GetVelocityActor_NewParam, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.GetSpeed"));
    struct Params_GetSpeed {
        float Speed; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetVelocityActor_NewParam; // 0x8
        FVector CallFunc_GetVelocity_ReturnValue; // 0x10
        float CallFunc_VSize_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_GetSpeed params{};
    params.Speed = (float)Speed;
    params.CallFunc_GetVelocityActor_NewParam = (AActor*)CallFunc_GetVelocityActor_NewParam;
    params.CallFunc_GetVelocity_ReturnValue = (FVector)CallFunc_GetVelocity_ReturnValue;
    params.CallFunc_VSize_ReturnValue = (float)CallFunc_VSize_ReturnValue;
    ProcessEvent(func, &params);
    Speed = params.Speed;
}
void UABP_Robe_ClothJoints_Base_C::UpdateVelocityAnimDrive(FVector2D LocalAnimDriveStiffness, float AnimDriveVelocityScale, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetSpeed_Speed, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_MapRangeClamped_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, TArray<FName>& CallFunc_Map_Keys_Keys, FName CallFunc_Array_Get_Item, FString CallFunc_Conv_NameToString_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_ShouldProcessClothingAsset_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Conv_Vector2dToString_ReturnValue) {}
void UABP_Robe_ClothJoints_Base_C::Set_Cloth_Interactor_Values(UChaosClothingInteractor* ChaosClothInteractor, UChaosClothingSimulationInteractor* ChaosClothSimInterator, float DefaultWindVelocityScale, UChaosClothSharedSimConfig* ChaosClothSharedSimConfig, UChaosClothConfig* ChaosClothConfig, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_EvaluateIntClothInteractorValue_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32_t CallFunc_EvaluateIntClothInteractorValue_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array) {}
void UABP_Robe_ClothJoints_Base_C::Update_Cloth_Target(bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FTransform CallFunc_GetTransformBP_ReturnValue, FTransform CallFunc_GetTransformBP_ReturnValue_1, FTransform CallFunc_GetTransformBP_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.Update Cloth Target"));
    struct Params_Update_Cloth_Target {
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        bool CallFunc_IsValid_ReturnValue_1; // 0x2
        bool CallFunc_IsValid_ReturnValue_2; // 0x3
        bool CallFunc_BooleanAND_ReturnValue; // 0x4
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x5
        char pad_6[0xa];
        FTransform CallFunc_GetTransformBP_ReturnValue; // 0x10
        FTransform CallFunc_GetTransformBP_ReturnValue_1; // 0x40
        FTransform CallFunc_GetTransformBP_ReturnValue_2; // 0x70
    }; // Size: 0xa0
    Params_Update_Cloth_Target params{};
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_GetTransformBP_ReturnValue = (FTransform)CallFunc_GetTransformBP_ReturnValue;
    params.CallFunc_GetTransformBP_ReturnValue_1 = (FTransform)CallFunc_GetTransformBP_ReturnValue_1;
    params.CallFunc_GetTransformBP_ReturnValue_2 = (FTransform)CallFunc_GetTransformBP_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::Set_Clothing_Asset_Values(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, UChaosClothingSimulationInteractor* K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor, bool K2Node_DynamicCast_bSuccess, TArray<FName>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_ShouldProcessClothingAsset_ReturnValue, UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.Set Clothing Asset Values"));
    struct Params_Set_Clothing_Asset_Values {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue; // 0x10
        UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue; // 0x18
        UChaosClothingSimulationInteractor* K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        TArray<FName> CallFunc_Map_Keys_Keys; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x40
        FName CallFunc_Array_Get_Item; // 0x44
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4c
        char pad_4d[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x50
        bool CallFunc_ShouldProcessClothingAsset_ReturnValue; // 0x60
        char pad_61[0x7];
        UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue; // 0x68
        UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor; // 0x70
        bool K2Node_DynamicCast_bSuccess_1; // 0x78
    }; // Size: 0x79
    Params_Set_Clothing_Asset_Values params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetOwningComponent_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetOwningComponent_ReturnValue;
    params.CallFunc_GetClothingSimulationInteractor_ReturnValue = (UClothingSimulationInteractor*)CallFunc_GetClothingSimulationInteractor_ReturnValue;
    params.K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor = (UChaosClothingSimulationInteractor*)K2Node_DynamicCast_AsChaos_Clothing_Simulation_Interactor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Map_Keys_Keys = (TArray<FName>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_ShouldProcessClothingAsset_ReturnValue = (bool)CallFunc_ShouldProcessClothingAsset_ReturnValue;
    params.CallFunc_GetClothingInteractor_ReturnValue = (UClothingInteractor*)CallFunc_GetClothingInteractor_ReturnValue;
    params.K2Node_DynamicCast_AsChaos_Clothing_Interactor = (UChaosClothingInteractor*)K2Node_DynamicCast_AsChaos_Clothing_Interactor;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
}
void UABP_Robe_ClothJoints_Base_C::OnClothTargetEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.OnClothTargetEnd"));
    struct Params_OnClothTargetEnd {
    }; // Size: 0x0
    Params_OnClothTargetEnd params{};
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.BlueprintUpdateAnimation"));
    struct Params_BlueprintUpdateAnimation {
        float DeltaTimeX; // 0x0
    }; // Size: 0x4
    Params_BlueprintUpdateAnimation params{};
    params.DeltaTimeX = (float)DeltaTimeX;
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_2585B5A94FF85B361E3034931BCB0624() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_2585B5A94FF85B361E3034931BCB0624"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_2585B5A94FF85B361E3034931BCB0624 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_2585B5A94FF85B361E3034931BCB0624 params{};
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FB17C4724885D341E2012B9B4FF5781E() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FB17C4724885D341E2012B9B4FF5781E"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FB17C4724885D341E2012B9B4FF5781E {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FB17C4724885D341E2012B9B4FF5781E params{};
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FA19EDC14B7EEBA1388BFC9C77A50936() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FA19EDC14B7EEBA1388BFC9C77A50936"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FA19EDC14B7EEBA1388BFC9C77A50936 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FA19EDC14B7EEBA1388BFC9C77A50936 params{};
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::BlueprintInitializeAnimation0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.BlueprintInitializeAnimation"));
    struct Params_BlueprintInitializeAnimation {
    }; // Size: 0x0
    Params_BlueprintInitializeAnimation params{};
    ProcessEvent(func, &params);
}
void UABP_Robe_ClothJoints_Base_C::OnClothTargetStart(FClothMountTargets& ClothMountTargets, UObject* Caller, bool BlendIn, bool TargetsOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.OnClothTargetStart"));
    struct Params_OnClothTargetStart {
        FClothMountTargets ClothMountTargets; // 0x0
        UObject* Caller; // 0x18
        bool BlendIn; // 0x20
        bool TargetsOnly; // 0x21
    }; // Size: 0x22
    Params_OnClothTargetStart params{};
    params.ClothMountTargets = (FClothMountTargets)ClothMountTargets;
    params.Caller = (UObject*)Caller;
    params.BlendIn = (bool)BlendIn;
    params.TargetsOnly = (bool)TargetsOnly;
    ProcessEvent(func, &params);
    ClothMountTargets = params.ClothMountTargets;
}
void UABP_Robe_ClothJoints_Base_C::ExecuteUbergraph_ABP_Robe_ClothJoints_Base(int32_t EntryPoint, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, float K2Node_Event_DeltaTimeX, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, AActor* CallFunc_GetOwningActor_ReturnValue) {}
