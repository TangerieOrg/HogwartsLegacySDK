#pragma once
#include <cstdint>
#include "UPhxDbRegistryTypeManager.hpp"
#pragma pack(push, 1)
class USpellManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x130];
    static USpellManager* StaticClass();
    void OnSaveGameLoaded();
}; // Size: 0x1d8
#pragma pack(pop)
