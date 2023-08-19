#pragma once
#include <cstdint>
#include "APhoenixMapRegion.hpp"
#include "E_RegionNames\Type.hpp"
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USplineComponent;
class UMaterialInstanceDynamic;
class USplineMeshComponent;
#pragma pack(push, 1)
class ABP_RegionSpline_C : public APhoenixMapRegion {
public:
    USplineComponent* Spline; // 0x290
    char pad_298[0x50];
    UMaterialInstanceDynamic* Material; // 0x2e8
    static ABP_RegionSpline_C* StaticClass();
    void ReverseSplineOrder(TArray<FVector> NewLocationArray, int32_t LastIndex, int32_t Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_1, FVector CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1);
    void Show(bool Visible);
    void CreateSpline(USplineComponent* Spline_Component, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32_t Temp_int_Variable, FTransform Temp_struct_Variable, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32_t CallFunc_Add_IntInt_ReturnValue, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void UserConstructionScript(E_RegionNames::Type Temp_byte_Variable, FLinearColor CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
}; // Size: 0x2f0
#pragma pack(pop)
