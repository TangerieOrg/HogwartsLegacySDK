#pragma once
#include <cstdint>
#include "FLoadingScreenDescription.hpp"
#include "FSlateFontInfo.hpp"
#include "UDeveloperSettings.hpp"
class UMaterialInstance;
#pragma pack(push, 1)
class ULoadingScreenSettings : public UDeveloperSettings {
public:
    FLoadingScreenDescription StartupScreen; // 0x38
    FLoadingScreenDescription DefaultScreen; // 0xe0
    FSlateFontInfo TipFont; // 0x188
    float TipWrapAt; // 0x1e0
    char pad_1e4[0x4];
    TArray<void*> Tips; // 0x1e8
    UMaterialInstance* SimpleLoadingScreenMaterialFront; // 0x1f8
    UMaterialInstance* SimpleLoadingScreenMaterialBack; // 0x200
    UMaterialInstance* LoadingScreenSpinnerMaterial; // 0x208
    static ULoadingScreenSettings* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
