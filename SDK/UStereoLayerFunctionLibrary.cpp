#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UStereoLayerFunctionLibrary.hpp"
#include "UTexture.hpp"
UStereoLayerFunctionLibrary* UStereoLayerFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StereoLayerFunctionLibrary");
    return (UStereoLayerFunctionLibrary*)res;
}
void UStereoLayerFunctionLibrary::HideSplashScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerFunctionLibrary.HideSplashScreen"));
    struct Params_HideSplashScreen {
    }; // Size: 0x0
    Params_HideSplashScreen params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStereoLayerFunctionLibrary::ShowSplashScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerFunctionLibrary.ShowSplashScreen"));
    struct Params_ShowSplashScreen {
    }; // Size: 0x0
    Params_ShowSplashScreen params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStereoLayerFunctionLibrary::SetSplashScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerFunctionLibrary.SetSplashScreen"));
    struct Params_SetSplashScreen {
        UTexture* Texture; // 0x0
        FVector2D Scale; // 0x8
        FVector Offset; // 0x10
        bool bShowLoadingMovie; // 0x1c
        bool bShowOnSet; // 0x1d
    }; // Size: 0x1e
    Params_SetSplashScreen params{};
    params.Texture = (UTexture*)Texture;
    params.Scale = (FVector2D)Scale;
    params.Offset = (FVector)Offset;
    params.bShowLoadingMovie = (bool)bShowLoadingMovie;
    params.bShowOnSet = (bool)bShowOnSet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen(bool InAutoShowEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerFunctionLibrary.EnableAutoLoadingSplashScreen"));
    struct Params_EnableAutoLoadingSplashScreen {
        bool InAutoShowEnabled; // 0x0
    }; // Size: 0x1
    Params_EnableAutoLoadingSplashScreen params{};
    params.InAutoShowEnabled = (bool)InAutoShowEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
