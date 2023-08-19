#include "ABP_OL_Spline_Parent_C.hpp"
#include "ABP_OL_StratifiedCliffWall_C.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
ABP_OL_StratifiedCliffWall_C* ABP_OL_StratifiedCliffWall_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/CliffWall/Blueprints/BP_OL_StratifiedCliffWall.BP_OL_StratifiedCliffWall_C");
    return (ABP_OL_StratifiedCliffWall_C*)res;
}
void ABP_OL_StratifiedCliffWall_C::UserConstructionScript(int32_t RamdomInt, int32_t LoopIndex, int32_t Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable_3, FTransform Temp_struct_Variable, int32_t Temp_int_Variable_4, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, UMaterialInterface* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, UMaterialInterface* K2Node_Select_Default_1, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Variable_5, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_3, UMaterialInterface* K2Node_Select_Default_2, UMaterialInterface* K2Node_Select_Default_3, int32_t Temp_int_Variable_6, int32_t Temp_int_Variable_7, UMaterialInterface* K2Node_Select_Default_4, UStaticMesh* K2Node_Select_Default_5, bool CallFunc_IsValid_ReturnValue_1, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool Temp_bool_Variable_2, UMaterialInterface* K2Node_Select_Default_6, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, UStaticMesh* K2Node_Select_Default_7, UStaticMesh* K2Node_Select_Default_8, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_ClampVectorSize_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/CliffWall/Blueprints/BP_OL_StratifiedCliffWall.BP_OL_StratifiedCliffWall_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t RamdomInt; // 0x0
        int32_t LoopIndex; // 0x4
        int32_t Temp_int_Variable; // 0x8
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xc
        char pad_d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        int32_t Temp_int_Variable_1; // 0x14
        int32_t Temp_int_Variable_2; // 0x18
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x1c
        int32_t Temp_int_Array_Index_Variable; // 0x20
        int32_t Temp_int_Variable_3; // 0x24
        char pad_28[0x8];
        FTransform Temp_struct_Variable; // 0x30
        int32_t Temp_int_Variable_4; // 0x60
        char pad_64[0x4];
        USplineMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x68
        TArray<UStaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x70
        UStaticMeshComponent* CallFunc_Array_Get_Item; // 0x80
        int32_t CallFunc_Array_Length_ReturnValue; // 0x88
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x8c
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1; // 0x8d
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2; // 0x8e
        char pad_8f[0x1];
        UMaterialInterface* K2Node_Select_Default; // 0x90
        bool CallFunc_IsValid_ReturnValue; // 0x98
        char pad_99[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x9c
        bool Temp_bool_Variable; // 0xa0
        bool CallFunc_LessEqual_IntInt_ReturnValue_1; // 0xa1
        bool Temp_bool_Variable_1; // 0xa2
        char pad_a3[0x5];
        UMaterialInterface* K2Node_Select_Default_1; // 0xa8
        int32_t Temp_int_Loop_Counter_Variable; // 0xb0
        int32_t Temp_int_Variable_5; // 0xb4
        bool CallFunc_Less_IntInt_ReturnValue; // 0xb8
        char pad_b9[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0xbc
        UMaterialInterface* K2Node_Select_Default_2; // 0xc0
        UMaterialInterface* K2Node_Select_Default_3; // 0xc8
        int32_t Temp_int_Variable_6; // 0xd0
        int32_t Temp_int_Variable_7; // 0xd4
        UMaterialInterface* K2Node_Select_Default_4; // 0xd8
        UStaticMesh* K2Node_Select_Default_5; // 0xe0
        bool CallFunc_IsValid_ReturnValue_1; // 0xe8
        char pad_e9[0x7];
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0xf0
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1; // 0xf8
        bool Temp_bool_Variable_2; // 0x100
        char pad_101[0x7];
        UMaterialInterface* K2Node_Select_Default_6; // 0x108
        float CallFunc_GetSplineLength_ReturnValue; // 0x110
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x114
        int32_t CallFunc_FTrunc_ReturnValue; // 0x118
        int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x11c
        UStaticMesh* K2Node_Select_Default_7; // 0x120
        UStaticMesh* K2Node_Select_Default_8; // 0x128
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x130
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x134
        char pad_135[0x3];
        float CallFunc_Multiply_IntFloat_ReturnValue_1; // 0x138
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x13c
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x148
        FVector CallFunc_ClampVectorSize_ReturnValue; // 0x154
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0x160
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x16c
        FVector CallFunc_ClampVectorSize_ReturnValue_1; // 0x178
    }; // Size: 0x184
    Params_UserConstructionScript params{};
    params.RamdomInt = (int32_t)RamdomInt;
    params.LoopIndex = (int32_t)LoopIndex;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Variable_3 = (int32_t)Temp_int_Variable_3;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.Temp_int_Variable_4 = (int32_t)Temp_int_Variable_4;
    params.CallFunc_AddComponent_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UStaticMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_Array_Get_Item = (UStaticMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
    params.K2Node_Select_Default = (UMaterialInterface*)K2Node_Select_Default;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_LessEqual_IntInt_ReturnValue_1 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default_1 = (UMaterialInterface*)K2Node_Select_Default_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Variable_5 = (int32_t)Temp_int_Variable_5;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.K2Node_Select_Default_2 = (UMaterialInterface*)K2Node_Select_Default_2;
    params.K2Node_Select_Default_3 = (UMaterialInterface*)K2Node_Select_Default_3;
    params.Temp_int_Variable_6 = (int32_t)Temp_int_Variable_6;
    params.Temp_int_Variable_7 = (int32_t)Temp_int_Variable_7;
    params.K2Node_Select_Default_4 = (UMaterialInterface*)K2Node_Select_Default_4;
    params.K2Node_Select_Default_5 = (UStaticMesh*)K2Node_Select_Default_5;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.CallFunc_GetMaterial_ReturnValue_1 = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue_1;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.K2Node_Select_Default_6 = (UMaterialInterface*)K2Node_Select_Default_6;
    params.CallFunc_GetSplineLength_ReturnValue = (float)CallFunc_GetSplineLength_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = (int32_t)CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
    params.K2Node_Select_Default_7 = (UStaticMesh*)K2Node_Select_Default_7;
    params.K2Node_Select_Default_8 = (UStaticMesh*)K2Node_Select_Default_8;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue_1 = (float)CallFunc_Multiply_IntFloat_ReturnValue_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue = (FVector)CallFunc_ClampVectorSize_ReturnValue;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_ClampVectorSize_ReturnValue_1 = (FVector)CallFunc_ClampVectorSize_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
