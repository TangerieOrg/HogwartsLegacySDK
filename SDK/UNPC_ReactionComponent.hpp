#pragma once
#include <cstdint>
#include "ECharacterShutdownPriority.hpp"
#include "EStandardManagedPriority.hpp"
#include "UAblReactionComponent.hpp"
class UAblReactionComponentConfig;
class UObject;
class UAblReactionData;
#pragma pack(push, 1)
class UNPC_ReactionComponent : public UAblReactionComponent {
public:
    char pad_1d0[0x20];
    UAblReactionComponentConfig* Config; // 0x1f0
    char pad_1f8[0x168];
    static UNPC_ReactionComponent* StaticClass();
    void StartSettingReactionsEnabledValue(bool bValue, ECharacterShutdownPriority Priority, UObject* InInstigator);
    void StartSettingReactionsEnabledFromAlliesValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    static bool IsFullBodyReactionQueuedOrRunning(UAblReactionComponent* ReactionComponent);
    void HandleReactionFinished(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent);
    void FinishSettingReactionsEnabledValue(ECharacterShutdownPriority Priority, UObject* InInstigator);
    void FinishSettingReactionsEnabledFromAlliesValue(UObject* InInstigator);
}; // Size: 0x360
#pragma pack(pop)
