#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
#pragma pack(push, 1)
class UAISenseConfig_Touch : public UAISenseConfig {
public:
    static UAISenseConfig_Touch* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
