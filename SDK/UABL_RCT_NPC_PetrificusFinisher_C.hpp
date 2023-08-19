#pragma once
#include <cstdint>
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class AActor;
#pragma pack(push, 1)
class UABL_RCT_NPC_PetrificusFinisher_C : public UAblReactionAbility {
public:
    static UABL_RCT_NPC_PetrificusFinisher_C* StaticClass();
    void OnCustomEvent(UAblAbilityContext* Context, FName& EventName, AActor* CallFunc_GetSelfActor_ReturnValue);
}; // Size: 0xe0
#pragma pack(pop)
