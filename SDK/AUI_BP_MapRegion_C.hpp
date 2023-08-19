#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ESplineMeshAxis\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USceneComponent;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UMaterialInstance;
class USplineComponent;
class USplineMeshComponent;
#pragma pack(push, 1)
class AUI_BP_MapRegion_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    ESplineMeshAxis::Type regionForwardAxis; // 0x258
    char pad_259[0x7];
    UMaterialInstanceDynamic* regionDynamicMaterial; // 0x260
    TArray<UStaticMeshComponent*> RegionMeshes; // 0x268
    TArray<UMaterialInstance*> DynamicMaterialInstances; // 0x278
    static AUI_BP_MapRegion_C* StaticClass();
    void CreateSpline(USplineComponent* SplineComponent, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t Temp_int_Variable, FTransform Temp_struct_Variable, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32_t CallFunc_Add_IntInt_ReturnValue, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void Show(bool Visible, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, UMaterialInstance* CallFunc_Array_Get_Item, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Add_IntInt_ReturnValue_1, UMaterialInstance* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void ReceiveBeginPlay0();
    void SetupSpline_Event_1(USplineComponent* SplineComponent);
    void ExecuteUbergraph_UI_BP_MapRegion(int32_t EntryPoint, USplineComponent* K2Node_Event_splineComponent);
}; // Size: 0x288
#pragma pack(pop)
