#pragma once
#include <cstdint>
#include "EHighContrastMode.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UAccessibilitySettings : public UBlueprintFunctionLibrary {
public:
    static UAccessibilitySettings* StaticClass();
    static void HighContrastModeEnabled(EHighContrastMode HighContrastMode, bool& bEnabled);
    static void GetHighContrastMode(int32_t& HighContrastMode);
}; // Size: 0x28
#pragma pack(pop)
