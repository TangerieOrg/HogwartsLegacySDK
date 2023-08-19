#pragma once
#include <cstdint>
#include "EAlohomoraLevel.hpp"
#include "UObject.hpp"
class ULockableComponent;
#pragma pack(push, 1)
class ULockableManager : public UObject {
public:
    char pad_28[0xd0];
    TArray<ULockableComponent*> AlohomoraComponents; // 0xf8
    char pad_108[0x168];
    static ULockableManager* StaticClass();
    void OnPreGameSave();
    void OnPostGameLoad();
    void LockablesSuperAlohomora(bool Enable);
    void LockablesSetAlohomora(EAlohomoraLevel AlohomoraLevel);
    void LockablesMasterKey(bool Enable);
    void LockablesMarkLocks(bool Enable);
    void LockablesDrawDebugInfo(bool Enable);
}; // Size: 0x270
#pragma pack(pop)
