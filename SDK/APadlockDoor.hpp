#pragma once
#include <cstdint>
#include "ADoor.hpp"
#include "ELockDifficulty.hpp"
class ULockableComponent;
#pragma pack(push, 1)
class APadlockDoor : public ADoor {
public:
    ULockableComponent* LockableComponent; // 0x530
    static APadlockDoor* StaticClass();
    void SetLockedAndDifficulty(bool Locked, ELockDifficulty Difficulty, bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool DoChild);
    void SetLockDifficulty(ELockDifficulty Difficulty);
    ELockDifficulty GetLockDifficulty();
}; // Size: 0x538
#pragma pack(pop)
