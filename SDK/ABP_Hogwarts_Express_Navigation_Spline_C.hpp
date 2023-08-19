#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ESplinePointType\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSplinePoint.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UBoxComponent;
class ATrain;
class UTrainNavigationSplineComponent;
class UPrimitiveComponent;
class USceneComponent;
class UTrainManager;
#pragma pack(push, 1)
class ABP_Hogwarts_Express_Navigation_Spline_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UBoxComponent* EndOfTrackTrigger; // 0x250
    UTrainNavigationSplineComponent* TrainNavigationSpline; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    static ABP_Hogwarts_Express_Navigation_Spline_C* StaticClass();
    void ReverseSplinePoints(TArray<FSplinePoint> SplinePoints, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t Temp_int_Variable, ESplinePointType::Type CallFunc_GetSplinePointType_ReturnValue, FVector CallFunc_GetScaleAtSplinePoint_ReturnValue, FRotator CallFunc_GetRotationAtSplinePoint_ReturnValue, FVector CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, FVector CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FSplinePoint K2Node_MakeStruct_SplinePoint, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_BeginTransaction_ReturnValue, int32_t CallFunc_EndTransaction_ReturnValue);
    void UserConstructionScript0(int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, FRotator CallFunc_GetRotationAtSplinePoint_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Hogwarts_Express_Navigation_Spline(int32_t EntryPoint, UTrainManager* CallFunc_Get_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, ATrain* K2Node_DynamicCast_AsTrain, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x268
#pragma pack(pop)
