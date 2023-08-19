#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#include "UNISMode.hpp"
#pragma pack(push, 1)
class UNISLibrary : public UBlueprintFunctionLibrary {
public:
    static UNISLibrary* StaticClass();
    static void SetNISSharpness(float Sharpness);
    static void SetNISMode(UNISMode NISMode);
    static void SetNISCustomScreenPercentage(float CustomScreenPercentage);
    static bool IsNISSupported();
    static bool IsNISModeSupported(UNISMode NISMode);
    static TArray<UNISMode> GetSupportedNISModes();
    static void GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    static float GetNISRecommendedScreenPercentage(UNISMode NISMode);
    static UNISMode GetDefaultNISMode();
}; // Size: 0x28
#pragma pack(pop)
