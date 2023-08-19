#include "AActor.hpp"
#include "AUI_BP_MapRegion_C.hpp"
#include "ESplineMeshAxis\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInstance.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
void AUI_BP_MapRegion_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Map/Actors/UI_BP_MapRegion.UI_BP_MapRegion_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AUI_BP_MapRegion_C::Show(bool Visible, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, UMaterialInstance* CallFunc_Array_Get_Item, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Add_IntInt_ReturnValue_1, UMaterialInstance* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Map/Actors/UI_BP_MapRegion.UI_BP_MapRegion_C.Show"));
    struct Params_Show {
        bool Visible; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0xc
        int32_t Temp_int_Array_Index_Variable_1; // 0x10
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x14
        UMaterialInstance* CallFunc_Array_Get_Item; // 0x18
        UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x2c
        UMaterialInstance* CallFunc_Array_Get_Item_1; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x38
        char pad_3c[0x4];
        UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1; // 0x40
        bool K2Node_DynamicCast_bSuccess_1; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue; // 0x49
        char pad_4a[0x2];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x4c
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x50
    }; // Size: 0x51
    Params_Show params{};
    params.Visible = (bool)Visible;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Array_Get_Item = (UMaterialInstance*)CallFunc_Array_Get_Item;
    params.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = (UMaterialInstanceDynamic*)K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (UMaterialInstance*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1 = (UMaterialInstanceDynamic*)K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
AUI_BP_MapRegion_C* AUI_BP_MapRegion_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Map/Actors/UI_BP_MapRegion.UI_BP_MapRegion_C");
    return (AUI_BP_MapRegion_C*)res;
}
void AUI_BP_MapRegion_C::CreateSpline(USplineComponent* SplineComponent, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t Temp_int_Variable, FTransform Temp_struct_Variable, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32_t CallFunc_Add_IntInt_ReturnValue, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Map/Actors/UI_BP_MapRegion.UI_BP_MapRegion_C.CreateSpline"));
    struct Params_CreateSpline {
        USplineComponent* SplineComponent; // 0x0
        int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue; // 0x8
        char pad_c[0x4];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x10
        int32_t CallFunc_Array_Add_ReturnValue; // 0x18
        int32_t Temp_int_Variable; // 0x1c
        FTransform Temp_struct_Variable; // 0x20
        FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0x50
        FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0x5c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x68
        char pad_6c[0x4];
        USplineMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x70
        FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x78
        FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x84
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x90
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x91
        char pad_92[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x94
    }; // Size: 0x98
    Params_CreateSpline params{};
    params.SplineComponent = (USplineComponent*)SplineComponent;
    params.CallFunc_GetNumberOfSplinePoints_ReturnValue = (int32_t)CallFunc_GetNumberOfSplinePoints_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_GetLocationAndTangentAtSplinePoint_Location = (FVector)CallFunc_GetLocationAndTangentAtSplinePoint_Location;
    params.CallFunc_GetLocationAndTangentAtSplinePoint_Tangent = (FVector)CallFunc_GetLocationAndTangentAtSplinePoint_Tangent;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_GetLocationAndTangentAtSplinePoint_Location_1 = (FVector)CallFunc_GetLocationAndTangentAtSplinePoint_Location_1;
    params.CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1 = (FVector)CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void AUI_BP_MapRegion_C::SetupSpline_Event_1(USplineComponent* SplineComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Map/Actors/UI_BP_MapRegion.UI_BP_MapRegion_C.SetupSpline_Event_1"));
    struct Params_SetupSpline_Event_1 {
        USplineComponent* SplineComponent; // 0x0
    }; // Size: 0x8
    Params_SetupSpline_Event_1 params{};
    params.SplineComponent = (USplineComponent*)SplineComponent;
    ProcessEvent(func, &params);
}
void AUI_BP_MapRegion_C::ExecuteUbergraph_UI_BP_MapRegion(int32_t EntryPoint, USplineComponent* K2Node_Event_splineComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Map/Actors/UI_BP_MapRegion.UI_BP_MapRegion_C.ExecuteUbergraph_UI_BP_MapRegion"));
    struct Params_ExecuteUbergraph_UI_BP_MapRegion {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        USplineComponent* K2Node_Event_splineComponent; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_UI_BP_MapRegion params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_splineComponent = (USplineComponent*)K2Node_Event_splineComponent;
    ProcessEvent(func, &params);
}
