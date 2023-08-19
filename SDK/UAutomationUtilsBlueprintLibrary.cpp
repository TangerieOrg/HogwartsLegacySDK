#include "UAutomationUtilsBlueprintLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UAutomationUtilsBlueprintLibrary* UAutomationUtilsBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AutomationUtils.AutomationUtilsBlueprintLibrary");
    return (UAutomationUtilsBlueprintLibrary*)res;
}
void UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(FString ScreenshotName, float MaxGlobalError, float MaxLocalError, FString MapNameOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot"));
    struct Params_TakeGameplayAutomationScreenshot {
        FString ScreenshotName; // 0x0
        float MaxGlobalError; // 0x10
        float MaxLocalError; // 0x14
        FString MapNameOverride; // 0x18
    }; // Size: 0x28
    Params_TakeGameplayAutomationScreenshot params{};
    params.ScreenshotName = (FString)ScreenshotName;
    params.MaxGlobalError = (float)MaxGlobalError;
    params.MaxLocalError = (float)MaxLocalError;
    params.MapNameOverride = (FString)MapNameOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
