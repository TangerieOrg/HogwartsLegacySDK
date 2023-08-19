#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
class UClass;
#pragma pack(push, 1)
class UAISenseConfig_Damage : public UAISenseConfig {
public:
    UClass* Implementation; // 0x48
    static UAISenseConfig_Damage* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
