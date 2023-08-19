#include "FQueueReactionParams.hpp"
#include "UAblAbilityComponent.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionComponent.hpp"
#include "UAblReactionData.hpp"
#include "UActorComponent.hpp"
#include "UAnimationArchitectComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
UAblReactionComponent* UAblReactionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblReactionComponent");
    return (UAblReactionComponent*)res;
}
UAblReactionData* UAblReactionComponent::QueueReaction(FQueueReactionParams& ReactionParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.QueueReaction"));
    struct Params_QueueReaction {
        FQueueReactionParams ReactionParams; // 0x0
        UAblReactionData* ReturnValue; // 0x78
    }; // Size: 0x80
    Params_QueueReaction params{};
    params.ReactionParams = (FQueueReactionParams)ReactionParams;
    ProcessEvent(func, &params);
    ReactionParams = params.ReactionParams;
    return (UAblReactionData*)params.ReturnValue;
}
UAblReactionData* UAblReactionComponent::QueueGivenReactionAbility(UClass* ReactionAbility, FQueueReactionParams& ReactionParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.QueueGivenReactionAbility"));
    struct Params_QueueGivenReactionAbility {
        UClass* ReactionAbility; // 0x0
        FQueueReactionParams ReactionParams; // 0x8
        UAblReactionData* ReturnValue; // 0x80
    }; // Size: 0x88
    Params_QueueGivenReactionAbility params{};
    params.ReactionAbility = (UClass*)ReactionAbility;
    params.ReactionParams = (FQueueReactionParams)ReactionParams;
    ProcessEvent(func, &params);
    ReactionParams = params.ReactionParams;
    return (UAblReactionData*)params.ReturnValue;
}
void UAblReactionComponent::HandleReactionAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.HandleReactionAbilityInterrupt"));
    struct Params_HandleReactionAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_HandleReactionAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
UAblReactionData* UAblReactionComponent::QueueGivenReactionAbilities(TArray<UClass*> ReactionAbilities, FQueueReactionParams& ReactionParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.QueueGivenReactionAbilities"));
    struct Params_QueueGivenReactionAbilities {
        TArray<UClass*> ReactionAbilities; // 0x0
        FQueueReactionParams ReactionParams; // 0x10
        UAblReactionData* ReturnValue; // 0x88
    }; // Size: 0x90
    Params_QueueGivenReactionAbilities params{};
    params.ReactionAbilities = (TArray<UClass*>)ReactionAbilities;
    params.ReactionParams = (FQueueReactionParams)ReactionParams;
    ProcessEvent(func, &params);
    ReactionParams = params.ReactionParams;
    return (UAblReactionData*)params.ReturnValue;
}
FQueueReactionParams UAblReactionComponent::MakeReactionParamsFromReactionData(UAblReactionData* ReactionData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.MakeReactionParamsFromReactionData"));
    struct Params_MakeReactionParamsFromReactionData {
        UAblReactionData* ReactionData; // 0x0
        FQueueReactionParams ReturnValue; // 0x8
    }; // Size: 0x80
    Params_MakeReactionParamsFromReactionData params{};
    params.ReactionData = (UAblReactionData*)ReactionData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQueueReactionParams)params.ReturnValue;
}
bool UAblReactionComponent::IsAnyReactionRunning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.IsAnyReactionRunning"));
    struct Params_IsAnyReactionRunning {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnyReactionRunning params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAblReactionComponent::HandleReactionAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.HandleReactionAbilityStart"));
    struct Params_HandleReactionAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_HandleReactionAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UAblReactionComponent::HandleReactionAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.HandleReactionAbilityEnd"));
    struct Params_HandleReactionAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_HandleReactionAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UAblReactionComponent::HandleReactionAbilityBranch(UAblAbilityContext* CurrentContext, UAblAbilityContext* NextContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.HandleReactionAbilityBranch"));
    struct Params_HandleReactionAbilityBranch {
        UAblAbilityContext* CurrentContext; // 0x0
        UAblAbilityContext* NextContext; // 0x8
    }; // Size: 0x10
    Params_HandleReactionAbilityBranch params{};
    params.CurrentContext = (UAblAbilityContext*)CurrentContext;
    params.NextContext = (UAblAbilityContext*)NextContext;
    ProcessEvent(func, &params);
}
void UAblReactionComponent::EnableReactions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.EnableReactions"));
    struct Params_EnableReactions {
    }; // Size: 0x0
    Params_EnableReactions params{};
    ProcessEvent(func, &params);
}
void UAblReactionComponent::DisableReactions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionComponent.DisableReactions"));
    struct Params_DisableReactions {
    }; // Size: 0x0
    Params_DisableReactions params{};
    ProcessEvent(func, &params);
}
