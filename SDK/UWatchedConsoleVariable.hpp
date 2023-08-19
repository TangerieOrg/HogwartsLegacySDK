#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UWatchedConsoleVariable : public UObject {
public:
    FString Variable; // 0x28
    static UWatchedConsoleVariable* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
