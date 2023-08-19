#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UAutomationUtilsBlueprintLibrary* StaticClass();
    static void TakeGameplayAutomationScreenshot(FString ScreenshotName, float MaxGlobalError, float MaxLocalError, FString MapNameOverride);
}; // Size: 0x28
#pragma pack(pop)
