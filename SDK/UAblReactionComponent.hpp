#pragma once
#include <cstdint>
#include "FQueueReactionParams.hpp"
#include "UActorComponent.hpp"
class UAblAbilityComponent;
class UAnimationArchitectComponent;
class UClass;
class UAblReactionData;
class UAblAbilityContext;
#pragma pack(push, 1)
class UAblReactionComponent : public UActorComponent {
public:
    char pad_c8[0x30];
    UAblAbilityComponent* AbleAbilityComp; // 0xf8
    UAnimationArchitectComponent* AnimationArchitectComp; // 0x100
    char pad_108[0xc8];
    static UAblReactionComponent* StaticClass();
    UAblReactionData* QueueReaction(FQueueReactionParams& ReactionParams);
    UAblReactionData* QueueGivenReactionAbility(UClass* ReactionAbility, FQueueReactionParams& ReactionParams);
    UAblReactionData* QueueGivenReactionAbilities(TArray<UClass*> ReactionAbilities, FQueueReactionParams& ReactionParams);
    static FQueueReactionParams MakeReactionParamsFromReactionData(UAblReactionData* ReactionData);
    bool IsAnyReactionRunning();
    void HandleReactionAbilityStart(UAblAbilityContext* Context);
    void HandleReactionAbilityInterrupt(UAblAbilityContext* Context);
    void HandleReactionAbilityEnd(UAblAbilityContext* Context);
    void HandleReactionAbilityBranch(UAblAbilityContext* CurrentContext, UAblAbilityContext* NextContext);
    void EnableReactions();
    void DisableReactions();
}; // Size: 0x1d0
#pragma pack(pop)
