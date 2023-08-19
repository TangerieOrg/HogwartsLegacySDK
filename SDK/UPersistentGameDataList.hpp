#pragma once
#include <cstdint>
#include "FPersistentGameDataListInfo.hpp"
#include "USaveGame.hpp"
#pragma pack(push, 1)
class UPersistentGameDataList : public USaveGame {
public:
    int32_t VersionMajor; // 0x28
    int32_t VersionMinor; // 0x2c
    FPersistentGameDataListInfo Info; // 0x30
    static UPersistentGameDataList* StaticClass();
}; // Size: 0x798
#pragma pack(pop)
