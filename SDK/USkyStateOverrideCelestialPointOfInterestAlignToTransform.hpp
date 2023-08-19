#pragma once
#include <cstdint>
#include "USkyStateOverrideCelestialPointOfInterestAlignTo.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USkyStateOverrideCelestialPointOfInterestAlignToTransform : public USkyStateOverrideCelestialPointOfInterestAlignTo {
public:
    UTransformProvider* OrientTo; // 0x50
    static USkyStateOverrideCelestialPointOfInterestAlignToTransform* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
