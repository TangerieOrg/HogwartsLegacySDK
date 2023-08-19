#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UTexture;
#pragma pack(push, 1)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UXRLoadingScreenFunctionLibrary* StaticClass();
    static void ShowLoadingScreen();
    static void SetLoadingScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    static void HideLoadingScreen();
    static void ClearLoadingScreenSplashes();
    static void AddLoadingScreenSplash(UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);
}; // Size: 0x28
#pragma pack(pop)
