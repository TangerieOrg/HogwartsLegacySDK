#include "ABP_OL_Spline_Parent_C.hpp"
#include "ABP_OL_TundraCliffWallMed_C.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
ABP_OL_TundraCliffWallMed_C* ABP_OL_TundraCliffWallMed_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/CliffWall/Blueprints/BP_OL_TundraCliffWallMed.BP_OL_TundraCliffWallMed_C");
    return (ABP_OL_TundraCliffWallMed_C*)res;
}
void ABP_OL_TundraCliffWallMed_C::UserConstructionScript(int32_t LoopIndex, int32_t RamdonInt, int32_t Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable_3, FTransform Temp_struct_Variable, int32_t Temp_int_Variable_4, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, UMaterialInterface* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, UMaterialInterface* K2Node_Select_Default_1, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Variable_5, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_3, UMaterialInterface* K2Node_Select_Default_2, int32_t Temp_int_Variable_6, UMaterialInterface* K2Node_Select_Default_3, UMaterialInterface* K2Node_Select_Default_4, int32_t Temp_int_Variable_7, bool CallFunc_IsValid_ReturnValue_1, UStaticMesh* K2Node_Select_Default_5, bool Temp_bool_Variable_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* K2Node_Select_Default_6, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, UStaticMesh* K2Node_Select_Default_7, UStaticMesh* K2Node_Select_Default_8, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_ClampVectorSize_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/CliffWall/Blueprints/BP_OL_TundraCliffWallMed.BP_OL_TundraCliffWallMed_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t LoopIndex; // 0x0
        int32_t RamdonInt; // 0x4
        int32_t Temp_int_Variable; // 0x8
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xc
        char pad_d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        int32_t Temp_int_Variable_1; // 0x14
        int32_t Temp_int_Variable_2; // 0x18
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x20
        int32_t Temp_int_Array_Index_Variable; // 0x24
        int32_t Temp_int_Variable_3; // 0x28
        char pad_2c[0x4];
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
        bool CallFunc_LessEqual_IntInt_ReturnValue_1; // 0x99
        bool Temp_bool_Variable; // 0x9a
        bool Temp_bool_Variable_1; // 0x9b
        char pad_9c[0x4];
        UMaterialInterface* K2Node_Select_Default_1; // 0xa0
        int32_t Temp_int_Loop_Counter_Variable; // 0xa8
        int32_t Temp_int_Variable_5; // 0xac
        bool CallFunc_Less_IntInt_ReturnValue; // 0xb0
        char pad_b1[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0xb4
        UMaterialInterface* K2Node_Select_Default_2; // 0xb8
        int32_t Temp_int_Variable_6; // 0xc0
        char pad_c4[0x4];
        UMaterialInterface* K2Node_Select_Default_3; // 0xc8
        UMaterialInterface* K2Node_Select_Default_4; // 0xd0
        int32_t Temp_int_Variable_7; // 0xd8
        bool CallFunc_IsValid_ReturnValue_1; // 0xdc
        char pad_dd[0x3];
        UStaticMesh* K2Node_Select_Default_5; // 0xe0
        bool Temp_bool_Variable_2; // 0xe8
        char pad_e9[0x7];
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0xf0
        UMaterialInterface* K2Node_Select_Default_6; // 0xf8
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1; // 0x100
        float CallFunc_GetSplineLength_ReturnValue; // 0x108
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x10c
        int32_t CallFunc_FTrunc_ReturnValue; // 0x110
        int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x114
        UStaticMesh* K2Node_Select_Default_7; // 0x118
        UStaticMesh* K2Node_Select_Default_8; // 0x120
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x128
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x12c
        char pad_12d[0x3];
        float CallFunc_Multiply_IntFloat_ReturnValue_1; // 0x130
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x134
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x140
        FVector CallFunc_ClampVectorSize_ReturnValue; // 0x14c
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0x158
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x164
        FVector CallFunc_ClampVectorSize_ReturnValue_1; // 0x170
    }; // Size: 0x17c
    Params_UserConstructionScript params{};
    params.LoopIndex = (int32_t)LoopIndex;
    params.RamdonInt = (int32_t)RamdonInt;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
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
    params.CallFunc_LessEqual_IntInt_ReturnValue_1 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default_1 = (UMaterialInterface*)K2Node_Select_Default_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Variable_5 = (int32_t)Temp_int_Variable_5;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.K2Node_Select_Default_2 = (UMaterialInterface*)K2Node_Select_Default_2;
    params.Temp_int_Variable_6 = (int32_t)Temp_int_Variable_6;
    params.K2Node_Select_Default_3 = (UMaterialInterface*)K2Node_Select_Default_3;
    params.K2Node_Select_Default_4 = (UMaterialInterface*)K2Node_Select_Default_4;
    params.Temp_int_Variable_7 = (int32_t)Temp_int_Variable_7;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.K2Node_Select_Default_5 = (UStaticMesh*)K2Node_Select_Default_5;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.K2Node_Select_Default_6 = (UMaterialInterface*)K2Node_Select_Default_6;
    params.CallFunc_GetMaterial_ReturnValue_1 = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue_1;
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
