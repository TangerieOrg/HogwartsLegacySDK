#include "AActor.hpp"
#include "EComponentMobility\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UBP_WorldEvent_DropComponentsToGround_C.hpp"
#include "UFunction.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
UBP_WorldEvent_DropComponentsToGround_C* UBP_WorldEvent_DropComponentsToGround_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C");
    return (UBP_WorldEvent_DropComponentsToGround_C*)res;
}
void UBP_WorldEvent_DropComponentsToGround_C::DropComponentToGround(USceneComponent* Component, FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_GetForwardVector_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector K2Node_Select_Default, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_RandomFloatInRange_ReturnValue_1, TArray<AActor*>& Temp_object_Variable, FVector K2Node_MathExpression_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_ProjectVectorOnToPlane_ReturnValue, FVector CallFunc_ProjectVectorOnToPlane_ReturnValue_1, FRotator CallFunc_MakeRotFromXZ_ReturnValue, FRotator CallFunc_MakeRotFromXZ_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C.DropComponentToGround"));
    struct Params_DropComponentToGround {
        USceneComponent* Component; // 0x0
        FVector CallFunc_GetComponentBounds_Origin; // 0x8
        FVector CallFunc_GetComponentBounds_BoxExtent; // 0x14
        float CallFunc_GetComponentBounds_SphereRadius; // 0x20
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x24
        FRotator CallFunc_K2_GetComponentRotation_ReturnValue; // 0x30
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x3c
        float CallFunc_BreakRotator_Roll; // 0x48
        float CallFunc_BreakRotator_Pitch; // 0x4c
        float CallFunc_BreakRotator_Yaw; // 0x50
        FVector CallFunc_GetForwardVector_ReturnValue_1; // 0x54
        bool Temp_bool_Variable; // 0x60
        char pad_61[0x3];
        float CallFunc_RandomFloatInRange_ReturnValue; // 0x64
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x68
        FVector K2Node_Select_Default; // 0x74
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult; // 0x80
        float CallFunc_RandomFloatInRange_ReturnValue_1; // 0x108
        char pad_10c[0x4];
        TArray<AActor*> Temp_object_Variable; // 0x110
        FVector K2Node_MathExpression_ReturnValue; // 0x120
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x12c
        FHitResult CallFunc_LineTraceSingle_OutHit; // 0x138
        bool CallFunc_LineTraceSingle_ReturnValue; // 0x1c0
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x1c1
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x1c2
        char pad_1c3[0x1];
        float CallFunc_BreakHitResult_Time; // 0x1c4
        float CallFunc_BreakHitResult_Distance; // 0x1c8
        FVector CallFunc_BreakHitResult_Location; // 0x1cc
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0x1d8
        FVector CallFunc_BreakHitResult_Normal; // 0x1e4
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0x1f0
        char pad_1fc[0x4];
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0x200
        AActor* CallFunc_BreakHitResult_HitActor; // 0x208
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0x210
        FName CallFunc_BreakHitResult_HitBoneName; // 0x218
        int32_t CallFunc_BreakHitResult_HitItem; // 0x220
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x224
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x228
        FVector CallFunc_BreakHitResult_TraceStart; // 0x22c
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x238
        FVector CallFunc_ProjectVectorOnToPlane_ReturnValue; // 0x244
        FVector CallFunc_ProjectVectorOnToPlane_ReturnValue_1; // 0x250
        FRotator CallFunc_MakeRotFromXZ_ReturnValue; // 0x25c
        FRotator CallFunc_MakeRotFromXZ_ReturnValue_1; // 0x268
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1; // 0x274
        float CallFunc_BreakRotator_Roll_1; // 0x2fc
        float CallFunc_BreakRotator_Pitch_1; // 0x300
        float CallFunc_BreakRotator_Yaw_1; // 0x304
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x308
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x314
        FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult; // 0x318
        FRotator CallFunc_MakeRotator_ReturnValue_1; // 0x3a0
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2; // 0x3ac
    }; // Size: 0x434
    Params_DropComponentToGround params{};
    params.Component = (USceneComponent*)Component;
    params.CallFunc_GetComponentBounds_Origin = (FVector)CallFunc_GetComponentBounds_Origin;
    params.CallFunc_GetComponentBounds_BoxExtent = (FVector)CallFunc_GetComponentBounds_BoxExtent;
    params.CallFunc_GetComponentBounds_SphereRadius = (float)CallFunc_GetComponentBounds_SphereRadius;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_K2_GetComponentRotation_ReturnValue = (FRotator)CallFunc_K2_GetComponentRotation_ReturnValue;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_GetForwardVector_ReturnValue_1 = (FVector)CallFunc_GetForwardVector_ReturnValue_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_RandomFloatInRange_ReturnValue = (float)CallFunc_RandomFloatInRange_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.K2Node_Select_Default = (FVector)K2Node_Select_Default;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult;
    params.CallFunc_RandomFloatInRange_ReturnValue_1 = (float)CallFunc_RandomFloatInRange_ReturnValue_1;
    params.Temp_object_Variable = (TArray<AActor*>)Temp_object_Variable;
    params.K2Node_MathExpression_ReturnValue = (FVector)K2Node_MathExpression_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_LineTraceSingle_OutHit = (FHitResult)CallFunc_LineTraceSingle_OutHit;
    params.CallFunc_LineTraceSingle_ReturnValue = (bool)CallFunc_LineTraceSingle_ReturnValue;
    params.CallFunc_BreakHitResult_bBlockingHit = (bool)CallFunc_BreakHitResult_bBlockingHit;
    params.CallFunc_BreakHitResult_bInitialOverlap = (bool)CallFunc_BreakHitResult_bInitialOverlap;
    params.CallFunc_BreakHitResult_Time = (float)CallFunc_BreakHitResult_Time;
    params.CallFunc_BreakHitResult_Distance = (float)CallFunc_BreakHitResult_Distance;
    params.CallFunc_BreakHitResult_Location = (FVector)CallFunc_BreakHitResult_Location;
    params.CallFunc_BreakHitResult_ImpactPoint = (FVector)CallFunc_BreakHitResult_ImpactPoint;
    params.CallFunc_BreakHitResult_Normal = (FVector)CallFunc_BreakHitResult_Normal;
    params.CallFunc_BreakHitResult_ImpactNormal = (FVector)CallFunc_BreakHitResult_ImpactNormal;
    params.CallFunc_BreakHitResult_PhysMat = (UPhysicalMaterial*)CallFunc_BreakHitResult_PhysMat;
    params.CallFunc_BreakHitResult_HitActor = (AActor*)CallFunc_BreakHitResult_HitActor;
    params.CallFunc_BreakHitResult_HitComponent = (UPrimitiveComponent*)CallFunc_BreakHitResult_HitComponent;
    params.CallFunc_BreakHitResult_HitBoneName = (FName)CallFunc_BreakHitResult_HitBoneName;
    params.CallFunc_BreakHitResult_HitItem = (int32_t)CallFunc_BreakHitResult_HitItem;
    params.CallFunc_BreakHitResult_ElementIndex = (int32_t)CallFunc_BreakHitResult_ElementIndex;
    params.CallFunc_BreakHitResult_FaceIndex = (int32_t)CallFunc_BreakHitResult_FaceIndex;
    params.CallFunc_BreakHitResult_TraceStart = (FVector)CallFunc_BreakHitResult_TraceStart;
    params.CallFunc_BreakHitResult_TraceEnd = (FVector)CallFunc_BreakHitResult_TraceEnd;
    params.CallFunc_ProjectVectorOnToPlane_ReturnValue = (FVector)CallFunc_ProjectVectorOnToPlane_ReturnValue;
    params.CallFunc_ProjectVectorOnToPlane_ReturnValue_1 = (FVector)CallFunc_ProjectVectorOnToPlane_ReturnValue_1;
    params.CallFunc_MakeRotFromXZ_ReturnValue = (FRotator)CallFunc_MakeRotFromXZ_ReturnValue;
    params.CallFunc_MakeRotFromXZ_ReturnValue_1 = (FRotator)CallFunc_MakeRotFromXZ_ReturnValue_1;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_1;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_K2_SetWorldLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldLocation_SweepHitResult;
    params.CallFunc_MakeRotator_ReturnValue_1 = (FRotator)CallFunc_MakeRotator_ReturnValue_1;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_2 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_2;
    ProcessEvent(func, &params);
    Temp_object_Variable = params.Temp_object_Variable;
}
void UBP_WorldEvent_DropComponentsToGround_C::StartDroppingComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C.StartDroppingComponents"));
    struct Params_StartDroppingComponents {
    }; // Size: 0x0
    Params_StartDroppingComponents params{};
    ProcessEvent(func, &params);
}
void UBP_WorldEvent_DropComponentsToGround_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBP_WorldEvent_DropComponentsToGround_C::ExecuteUbergraph_BP_WorldEvent_DropComponentsToGround(int32_t EntryPoint, float K2Node_Event_DeltaSeconds, USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C.ExecuteUbergraph_BP_WorldEvent_DropComponentsToGround"));
    struct Params_ExecuteUbergraph_BP_WorldEvent_DropComponentsToGround {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_DeltaSeconds; // 0x4
        USceneComponent* CallFunc_Array_Get_Item; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x14
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ExecuteUbergraph_BP_WorldEvent_DropComponentsToGround params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_Array_Get_Item = (USceneComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
