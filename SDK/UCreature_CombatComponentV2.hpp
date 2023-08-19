#pragma once
#include <cstdint>
#include "ECreatureAIState.hpp"
#include "FCreatureCombatAttackImpactData.hpp"
#include "FCreatureCombatDataWrapper.hpp"
#include "FOdcPathSpec.hpp"
#include "UActorComponent.hpp"
class UCreatureCombatProgressionData;
class UCreature_AIComponent;
#pragma pack(push, 1)
class UCreature_CombatComponentV2 : public UActorComponent {
public:
    UCreatureCombatProgressionData* ProgressionData; // 0xc8
    TArray<FCreatureCombatAttackImpactData> AttackImpactDataArray; // 0xd0
    TArray<FCreatureCombatDataWrapper> CombatDataArray; // 0xe0
    FOdcPathSpec AttackExecutionPathSpec; // 0xf0
    bool bStayInCombatDuringCinematic; // 0x140
    char pad_141[0x17];
    static UCreature_CombatComponentV2* StaticClass();
    void OnCreatureAIStateChanged(UCreature_AIComponent* AIComponent, ECreatureAIState PrevAIState);
    int32_t GetCurrentCombatStageIndex();
}; // Size: 0x158
#pragma pack(pop)
