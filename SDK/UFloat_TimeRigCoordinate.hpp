#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_TimeRigCoordinate : public UFloatProvider {
public:
    FTimeRigCoordinate Value; // 0x28
    char pad_2c[0x4];
    static UFloat_TimeRigCoordinate* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
