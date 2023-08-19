#pragma once
#include <cstdint>
#include "ULerpVolumeScalarInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeRelativeScalarInterpolant : public ULerpVolumeScalarInterpolant {
public:
    static ULerpVolumeRelativeScalarInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
