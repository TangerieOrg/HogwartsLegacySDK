#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UTexture.hpp"
#include "UXRLoadingScreenFunctionLibrary.hpp"
UXRLoadingScreenFunctionLibrary* UXRLoadingScreenFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary");
    return (UXRLoadingScreenFunctionLibrary*)res;
}
void UXRLoadingScreenFunctionLibrary::ShowLoadingScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen"));
    struct Params_ShowLoadingScreen {
    }; // Size: 0x0
    Params_ShowLoadingScreen params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash"));
    struct Params_AddLoadingScreenSplash {
        UTexture* Texture; // 0x0
        FVector Translation; // 0x8
        FRotator Rotation; // 0x14
        FVector2D Size; // 0x20
        FRotator DeltaRotation; // 0x28
        bool bClearBeforeAdd; // 0x34
    }; // Size: 0x35
    Params_AddLoadingScreenSplash params{};
    params.Texture = (UTexture*)Texture;
    params.Translation = (FVector)Translation;
    params.Rotation = (FRotator)Rotation;
    params.Size = (FVector2D)Size;
    params.DeltaRotation = (FRotator)DeltaRotation;
    params.bClearBeforeAdd = (bool)bClearBeforeAdd;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes"));
    struct Params_ClearLoadingScreenSplashes {
    }; // Size: 0x0
    Params_ClearLoadingScreenSplashes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen"));
    struct Params_SetLoadingScreen {
        UTexture* Texture; // 0x0
        FVector2D Scale; // 0x8
        FVector Offset; // 0x10
        bool bShowLoadingMovie; // 0x1c
        bool bShowOnSet; // 0x1d
    }; // Size: 0x1e
    Params_SetLoadingScreen params{};
    params.Texture = (UTexture*)Texture;
    params.Scale = (FVector2D)Scale;
    params.Offset = (FVector)Offset;
    params.bShowLoadingMovie = (bool)bShowLoadingMovie;
    params.bShowOnSet = (bool)bShowOnSet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UXRLoadingScreenFunctionLibrary::HideLoadingScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen"));
    struct Params_HideLoadingScreen {
    }; // Size: 0x0
    Params_HideLoadingScreen params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
