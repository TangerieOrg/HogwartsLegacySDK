#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeFinalInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeFinalTagInterpolant : public ULerpVolumeFinalInterpolant {
public:
    FLerpVolumesTagName Name; // 0x28
    static ULerpVolumeFinalTagInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
