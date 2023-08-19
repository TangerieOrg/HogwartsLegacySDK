#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class USkeletalMesh;
#pragma pack(push, 1)
class UAblSetMeshHiddenInGameTask : public UAblAbilityTask {
public:
    USkeletalMesh* SkeletalMeshTargetInOwner; // 0x70
    bool RestoreHiddenValueAtEndOfTask; // 0x78
    bool SetHiddenValue; // 0x79
    char pad_7a[0x6];
    static UAblSetMeshHiddenInGameTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
