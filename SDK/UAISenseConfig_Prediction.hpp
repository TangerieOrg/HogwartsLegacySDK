#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
#pragma pack(push, 1)
class UAISenseConfig_Prediction : public UAISenseConfig {
public:
    static UAISenseConfig_Prediction* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
