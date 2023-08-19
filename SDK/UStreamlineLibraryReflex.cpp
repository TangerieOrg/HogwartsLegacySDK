#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UStreamlineLibraryReflex.hpp"
#include "UStreamlineReflexMode.hpp"
#include "UStreamlineReflexSupport.hpp"
UStreamlineLibraryReflex* UStreamlineLibraryReflex::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamlineBlueprint.StreamlineLibraryReflex");
    return (UStreamlineLibraryReflex*)res;
}
void UStreamlineLibraryReflex::SetReflexMode(UStreamlineReflexMode Mode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode"));
    struct Params_SetReflexMode {
        UStreamlineReflexMode Mode; // 0x0
    }; // Size: 0x1
    Params_SetReflexMode params{};
    params.Mode = (UStreamlineReflexMode)Mode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UStreamlineReflexSupport UStreamlineLibraryReflex::QueryReflexSupport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport"));
    struct Params_QueryReflexSupport {
        UStreamlineReflexSupport ReturnValue; // 0x0
    }; // Size: 0x1
    Params_QueryReflexSupport params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStreamlineReflexSupport)params.ReturnValue;
}
float UStreamlineLibraryReflex::GetGameLatencyInMs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs"));
    struct Params_GetGameLatencyInMs {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGameLatencyInMs params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UStreamlineReflexMode UStreamlineLibraryReflex::GetReflexMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode"));
    struct Params_GetReflexMode {
        UStreamlineReflexMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetReflexMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStreamlineReflexMode)params.ReturnValue;
}
float UStreamlineLibraryReflex::GetGameToRenderLatencyInMs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs"));
    struct Params_GetGameToRenderLatencyInMs {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGameToRenderLatencyInMs params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UStreamlineLibraryReflex::IsReflexSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported"));
    struct Params_IsReflexSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReflexSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UStreamlineLibraryReflex::GetRenderLatencyInMs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs"));
    struct Params_GetRenderLatencyInMs {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRenderLatencyInMs params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UStreamlineReflexMode UStreamlineLibraryReflex::GetDefaultReflexMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode"));
    struct Params_GetDefaultReflexMode {
        UStreamlineReflexMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultReflexMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStreamlineReflexMode)params.ReturnValue;
}
