#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
class UClass;
#pragma pack(push, 1)
class UAISenseConfig_Smell : public UAISenseConfig {
public:
    UClass* Implementation; // 0x48
    float Range; // 0x50
    bool bDisplayDebugSphere; // 0x54
    char pad_55[0x3];
    static UAISenseConfig_Smell* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
