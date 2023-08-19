#pragma once
#include <cstdint>
#include "ELockStates.hpp"
#include "EMinimalLockState.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULockManagerInterface : public UObject {
public:
    static ULockManagerInterface* StaticClass();
    static void Unlock(FName LockId);
    static void SetLock(FName LockId, ELockStates NewState);
    static void Lock(FName LockId);
    static bool IsUnlockedPure(FName LockId);
    static bool IsUnlocked(FName LockId);
    static bool IsLockedPure(FName LockId);
    static bool IsLocked(FName LockId);
    static ELockStates GetState(FName LockId);
    static void BranchState(FName LockId, EMinimalLockState& LockState);
}; // Size: 0x28
#pragma pack(pop)
