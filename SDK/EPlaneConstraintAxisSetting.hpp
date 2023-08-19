#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPlaneConstraintAxisSetting : uint8_t {
    Custom = 0,
    X = 1,
    Y = 2,
    Z = 3,
    UseGlobalPhysicsSetting = 4,
    EPlaneConstraintAxisSetting_MAX = 5,
};
#pragma pack(pop)
