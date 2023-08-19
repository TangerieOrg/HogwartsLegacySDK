#include "ECharacterShutdownPriority.hpp"
#include "EStandardManagedPriority.hpp"
#include "UAblReactionComponent.hpp"
#include "UAblReactionComponentConfig.hpp"
#include "UAblReactionData.hpp"
#include "UFunction.hpp"
#include "UNPC_ReactionComponent.hpp"
#include "UObject.hpp"
bool UNPC_ReactionComponent::IsFullBodyReactionQueuedOrRunning(UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_ReactionComponent.IsFullBodyReactionQueuedOrRunning"));
    struct Params_IsFullBodyReactionQueuedOrRunning {
        UAblReactionComponent* ReactionComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsFullBodyReactionQueuedOrRunning params{};
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UNPC_ReactionComponent* UNPC_ReactionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_ReactionComponent");
    return (UNPC_ReactionComponent*)res;
}
void UNPC_ReactionComponent::StartSettingReactionsEnabledValue(bool bValue, ECharacterShutdownPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_ReactionComponent.StartSettingReactionsEnabledValue"));
    struct Params_StartSettingReactionsEnabledValue {
        bool bValue; // 0x0
        ECharacterShutdownPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingReactionsEnabledValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (ECharacterShutdownPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void UNPC_ReactionComponent::StartSettingReactionsEnabledFromAlliesValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_ReactionComponent.StartSettingReactionsEnabledFromAlliesValue"));
    struct Params_StartSettingReactionsEnabledFromAlliesValue {
        bool bValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingReactionsEnabledFromAlliesValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void UNPC_ReactionComponent::HandleReactionFinished(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_ReactionComponent.HandleReactionFinished"));
    struct Params_HandleReactionFinished {
        UAblReactionData* ReactionData; // 0x0
        UAblReactionComponent* ReactionComponent; // 0x8
    }; // Size: 0x10
    Params_HandleReactionFinished params{};
    params.ReactionData = (UAblReactionData*)ReactionData;
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ProcessEvent(func, &params);
}
void UNPC_ReactionComponent::FinishSettingReactionsEnabledValue(ECharacterShutdownPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_ReactionComponent.FinishSettingReactionsEnabledValue"));
    struct Params_FinishSettingReactionsEnabledValue {
        ECharacterShutdownPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingReactionsEnabledValue params{};
    params.Priority = (ECharacterShutdownPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void UNPC_ReactionComponent::FinishSettingReactionsEnabledFromAlliesValue(UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_ReactionComponent.FinishSettingReactionsEnabledFromAlliesValue"));
    struct Params_FinishSettingReactionsEnabledFromAlliesValue {
        UObject* InInstigator; // 0x0
    }; // Size: 0x8
    Params_FinishSettingReactionsEnabledFromAlliesValue params{};
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
