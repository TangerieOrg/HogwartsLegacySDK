#include "FOpenColorIOColorConversionSettings.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOpenColorIOBlueprintLibrary.hpp"
#include "UTexture.hpp"
#include "UTextureRenderTarget2D.hpp"
UOpenColorIOBlueprintLibrary* UOpenColorIOBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary");
    return (UOpenColorIOBlueprintLibrary*)res;
}
bool UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(UObject* WorldContextObject, FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform"));
    struct Params_ApplyColorSpaceTransform {
        UObject* WorldContextObject; // 0x0
        FOpenColorIOColorConversionSettings ConversionSettings; // 0x8
        UTexture* InputTexture; // 0x60
        UTextureRenderTarget2D* OutputRenderTarget; // 0x68
        bool ReturnValue; // 0x70
    }; // Size: 0x71
    Params_ApplyColorSpaceTransform params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ConversionSettings = (FOpenColorIOColorConversionSettings)ConversionSettings;
    params.InputTexture = (UTexture*)InputTexture;
    params.OutputRenderTarget = (UTextureRenderTarget2D*)OutputRenderTarget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConversionSettings = params.ConversionSettings;
    return (bool)params.ReturnValue;
}
