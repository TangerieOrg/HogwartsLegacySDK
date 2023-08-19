#pragma once
#include <cstdint>
#include "FWorldFXCascadeSystemParam.hpp"
#include "UWorldFXCascadeInstanceParametersBase.hpp"
#pragma pack(push, 1)
class UWorldFXCascadeInstanceParametersFlat : public UWorldFXCascadeInstanceParametersBase {
public:
    TArray<FWorldFXCascadeSystemParam> InstanceParameters; // 0x28
    static UWorldFXCascadeInstanceParametersFlat* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
