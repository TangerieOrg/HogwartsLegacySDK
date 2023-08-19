#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USanctuaryExpansionManager : public UObject {
public:
    char pad_28[0xa0];
    static USanctuaryExpansionManager* StaticClass();
    void TriggerExpansion(FName InExpansionLockID);
    bool ShouldSkipUnlockCinematics();
    void ReleaseExpansion(FName InExpansionLockID);
    void LoadExpansion(FName InExpansionLockID);
    bool IsValidExpansion(FName InExpansionLockID);
    bool IsExpansionOpen(FName InExpansionLockID);
    bool IsExpansionLoaded(FName InExpansionLockID);
}; // Size: 0xc8
#pragma pack(pop)
