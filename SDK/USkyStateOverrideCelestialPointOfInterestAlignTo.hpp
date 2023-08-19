#pragma once
#include <cstdint>
#include "FCelestialPointOfInterestName.hpp"
#include "FVector.hpp"
#include "USkyStateOverride.hpp"
#pragma pack(push, 1)
class USkyStateOverrideCelestialPointOfInterestAlignTo : public USkyStateOverride {
public:
    FCelestialPointOfInterestName PointOfInterest; // 0x30
    FVector SlerpUp; // 0x38
    float Priority; // 0x44
    bool bUseSlerp; // 0x48
    bool bEnabled; // 0x49
    char pad_4a[0x6];
    static USkyStateOverrideCelestialPointOfInterestAlignTo* StaticClass();
    void SetPointOfInterestName(FName NewPointOfInterest);
    void SetPointOfInterest(FCelestialPointOfInterestName NewPointOfInterest);
    void GetPointOfInterestName(FName& CurrentPointOfInterest);
    void GetPointOfInterest(FCelestialPointOfInterestName& CurrentPointOfInterest);
}; // Size: 0x50
#pragma pack(pop)
