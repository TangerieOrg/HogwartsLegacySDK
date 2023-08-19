#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
#pragma pack(push, 1)
class UAISenseConfig_Team : public UAISenseConfig {
public:
    static UAISenseConfig_Team* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
