#pragma once
#include <cstdint>
#include "UBTDecorator_BlueprintBase.hpp"
class AAIController;
class APawn;
class UCreature_AIComponent;
#pragma pack(push, 1)
class UBTD_Creature_SpawnSlotExitFlying_C : public UBTDecorator_BlueprintBase {
public:
    static UBTD_Creature_SpawnSlotExitFlying_C* StaticClass();
    bool PerformConditionCheckAI0(AAIController* OwnerController, APawn* ControlledPawn, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0xa0
#pragma pack(pop)
