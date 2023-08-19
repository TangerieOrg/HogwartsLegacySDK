#pragma once
#include <cstdint>
#include "FDefaultPBRValidationProfile.hpp"
#include "FPBRValidationProfile.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UPBRValidatorSettings : public UDeveloperSettings {
public:
    FDefaultPBRValidationProfile DefaultProfile; // 0x38
    TArray<FPBRValidationProfile> Profiles; // 0x48
    static UPBRValidatorSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
