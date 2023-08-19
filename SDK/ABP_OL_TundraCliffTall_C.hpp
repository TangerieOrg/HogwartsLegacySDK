#pragma once
#include <cstdint>
#include "ABP_OL_Spline_Parent_C.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USplineComponent;
class UMaterialInterface;
class UStaticMesh;
class USplineMeshComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_OL_TundraCliffTall_C : public ABP_OL_Spline_Parent_C {
public:
    USplineComponent* Spline; // 0x3c0
    float SectionLength; // 0x3c8
    char pad_3cc[0x4];
    UStaticMesh* Static_Mesh_01; // 0x3d0
    UStaticMesh* Static_Mesh_02; // 0x3d8
    UStaticMesh* Static_Mesh_03; // 0x3e0
    FRandomStream Random_Seed; // 0x3e8
    bool Random_Meshes; // 0x3f0
    char pad_3f1[0x7];
    UMaterialInterface* Material_Override_01; // 0x3f8
    UMaterialInterface* Material_Override_02; // 0x400
    UMaterialInterface* Material_Override_03; // 0x408
    static ABP_OL_TundraCliffTall_C* StaticClass();
    void UserConstructionScript(int32_t RamdonInt, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, UStaticMesh* K2Node_Select_Default, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, FTransform Temp_struct_Variable, int32_t Temp_int_Variable_3, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, UStaticMesh* K2Node_Select_Default_1, UStaticMesh* K2Node_Select_Default_2, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32_t Temp_int_Variable_4, UMaterialInterface* K2Node_Select_Default_3, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_ClampVectorSize_ReturnValue_1);
}; // Size: 0x410
#pragma pack(pop)
