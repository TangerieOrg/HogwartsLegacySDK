#pragma once
#include <cstdint>
#include "UWeatherDecalCondition.hpp"
#pragma pack(push, 1)
class UWeatherDecalSimpleCondition : public UWeatherDecalCondition {
public:
    static UWeatherDecalSimpleCondition* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
