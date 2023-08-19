#pragma once
#include <cstdint>
#include "FWorldFXCascadeSystemParams.hpp"
#include "UWorldFXCascadeInstanceParametersBase.hpp"
#pragma pack(push, 1)
class UWorldFXCascadeInstanceParametersGrouped : public UWorldFXCascadeInstanceParametersBase {
public:
    FWorldFXCascadeSystemParams InstanceParameters; // 0x28
    static UWorldFXCascadeInstanceParametersGrouped* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
