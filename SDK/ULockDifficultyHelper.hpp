#pragma once
#include <cstdint>
#include "EDoorLockLevel.hpp"
#include "ELockDifficulty.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULockDifficultyHelper : public UObject {
public:
    static ULockDifficultyHelper* StaticClass();
    static ELockDifficulty ConvertLockLevelToLockDifficulty(EDoorLockLevel LockLevel);
    static EDoorLockLevel ConvertLockDifficultyToLockLevel(ELockDifficulty LockDifficulty);
}; // Size: 0x28
#pragma pack(pop)
