#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAblAbilityTask;
class UAblAbility;
class UAblAbilityContext;
#pragma pack(push, 1)
class UAblAbilityInstance : public UObject {
public:
    uint32_t m_CurrentIteration; // 0x28
    char pad_2c[0x4];
    TArray<UAblAbilityTask*> m_AsyncTasks; // 0x30
    TArray<UAblAbilityTask*> m_ActiveAsyncTasks; // 0x40
    TArray<UAblAbilityTask*> m_FinishedASyncTasks; // 0x50
    TArray<UAblAbilityTask*> m_SyncTasks; // 0x60
    TArray<UAblAbilityTask*> m_ActiveSyncTasks; // 0x70
    TArray<UAblAbilityTask*> m_FinishedSyncTasks; // 0x80
    UAblAbility* m_Ability; // 0x90
    UAblAbilityContext* m_Context; // 0x98
    TArray<void*> m_AdditionalTargets; // 0xa0
    char pad_b0[0x30];
    TArray<UAblAbilityTask*> m_FadingTasks; // 0xe0
    char pad_f0[0x8];
    static UAblAbilityInstance* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
