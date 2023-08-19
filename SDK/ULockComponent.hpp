#pragma once
#include <cstdint>
#include "ELockLevel.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
class AActor;
#pragma pack(push, 1)
class ULockComponent : public UActorComponent {
public:
    FGameplayTagContainer KeyContainer; // 0xc8
    ELockLevel LockLevel; // 0xe8
    char pad_e9[0x3];
    float LockValue; // 0xec
    bool ConsumeKey; // 0xf0
    char pad_f1[0x7];
    static ULockComponent* StaticClass();
    bool UnlockWithKey(FGameplayTagContainer& Key, AActor* Instigator);
    bool Unlock(float UnlockValue, bool bCompleteAttempt);
    void Lock();
    bool IsLocked();
    float GetUnlockedPercent();
    float GetMaxLockValue();
    ELockLevel GetLockLevel();
    float GetCurrentLockValue();
}; // Size: 0xf8
#pragma pack(pop)
