#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "UWeatherDecalSimpleCondition.hpp"
#pragma pack(push, 1)
class UWeatherDecalConditionBlendDomain : public UWeatherDecalSimpleCondition {
public:
    FBlendDomain BlendDomain; // 0x28
    static UWeatherDecalConditionBlendDomain* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
