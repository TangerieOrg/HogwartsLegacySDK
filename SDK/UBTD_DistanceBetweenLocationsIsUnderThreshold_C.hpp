#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FVector.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
class AAIController;
class APawn;
class AActor;
#pragma pack(push, 1)
class UBTD_DistanceBetweenLocationsIsUnderThreshold_C : public UBTDecorator_BlueprintBase {
public:
    FBlackboardKeySelector LocationA; // 0xa0
    FBlackboardKeySelector LocationB; // 0xc8
    float Threshold; // 0xf0
    char pad_f4[0x4];
    static UBTD_DistanceBetweenLocationsIsUnderThreshold_C* StaticClass();
    bool PerformConditionCheckAI0(AAIController* OwnerController, APawn* ControlledPawn, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_1, float CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
    bool PerformConditionCheck0(AActor* OwnerActor, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_1, float CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
}; // Size: 0xf8
#pragma pack(pop)
