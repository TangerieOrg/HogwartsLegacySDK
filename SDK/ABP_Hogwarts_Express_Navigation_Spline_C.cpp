#include "AActor.hpp"
#include "ABP_Hogwarts_Express_Navigation_Spline_C.hpp"
#include "ATrain.hpp"
#include "ESplinePointType\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSplinePoint.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UTrainManager.hpp"
#include "UTrainNavigationSplineComponent.hpp"
void ABP_Hogwarts_Express_Navigation_Spline_C::ReverseSplinePoints(TArray<FSplinePoint> SplinePoints, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t Temp_int_Variable, ESplinePointType::Type CallFunc_GetSplinePointType_ReturnValue, FVector CallFunc_GetScaleAtSplinePoint_ReturnValue, FRotator CallFunc_GetRotationAtSplinePoint_ReturnValue, FVector CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, FVector CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FSplinePoint K2Node_MakeStruct_SplinePoint, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_BeginTransaction_ReturnValue, int32_t CallFunc_EndTransaction_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HogwartsExpress/BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C.ReverseSplinePoints"));
    struct Params_ReverseSplinePoints {
        TArray<FSplinePoint> SplinePoints; // 0x0
        int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue; // 0x10
        int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue_1; // 0x14
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x18
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x1c
        int32_t Temp_int_Variable; // 0x20
        ESplinePointType::Type CallFunc_GetSplinePointType_ReturnValue; // 0x24
        char pad_25[0x3];
        FVector CallFunc_GetScaleAtSplinePoint_ReturnValue; // 0x28
        FRotator CallFunc_GetRotationAtSplinePoint_ReturnValue; // 0x34
        FVector CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue; // 0x40
        FVector CallFunc_GetArriveTangentAtSplinePoint_ReturnValue; // 0x4c
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x58
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x64
        FVector CallFunc_GetLocationAtSplinePoint_ReturnValue; // 0x70
        int32_t CallFunc_Subtract_IntInt_ReturnValue_2; // 0x7c
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x80
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x84
        char pad_85[0x3];
        FSplinePoint K2Node_MakeStruct_SplinePoint; // 0x88
        int32_t CallFunc_Array_Add_ReturnValue; // 0xcc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xd0
        int32_t CallFunc_BeginTransaction_ReturnValue; // 0xd4
        int32_t CallFunc_EndTransaction_ReturnValue; // 0xd8
    }; // Size: 0xdc
    Params_ReverseSplinePoints params{};
    params.SplinePoints = (TArray<FSplinePoint>)SplinePoints;
    params.CallFunc_GetNumberOfSplinePoints_ReturnValue = (int32_t)CallFunc_GetNumberOfSplinePoints_ReturnValue;
    params.CallFunc_GetNumberOfSplinePoints_ReturnValue_1 = (int32_t)CallFunc_GetNumberOfSplinePoints_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_GetSplinePointType_ReturnValue = (ESplinePointType::Type)CallFunc_GetSplinePointType_ReturnValue;
    params.CallFunc_GetScaleAtSplinePoint_ReturnValue = (FVector)CallFunc_GetScaleAtSplinePoint_ReturnValue;
    params.CallFunc_GetRotationAtSplinePoint_ReturnValue = (FRotator)CallFunc_GetRotationAtSplinePoint_ReturnValue;
    params.CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue = (FVector)CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue;
    params.CallFunc_GetArriveTangentAtSplinePoint_ReturnValue = (FVector)CallFunc_GetArriveTangentAtSplinePoint_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.CallFunc_GetLocationAtSplinePoint_ReturnValue = (FVector)CallFunc_GetLocationAtSplinePoint_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_2 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_2;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.K2Node_MakeStruct_SplinePoint = (FSplinePoint)K2Node_MakeStruct_SplinePoint;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_BeginTransaction_ReturnValue = (int32_t)CallFunc_BeginTransaction_ReturnValue;
    params.CallFunc_EndTransaction_ReturnValue = (int32_t)CallFunc_EndTransaction_ReturnValue;
    ProcessEvent(func, &params);
}
ABP_Hogwarts_Express_Navigation_Spline_C* ABP_Hogwarts_Express_Navigation_Spline_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/HogwartsExpress/BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C");
    return (ABP_Hogwarts_Express_Navigation_Spline_C*)res;
}
void ABP_Hogwarts_Express_Navigation_Spline_C::UserConstructionScript0(int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, FRotator CallFunc_GetRotationAtSplinePoint_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HogwartsExpress/BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue; // 0x0
        FVector CallFunc_GetLocationAtSplinePoint_ReturnValue; // 0x4
        FRotator CallFunc_GetRotationAtSplinePoint_ReturnValue; // 0x10
        char pad_1c[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x20
        FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult; // 0x50
    }; // Size: 0xd8
    Params_UserConstructionScript params{};
    params.CallFunc_GetNumberOfSplinePoints_ReturnValue = (int32_t)CallFunc_GetNumberOfSplinePoints_ReturnValue;
    params.CallFunc_GetLocationAtSplinePoint_ReturnValue = (FVector)CallFunc_GetLocationAtSplinePoint_ReturnValue;
    params.CallFunc_GetRotationAtSplinePoint_ReturnValue = (FRotator)CallFunc_GetRotationAtSplinePoint_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_K2_SetWorldTransform_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldTransform_SweepHitResult;
    ProcessEvent(func, &params);
}
void ABP_Hogwarts_Express_Navigation_Spline_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HogwartsExpress/BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Hogwarts_Express_Navigation_Spline_C::ExecuteUbergraph_BP_Hogwarts_Express_Navigation_Spline(int32_t EntryPoint, UTrainManager* CallFunc_Get_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, ATrain* K2Node_DynamicCast_AsTrain, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HogwartsExpress/BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C.ExecuteUbergraph_BP_Hogwarts_Express_Navigation_Spline"));
    struct Params_ExecuteUbergraph_BP_Hogwarts_Express_Navigation_Spline {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UTrainManager* CallFunc_Get_ReturnValue; // 0x8
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent; // 0x10
        AActor* K2Node_ComponentBoundEvent_OtherActor; // 0x18
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp; // 0x20
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex; // 0x28
        bool K2Node_ComponentBoundEvent_bFromSweep; // 0x2c
        char pad_2d[0x3];
        FHitResult K2Node_ComponentBoundEvent_SweepResult; // 0x30
        ATrain* K2Node_DynamicCast_AsTrain; // 0xb8
        bool K2Node_DynamicCast_bSuccess; // 0xc0
    }; // Size: 0xc1
    Params_ExecuteUbergraph_BP_Hogwarts_Express_Navigation_Spline params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UTrainManager*)CallFunc_Get_ReturnValue;
    params.K2Node_ComponentBoundEvent_OverlappedComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent;
    params.K2Node_ComponentBoundEvent_OtherActor = (AActor*)K2Node_ComponentBoundEvent_OtherActor;
    params.K2Node_ComponentBoundEvent_OtherComp = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex;
    params.K2Node_ComponentBoundEvent_bFromSweep = (bool)K2Node_ComponentBoundEvent_bFromSweep;
    params.K2Node_ComponentBoundEvent_SweepResult = (FHitResult)K2Node_ComponentBoundEvent_SweepResult;
    params.K2Node_DynamicCast_AsTrain = (ATrain*)K2Node_DynamicCast_AsTrain;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
