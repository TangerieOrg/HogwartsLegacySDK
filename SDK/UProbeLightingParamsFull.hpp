#pragma once
#include <cstdint>
#include "FProbeLightingParameters.hpp"
#include "UProbeLightingParams.hpp"
#pragma pack(push, 1)
class UProbeLightingParamsFull : public UProbeLightingParams {
public:
    FProbeLightingParameters Parameters; // 0x28
    static UProbeLightingParamsFull* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
