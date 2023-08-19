#pragma once
#include <cstdint>
#include "FFilterOptionPerAxis.hpp"
#pragma pack(push, 1)
struct FConstraintDescription {
    bool bTranslation; // 0x0
    bool bRotation; // 0x1
    bool bScale; // 0x2
    bool bParent; // 0x3
    FFilterOptionPerAxis TranslationAxes; // 0x4
    FFilterOptionPerAxis RotationAxes; // 0x7
    FFilterOptionPerAxis ScaleAxes; // 0xa
}; // Size: 0xd
#pragma pack(pop)
