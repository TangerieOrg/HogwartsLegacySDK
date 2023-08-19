#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UEnvQueryContext_BlueprintBase.hpp"
class UObject;
class UBlackboardComponent;
class AActor;
#pragma pack(push, 1)
class UBP_EQS_Creature_QueryContext_FacingLocation_C : public UEnvQueryContext_BlueprintBase {
public:
    static UBP_EQS_Creature_QueryContext_FacingLocation_C* StaticClass();
    void ProvideSingleLocation0(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue);
}; // Size: 0x30
#pragma pack(pop)
