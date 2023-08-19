#pragma once
#include <cstdint>
#include "USaveGame.hpp"
#pragma pack(push, 1)
class UPersistentOffline : public USaveGame {
public:
    FString EpicAccountID; // 0x28
    static UPersistentOffline* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
