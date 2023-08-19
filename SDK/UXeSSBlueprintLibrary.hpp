#pragma once
#include <cstdint>
#include "EXeSSQualityMode.hpp"
#include "FIntPoint.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UXeSSBlueprintLibrary* StaticClass();
    static void SetXeSSQualityMode(EXeSSQualityMode QualityMode);
    static bool IsXeSSSupported();
    static bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);
    static EXeSSQualityMode GetXeSSQualityMode();
    static TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();
    static EXeSSQualityMode GetDefaultXeSSQualityMode(FIntPoint ScreenResolution);
}; // Size: 0x28
#pragma pack(pop)
