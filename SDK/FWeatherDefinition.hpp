#pragma once
#include <cstdint>
#include "FCloudDefinitionName.hpp"
#include "FFogDefinitionName.hpp"
#include "FWindDefinitionName.hpp"
#pragma pack(push, 1)
struct FWeatherDefinition {
    FName Name; // 0x0
    FCloudDefinitionName Clouds; // 0x8
    FFogDefinitionName Fog; // 0x18
    FWindDefinitionName Wind; // 0x28
}; // Size: 0x38
#pragma pack(pop)
