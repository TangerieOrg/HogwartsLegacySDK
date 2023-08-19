#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UDuelTechniquesManager : public UObject {
public:
    char pad_28[0x5c0];
    static UDuelTechniquesManager* StaticClass();
    void OnSaveGameLoaded();
    void OnGameToBeSaved();
}; // Size: 0x5e8
#pragma pack(pop)
