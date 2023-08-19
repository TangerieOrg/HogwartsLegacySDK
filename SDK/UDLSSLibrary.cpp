#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UDLSSLibrary.hpp"
#include "UDLSSMode.hpp"
#include "UDLSSSupport.hpp"
#include "UFunction.hpp"
void UDLSSLibrary::SetDLSSMode(UDLSSMode DLSSMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode"));
    struct Params_SetDLSSMode {
        UDLSSMode DLSSMode; // 0x0
    }; // Size: 0x1
    Params_SetDLSSMode params{};
    params.DLSSMode = (UDLSSMode)DLSSMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UDLSSLibrary* UDLSSLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/DLSSBlueprint.DLSSLibrary");
    return (UDLSSLibrary*)res;
}
void UDLSSLibrary::SetDLSSSharpness(float Sharpness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness"));
    struct Params_SetDLSSSharpness {
        float Sharpness; // 0x0
    }; // Size: 0x4
    Params_SetDLSSSharpness params{};
    params.Sharpness = (float)Sharpness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<UDLSSMode> UDLSSLibrary::GetSupportedDLSSModes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes"));
    struct Params_GetSupportedDLSSModes {
        TArray<UDLSSMode> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSupportedDLSSModes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UDLSSMode>)params.ReturnValue;
}
UDLSSSupport UDLSSLibrary::QueryDLSSSupport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport"));
    struct Params_QueryDLSSSupport {
        UDLSSSupport ReturnValue; // 0x0
    }; // Size: 0x1
    Params_QueryDLSSSupport params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDLSSSupport)params.ReturnValue;
}
void UDLSSLibrary::GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange"));
    struct Params_GetDLSSScreenPercentageRange {
        float MinScreenPercentage; // 0x0
        float MaxScreenPercentage; // 0x4
    }; // Size: 0x8
    Params_GetDLSSScreenPercentageRange params{};
    params.MinScreenPercentage = (float)MinScreenPercentage;
    params.MaxScreenPercentage = (float)MaxScreenPercentage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MinScreenPercentage = params.MinScreenPercentage;
    MaxScreenPercentage = params.MaxScreenPercentage;
}
bool UDLSSLibrary::IsDLSSSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported"));
    struct Params_IsDLSSSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDLSSSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDLSSLibrary::IsDLSSModeSupported(UDLSSMode DLSSMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported"));
    struct Params_IsDLSSModeSupported {
        UDLSSMode DLSSMode; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsDLSSModeSupported params{};
    params.DLSSMode = (UDLSSMode)DLSSMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDLSSLibrary::IsDLAAEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled"));
    struct Params_IsDLAAEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDLAAEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UDLSSLibrary::GetDLSSSharpness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness"));
    struct Params_GetDLSSSharpness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDLSSSharpness params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UDLSSLibrary::GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation"));
    struct Params_GetDLSSModeInformation {
        UDLSSMode DLSSMode; // 0x0
        char pad_1[0x3];
        FVector2D ScreenResolution; // 0x4
        bool bIsSupported; // 0xc
        char pad_d[0x3];
        float OptimalScreenPercentage; // 0x10
        bool bIsFixedScreenPercentage; // 0x14
        char pad_15[0x3];
        float MinScreenPercentage; // 0x18
        float MaxScreenPercentage; // 0x1c
        float OptimalSharpness; // 0x20
    }; // Size: 0x24
    Params_GetDLSSModeInformation params{};
    params.DLSSMode = (UDLSSMode)DLSSMode;
    params.ScreenResolution = (FVector2D)ScreenResolution;
    params.bIsSupported = (bool)bIsSupported;
    params.OptimalScreenPercentage = (float)OptimalScreenPercentage;
    params.bIsFixedScreenPercentage = (bool)bIsFixedScreenPercentage;
    params.MinScreenPercentage = (float)MinScreenPercentage;
    params.MaxScreenPercentage = (float)MaxScreenPercentage;
    params.OptimalSharpness = (float)OptimalSharpness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsFixedScreenPercentage = params.bIsFixedScreenPercentage;
    bIsSupported = params.bIsSupported;
    OptimalSharpness = params.OptimalSharpness;
    OptimalScreenPercentage = params.OptimalScreenPercentage;
    MinScreenPercentage = params.MinScreenPercentage;
    MaxScreenPercentage = params.MaxScreenPercentage;
}
UDLSSMode UDLSSLibrary::GetDLSSMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode"));
    struct Params_GetDLSSMode {
        UDLSSMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDLSSMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDLSSMode)params.ReturnValue;
}
void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion"));
    struct Params_GetDLSSMinimumDriverVersion {
        int32_t MinDriverVersionMajor; // 0x0
        int32_t MinDriverVersionMinor; // 0x4
    }; // Size: 0x8
    Params_GetDLSSMinimumDriverVersion params{};
    params.MinDriverVersionMajor = (int32_t)MinDriverVersionMajor;
    params.MinDriverVersionMinor = (int32_t)MinDriverVersionMinor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MinDriverVersionMajor = params.MinDriverVersionMajor;
    MinDriverVersionMinor = params.MinDriverVersionMinor;
}
UDLSSMode UDLSSLibrary::GetDefaultDLSSMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode"));
    struct Params_GetDefaultDLSSMode {
        UDLSSMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultDLSSMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDLSSMode)params.ReturnValue;
}
void UDLSSLibrary::EnableDLAA(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA"));
    struct Params_EnableDLAA {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_EnableDLAA params{};
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
