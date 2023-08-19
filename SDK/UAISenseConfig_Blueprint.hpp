#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
class UClass;
#pragma pack(push, 1)
class UAISenseConfig_Blueprint : public UAISenseConfig {
public:
    UClass* Implementation; // 0x48
    static UAISenseConfig_Blueprint* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
