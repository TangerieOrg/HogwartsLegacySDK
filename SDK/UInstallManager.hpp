#pragma once
#include <cstdint>
#include "EFeatureInstallState.hpp"
#include "EInstallFeatures.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UInstallManager : public UObject {
public:
    char pad_28[0x20];
    static UInstallManager* StaticClass();
    void UninstallFeature(EInstallFeatures FeatureId);
    bool IsLanguageInstalledOrInstalling(FString Language);
    bool IsInstallingAnyPack();
    bool IsInstallingAnyLanguagePack();
    void InstallFeature(EInstallFeatures FeatureId);
    EFeatureInstallState GetFeatureInstallState(EInstallFeatures FeatureId);
    float GetFeatureInstallPercentage(EInstallFeatures FeatureId);
    EInstallFeatures GetCurrentlyInstallingFeatureId();
    static UInstallManager* Get();
    FString FindAvailableInstalledLanguage();
}; // Size: 0x48
#pragma pack(pop)
