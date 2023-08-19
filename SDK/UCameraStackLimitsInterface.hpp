#pragma once
#include <cstdint>
#include "UInterface.hpp"
struct FOptionalTriplet;
#pragma pack(push, 1)
class UCameraStackLimitsInterface : public UInterface {
public:
    static UCameraStackLimitsInterface* StaticClass();
    bool GetRotationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax);
    bool GetFocusDistanceLimits(float& OutMin, float& OutMax);
    bool GetFieldOfViewLimits(float& OutMin, float& OutMax);
    bool GetCameraSpaceTranslationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax);
    bool GetCameraSpaceRotationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax);
    bool GetArmOriginLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax);
    bool GetArmLengthLimits(float& OutMin, float& OutMax);
    bool GetApertureLimits(float& OutMin, float& OutMax);
}; // Size: 0x28
#pragma pack(pop)
