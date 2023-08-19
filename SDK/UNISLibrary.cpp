#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UNISLibrary.hpp"
#include "UNISMode.hpp"
void UNISLibrary::SetNISMode(UNISMode NISMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.SetNISMode"));
    struct Params_SetNISMode {
        UNISMode NISMode; // 0x0
    }; // Size: 0x1
    Params_SetNISMode params{};
    params.NISMode = (UNISMode)NISMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UNISLibrary* UNISLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/NISBlueprint.NISLibrary");
    return (UNISLibrary*)res;
}
void UNISLibrary::SetNISSharpness(float Sharpness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.SetNISSharpness"));
    struct Params_SetNISSharpness {
        float Sharpness; // 0x0
    }; // Size: 0x4
    Params_SetNISSharpness params{};
    params.Sharpness = (float)Sharpness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNISLibrary::SetNISCustomScreenPercentage(float CustomScreenPercentage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.SetNISCustomScreenPercentage"));
    struct Params_SetNISCustomScreenPercentage {
        float CustomScreenPercentage; // 0x0
    }; // Size: 0x4
    Params_SetNISCustomScreenPercentage params{};
    params.CustomScreenPercentage = (float)CustomScreenPercentage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UNISLibrary::IsNISModeSupported(UNISMode NISMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.IsNISModeSupported"));
    struct Params_IsNISModeSupported {
        UNISMode NISMode; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsNISModeSupported params{};
    params.NISMode = (UNISMode)NISMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNISLibrary::IsNISSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.IsNISSupported"));
    struct Params_IsNISSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNISSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNISLibrary::GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.GetNISScreenPercentageRange"));
    struct Params_GetNISScreenPercentageRange {
        float MinScreenPercentage; // 0x0
        float MaxScreenPercentage; // 0x4
    }; // Size: 0x8
    Params_GetNISScreenPercentageRange params{};
    params.MinScreenPercentage = (float)MinScreenPercentage;
    params.MaxScreenPercentage = (float)MaxScreenPercentage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MinScreenPercentage = params.MinScreenPercentage;
    MaxScreenPercentage = params.MaxScreenPercentage;
}
TArray<UNISMode> UNISLibrary::GetSupportedNISModes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.GetSupportedNISModes"));
    struct Params_GetSupportedNISModes {
        TArray<UNISMode> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSupportedNISModes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UNISMode>)params.ReturnValue;
}
float UNISLibrary::GetNISRecommendedScreenPercentage(UNISMode NISMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage"));
    struct Params_GetNISRecommendedScreenPercentage {
        UNISMode NISMode; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNISRecommendedScreenPercentage params{};
    params.NISMode = (UNISMode)NISMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UNISMode UNISLibrary::GetDefaultNISMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NISBlueprint.NISLibrary.GetDefaultNISMode"));
    struct Params_GetDefaultNISMode {
        UNISMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultNISMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UNISMode)params.ReturnValue;
}
