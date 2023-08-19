#pragma once
#include <cstdint>
#include "FWindParametersInstant.hpp"
#include "UWeatherWindDirectionalSourceComponentBase.hpp"
class UWindGustController;
#pragma pack(push, 1)
class UWeatherWindDirectionalSourceInstantComponent : public UWeatherWindDirectionalSourceComponentBase {
public:
    FWindParametersInstant WindParamsInstant; // 0x240
    UWindGustController* WindGustController; // 0x250
    float Strength; // 0x258
    char pad_25c[0x4];
    static UWeatherWindDirectionalSourceInstantComponent* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
