#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USublevelEntry : public UObject {
public:
    char pad_28[0x28];
    static USublevelEntry* StaticClass();
    void OnLevelLoadFailed();
    void OnLevelLoaded();
}; // Size: 0x50
#pragma pack(pop)
