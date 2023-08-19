#include "ABP_RegionSpline_C.hpp"
#include "APhoenixMapRegion.hpp"
#include "E_RegionNames\Type.hpp"
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
ABP_RegionSpline_C* ABP_RegionSpline_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_RegionSpline.BP_RegionSpline_C");
    return (ABP_RegionSpline_C*)res;
}
void ABP_RegionSpline_C::CreateSpline(USplineComponent* Spline_Component, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32_t Temp_int_Variable, FTransform Temp_struct_Variable, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32_t CallFunc_Add_IntInt_ReturnValue, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_RegionSpline.BP_RegionSpline_C.CreateSpline"));
    struct Params_CreateSpline {
        USplineComponent* Spline_Component; // 0x0
        int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue; // 0x8
        char pad_c[0x4];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x10
        int32_t Temp_int_Variable; // 0x18
        char pad_1c[0x4];
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
    params.Spline_Component = (USplineComponent*)Spline_Component;
    params.CallFunc_GetNumberOfSplinePoints_ReturnValue = (int32_t)CallFunc_GetNumberOfSplinePoints_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
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
void ABP_RegionSpline_C::ReverseSplineOrder(TArray<FVector> NewLocationArray, int32_t LastIndex, int32_t Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_1, FVector CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_RegionSpline.BP_RegionSpline_C.ReverseSplineOrder"));
    struct Params_ReverseSplineOrder {
        TArray<FVector> NewLocationArray; // 0x0
        int32_t LastIndex; // 0x10
        int32_t Temp_int_Variable; // 0x14
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1c
        int32_t Temp_int_Variable_1; // 0x20
        FVector CallFunc_Array_Get_Item; // 0x24
        bool CallFunc_LessEqual_IntInt_ReturnValue_1; // 0x30
        char pad_31[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x34
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x38
        FVector CallFunc_GetLocationAtSplinePoint_ReturnValue; // 0x3c
        int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue; // 0x48
        int32_t CallFunc_Array_Add_ReturnValue; // 0x4c
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x50
    }; // Size: 0x54
    Params_ReverseSplineOrder params{};
    params.NewLocationArray = (TArray<FVector>)NewLocationArray;
    params.LastIndex = (int32_t)LastIndex;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_Array_Get_Item = (FVector)CallFunc_Array_Get_Item;
    params.CallFunc_LessEqual_IntInt_ReturnValue_1 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_GetLocationAtSplinePoint_ReturnValue = (FVector)CallFunc_GetLocationAtSplinePoint_ReturnValue;
    params.CallFunc_GetNumberOfSplinePoints_ReturnValue = (int32_t)CallFunc_GetNumberOfSplinePoints_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_RegionSpline_C::Show(bool Visible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_RegionSpline.BP_RegionSpline_C.Show"));
    struct Params_Show {
        bool Visible; // 0x0
    }; // Size: 0x1
    Params_Show params{};
    params.Visible = (bool)Visible;
    ProcessEvent(func, &params);
}
void ABP_RegionSpline_C::UserConstructionScript(E_RegionNames::Type Temp_byte_Variable, FLinearColor CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_RegionSpline.BP_RegionSpline_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        E_RegionNames::Type Temp_byte_Variable; // 0x0
        char pad_1[0x3];
        FLinearColor CallFunc_Map_Find_Value; // 0x4
        bool CallFunc_Map_Find_ReturnValue; // 0x14
    }; // Size: 0x15
    Params_UserConstructionScript params{};
    params.Temp_byte_Variable = (E_RegionNames::Type)Temp_byte_Variable;
    params.CallFunc_Map_Find_Value = (FLinearColor)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    ProcessEvent(func, &params);
}
