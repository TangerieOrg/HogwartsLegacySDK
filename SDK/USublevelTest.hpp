#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USublevelTest : public UObject {
public:
    char pad_28[0x58];
    static USublevelTest* StaticClass();
    void LevelUnloaded();
    void LevelLoadFailed();
    void LevelLoaded();
}; // Size: 0x80
#pragma pack(pop)
