#pragma once
#include <cstdint>
#include "FOpenColorIOColorSpace.hpp"
class UOpenColorIOConfiguration;
#pragma pack(push, 1)
struct FOpenColorIOColorConversionSettings {
    UOpenColorIOConfiguration* ConfigurationSource; // 0x0
    FOpenColorIOColorSpace SourceColorSpace; // 0x8
    FOpenColorIOColorSpace DestinationColorSpace; // 0x30
}; // Size: 0x58
#pragma pack(pop)
