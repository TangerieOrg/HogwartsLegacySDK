#pragma once
#include <cstdint>
#include "UAblAbility.hpp"
class UAblAbilityContext;
class UEnemyAIComponent;
class AActor;
#pragma pack(push, 1)
class UABL_Enemy_Shuffle_C : public UAblAbility {
public:
    UAblAbility* NewVar_0; // 0xc8
    static UABL_Enemy_Shuffle_C* StaticClass();
    UAblAbility* OnGetBranchAbility0(UAblAbilityContext* Context, FName& EventName, AActor* CallFunc_GetSelfActor_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0xd0
#pragma pack(pop)
