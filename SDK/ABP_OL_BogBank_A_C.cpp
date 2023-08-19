#include "ABP_OL_BogBank_A_C.hpp"
#include "ABP_OL_Spline_Parent_C.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
ABP_OL_BogBank_A_C* ABP_OL_BogBank_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/RiverBanks/Blueprints/BP_OL_BogBank_A.BP_OL_BogBank_A_C");
    return (ABP_OL_BogBank_A_C*)res;
}
void ABP_OL_BogBank_A_C::UserConstructionScript(FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32_t Temp_int_Variable_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, UStaticMesh* K2Node_Select_Default, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, int32_t CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/RiverBanks/Blueprints/BP_OL_BogBank_A.BP_OL_BogBank_A_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FTransform Temp_struct_Variable; // 0x0
        USplineMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x30
        int32_t Temp_int_Variable; // 0x38
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x3c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x40
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x44
        char pad_45[0x3];
        int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x48
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x4c
        float CallFunc_Multiply_IntFloat_ReturnValue_1; // 0x50
        int32_t Temp_int_Variable_1; // 0x54
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x58
        FVector CallFunc_ClampVectorSize_ReturnValue; // 0x64
        UStaticMesh* K2Node_Select_Default; // 0x70
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x78
        bool CallFunc_SetStaticMesh_ReturnValue_1; // 0x84
        char pad_85[0x3];
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0x88
        float CallFunc_GetSplineLength_ReturnValue; // 0x94
        FVector CallFunc_ClampVectorSize_ReturnValue_1; // 0x98
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xa4
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0xa8
        int32_t CallFunc_FTrunc_ReturnValue; // 0xb4
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xb8
    }; // Size: 0xb9
    Params_UserConstructionScript params{};
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = (int32_t)CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue_1 = (float)CallFunc_Multiply_IntFloat_ReturnValue_1;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue = (FVector)CallFunc_ClampVectorSize_ReturnValue;
    params.K2Node_Select_Default = (UStaticMesh*)K2Node_Select_Default;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue_1 = (bool)CallFunc_SetStaticMesh_ReturnValue_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetSplineLength_ReturnValue = (float)CallFunc_GetSplineLength_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue_1 = (FVector)CallFunc_ClampVectorSize_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
