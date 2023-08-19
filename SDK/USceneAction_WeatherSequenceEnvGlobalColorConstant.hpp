#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalColor.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceEnvGlobalColorConstant : public USceneAction_WeatherSequenceEnvGlobalColor {
public:
    FLinearColor Value; // 0xa8
    static USceneAction_WeatherSequenceEnvGlobalColorConstant* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
