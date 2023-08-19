#pragma once
#include <cstdint>
#include "FInstallFeature.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UInstallFeatureSettings : public UObject {
public:
    bool bSupportsLanguagePacks; // 0x28
    bool bSupportsLanguagePackInstalling; // 0x29
    char pad_2a[0x6];
    TArray<FInstallFeature> InstallFeatures; // 0x30
    static UInstallFeatureSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
