#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UDLSSMode.hpp"
#include "UDLSSSupport.hpp"
#pragma pack(push, 1)
class UDLSSLibrary : public UBlueprintFunctionLibrary {
public:
    static UDLSSLibrary* StaticClass();
    static void SetDLSSSharpness(float Sharpness);
    static void SetDLSSMode(UDLSSMode DLSSMode);
    static UDLSSSupport QueryDLSSSupport();
    static bool IsDLSSSupported();
    static bool IsDLSSModeSupported(UDLSSMode DLSSMode);
    static bool IsDLAAEnabled();
    static TArray<UDLSSMode> GetSupportedDLSSModes();
    static float GetDLSSSharpness();
    static void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    static void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);
    static UDLSSMode GetDLSSMode();
    static void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);
    static UDLSSMode GetDefaultDLSSMode();
    static void EnableDLAA(bool bEnabled);
}; // Size: 0x28
#pragma pack(pop)
