#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UTexture;
#pragma pack(push, 1)
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UStereoLayerFunctionLibrary* StaticClass();
    static void ShowSplashScreen();
    static void SetSplashScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    static void HideSplashScreen();
    static void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
}; // Size: 0x28
#pragma pack(pop)
