#pragma once
#include <cstdint>
#include "EEnemy_Ability.hpp"
#include "UActorComponent.hpp"
class UAblAbilityComponent;
#pragma pack(push, 1)
class UDynamicBranchComponent : public UActorComponent {
public:
    int32_t SupportedAbilities; // 0xc8
    bool bStartImmediateBranchIfBranchTaskNotActive; // 0xcc
    char pad_cd[0x183];
    UAblAbilityComponent* AbilityComponent; // 0x250
    char pad_258[0x8];
    static UDynamicBranchComponent* StaticClass();
    void StartDynamicBranch(EEnemy_Ability InAbility, EEnemy_Ability InNextAbility, bool bStartImmediate);
    void SetAbilitySupported(EEnemy_Ability InAbility);
    void SetAbilityActive(EEnemy_Ability InAbility, bool bActive);
    bool IsAbilitySupported(EEnemy_Ability InAbility);
    bool IsAbilityActive(EEnemy_Ability InAbility);
    EEnemy_Ability GetActiveAbility();
    void ClearAbilitySupported(EEnemy_Ability InAbility);
}; // Size: 0x260
#pragma pack(pop)
