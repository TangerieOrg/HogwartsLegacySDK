#pragma once
#include <cstdint>
#include "FLerpVolumesScalarName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarLerpVolumeEye : public UFXAutoTriggerScalar {
public:
    FLerpVolumesScalarName LerpVolumesScalar; // 0x28
    static UFXAutoTriggerScalarLerpVolumeEye* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
