#pragma once
#include <cstdint>
#include "UEnvQueryContext_BlueprintBase.hpp"
class UObject;
class UBlackboardComponent;
class AActor;
#pragma pack(push, 1)
class UBP_EQS_Creature_QueryContext_Target_C : public UEnvQueryContext_BlueprintBase {
public:
    static UBP_EQS_Creature_QueryContext_Target_C* StaticClass();
    void ProvideSingleActor0(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x30
#pragma pack(pop)
