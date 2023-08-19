#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
class AAIController;
class APawn;
class AActor;
#pragma pack(push, 1)
class UBTD_Creature_HasTagOnTarget_C : public UBTDecorator_BlueprintBase {
public:
    FName TagID; // 0xa0
    FBlackboardKeySelector TargetActor; // 0xa8
    static UBTD_Creature_HasTagOnTarget_C* StaticClass();
    bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_GetDoesActorTagExistFromOwner_ReturnValue);
    bool PerformConditionCheck(AActor* OwnerActor, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_GetDoesActorTagExistFromOwner_ReturnValue);
}; // Size: 0xd0
#pragma pack(pop)
