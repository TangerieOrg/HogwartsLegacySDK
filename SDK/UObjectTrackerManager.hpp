#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UObjectTrackerManager : public UObject {
public:
    char pad_28[0x60];
    static UObjectTrackerManager* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
