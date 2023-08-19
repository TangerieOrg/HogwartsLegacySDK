#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeFinalTagInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeFinalLastTagInterpolant : public ULerpVolumeFinalTagInterpolant {
public:
    FLerpVolumesTagName SourceInterpolant; // 0x30
    static ULerpVolumeFinalLastTagInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
