#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "USkyStateOverrideCelestialPointOfInterestAlignTo.hpp"
#pragma pack(push, 1)
class USkyStateOverrideCelestialPointOfInterestAlignToRotator : public USkyStateOverrideCelestialPointOfInterestAlignTo {
public:
    FRotator OrientTo; // 0x50
    FRotator Extra; // 0x5c
    bool bExtraRotation; // 0x68
    char pad_69[0x7];
    static USkyStateOverrideCelestialPointOfInterestAlignToRotator* StaticClass();
    void SetOrientTo(FRotator NewOrientTo);
    void SetExtraRotation(FRotator NewExtra);
    void GetOrientTo(FRotator& CurrentOrientTo);
    void GetExtraRotation(FRotator& CurrentExtra, bool& bHasExtra);
    void ClearExtraRotation();
}; // Size: 0x70
#pragma pack(pop)
