#include "ABP_OL_DirtBank_A_C.hpp"
#include "ABP_OL_Spline_Parent_C.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
ABP_OL_DirtBank_A_C* ABP_OL_DirtBank_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/RiverBanks/Blueprints/BP_OL_DirtBank_A.BP_OL_DirtBank_A_C");
    return (ABP_OL_DirtBank_A_C*)res;
}
void ABP_OL_DirtBank_A_C::UserConstructionScript(FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32_t Temp_int_Variable_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, UStaticMesh* K2Node_Select_Default, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_ClampVectorSize_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/RiverBanks/Blueprints/BP_OL_DirtBank_A.BP_OL_DirtBank_A_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FTransform Temp_struct_Variable; // 0x0
        USplineMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x30
        int32_t Temp_int_Variable; // 0x38
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x3c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x40
        float CallFunc_GetSplineLength_ReturnValue; // 0x44
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x48
        char pad_49[0x3];
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x4c
        int32_t CallFunc_FTrunc_ReturnValue; // 0x50
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x54
        char pad_55[0x3];
        int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x58
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x5c
        float CallFunc_Multiply_IntFloat_ReturnValue_1; // 0x60
        int32_t Temp_int_Variable_1; // 0x64
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x68
        FVector CallFunc_ClampVectorSize_ReturnValue; // 0x74
        UStaticMesh* K2Node_Select_Default; // 0x80
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x88
        bool CallFunc_SetStaticMesh_ReturnValue_1; // 0x94
        char pad_95[0x3];
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x98
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0xa4
        FVector CallFunc_ClampVectorSize_ReturnValue_1; // 0xb0
    }; // Size: 0xbc
    Params_UserConstructionScript params{};
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_GetSplineLength_ReturnValue = (float)CallFunc_GetSplineLength_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = (int32_t)CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue_1 = (float)CallFunc_Multiply_IntFloat_ReturnValue_1;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue = (FVector)CallFunc_ClampVectorSize_ReturnValue;
    params.K2Node_Select_Default = (UStaticMesh*)K2Node_Select_Default;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue_1 = (bool)CallFunc_SetStaticMesh_ReturnValue_1;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_ClampVectorSize_ReturnValue_1 = (FVector)CallFunc_ClampVectorSize_ReturnValue_1;
    ProcessEvent(func, &params);
}
