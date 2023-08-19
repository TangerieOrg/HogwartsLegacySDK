#include "ABP_OL_Spline_Parent_C.hpp"
#include "ABP_OL_TundraCliffTall_C.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
ABP_OL_TundraCliffTall_C* ABP_OL_TundraCliffTall_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/CliffWall/Blueprints/BP_OL_TundraCliffTall.BP_OL_TundraCliffTall_C");
    return (ABP_OL_TundraCliffTall_C*)res;
}
void ABP_OL_TundraCliffTall_C::UserConstructionScript(int32_t RamdonInt, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, UStaticMesh* K2Node_Select_Default, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, FTransform Temp_struct_Variable, int32_t Temp_int_Variable_3, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, UStaticMesh* K2Node_Select_Default_1, UStaticMesh* K2Node_Select_Default_2, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32_t Temp_int_Variable_4, UMaterialInterface* K2Node_Select_Default_3, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_ClampVectorSize_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/CliffWall/Blueprints/BP_OL_TundraCliffTall.BP_OL_TundraCliffTall_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t RamdonInt; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t Temp_int_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Variable_1; // 0x14
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x1c
        int32_t Temp_int_Variable_2; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x28
        char pad_2c[0x4];
        TArray<UStaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x30
        UStaticMeshComponent* CallFunc_Array_Get_Item; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4c
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x4d
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1; // 0x4e
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2; // 0x4f
        UStaticMesh* K2Node_Select_Default; // 0x50
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0x58
        FTransform Temp_struct_Variable; // 0x60
        int32_t Temp_int_Variable_3; // 0x90
        char pad_94[0x4];
        USplineMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x98
        bool CallFunc_LessEqual_IntInt_ReturnValue_1; // 0xa0
        bool Temp_bool_Variable; // 0xa1
        char pad_a2[0x2];
        float CallFunc_GetSplineLength_ReturnValue; // 0xa4
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xa8
        int32_t CallFunc_FTrunc_ReturnValue; // 0xac
        int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0xb0
        char pad_b4[0x4];
        UStaticMesh* K2Node_Select_Default_1; // 0xb8
        UStaticMesh* K2Node_Select_Default_2; // 0xc0
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0xc8
        bool CallFunc_SetStaticMesh_ReturnValue; // 0xcc
        char pad_cd[0x3];
        float CallFunc_Multiply_IntFloat_ReturnValue_1; // 0xd0
        int32_t Temp_int_Variable_4; // 0xd4
        UMaterialInterface* K2Node_Select_Default_3; // 0xd8
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0xe0
        FVector CallFunc_ClampVectorSize_ReturnValue; // 0xec
        bool CallFunc_IsValid_ReturnValue; // 0xf8
        char pad_f9[0x3];
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0xfc
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0x108
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x114
        FVector CallFunc_ClampVectorSize_ReturnValue_1; // 0x120
    }; // Size: 0x12c
    Params_UserConstructionScript params{};
    params.RamdonInt = (int32_t)RamdonInt;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UStaticMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_Array_Get_Item = (UStaticMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
    params.K2Node_Select_Default = (UStaticMesh*)K2Node_Select_Default;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.Temp_int_Variable_3 = (int32_t)Temp_int_Variable_3;
    params.CallFunc_AddComponent_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue_1 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetSplineLength_ReturnValue = (float)CallFunc_GetSplineLength_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = (int32_t)CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
    params.K2Node_Select_Default_1 = (UStaticMesh*)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (UStaticMesh*)K2Node_Select_Default_2;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue_1 = (float)CallFunc_Multiply_IntFloat_ReturnValue_1;
    params.Temp_int_Variable_4 = (int32_t)Temp_int_Variable_4;
    params.K2Node_Select_Default_3 = (UMaterialInterface*)K2Node_Select_Default_3;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue = (FVector)CallFunc_ClampVectorSize_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_ClampVectorSize_ReturnValue_1 = (FVector)CallFunc_ClampVectorSize_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
