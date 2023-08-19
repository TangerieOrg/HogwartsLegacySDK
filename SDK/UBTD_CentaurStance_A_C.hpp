#pragma once
#include <cstdint>
#include "UBTDecorator_BlueprintBase.hpp"
class AAIController;
class UCentaurCombatComponent;
class APawn;
#pragma pack(push, 1)
class UBTD_CentaurStance_A_C : public UBTDecorator_BlueprintBase {
public:
    static UBTD_CentaurStance_A_C* StaticClass();
    bool PerformConditionCheckAI0(AAIController* OwnerController, APawn* ControlledPawn, UCentaurCombatComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsUsingStanceA_ReturnValue);
}; // Size: 0xa0
#pragma pack(pop)
