#pragma once
#include <cstdint>
#include "FDatabaseLockList.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#pragma pack(push, 1)
class ULockManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x60];
    static ULockManager* StaticClass();
    void OnSaveLoad();
    void OnPreSaveLoad();
    void OnPreNewGame();
    void OnNewGame();
    static FName GetLockName(FDatabaseLockList DatabaseLockList);
}; // Size: 0x108
#pragma pack(pop)
