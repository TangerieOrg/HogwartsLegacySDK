#pragma once
#include <cstdint>
#include "ABP_OL_Spline_Parent_C.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USplineComponent;
class UStaticMesh;
class USplineMeshComponent;
#pragma pack(push, 1)
class ABP_OL_DirtBank_A_C : public ABP_OL_Spline_Parent_C {
public:
    USplineComponent* Spline; // 0x3c0
    float SectionLength; // 0x3c8
    char pad_3cc[0x4];
    UStaticMesh* Static_Mesh_01; // 0x3d0
    UStaticMesh* Static_Mesh_02; // 0x3d8
    UStaticMesh* Static_Mesh_03; // 0x3e0
    UStaticMesh* Static_Mesh_04; // 0x3e8
    FRandomStream Random_Seed; // 0x3f0
    bool Random_Meshes; // 0x3f8
    char pad_3f9[0x7];
    static ABP_OL_DirtBank_A_C* StaticClass();
    void UserConstructionScript(FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32_t Temp_int_Variable_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, UStaticMesh* K2Node_Select_Default, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_ClampVectorSize_ReturnValue_1);
}; // Size: 0x400
#pragma pack(pop)
