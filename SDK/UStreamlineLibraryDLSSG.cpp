#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UStreamlineDLSSGMode.hpp"
#include "UStreamlineDLSSGSupport.hpp"
#include "UStreamlineLibraryDLSSG.hpp"
void UStreamlineLibraryDLSSG::GetDLSSGSupportedFramesRange(int32_t& MinFrames, int32_t& MaxFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange"));
    struct Params_GetDLSSGSupportedFramesRange {
        int32_t MinFrames; // 0x0
        int32_t MaxFrames; // 0x4
    }; // Size: 0x8
    Params_GetDLSSGSupportedFramesRange params{};
    params.MinFrames = (int32_t)MinFrames;
    params.MaxFrames = (int32_t)MaxFrames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaxFrames = params.MaxFrames;
    MinFrames = params.MinFrames;
}
bool UStreamlineLibraryDLSSG::IsDLSSGSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported"));
    struct Params_IsDLSSGSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDLSSGSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UStreamlineDLSSGSupport UStreamlineLibraryDLSSG::QueryDLSSGSupport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport"));
    struct Params_QueryDLSSGSupport {
        UStreamlineDLSSGSupport ReturnValue; // 0x0
    }; // Size: 0x1
    Params_QueryDLSSGSupport params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStreamlineDLSSGSupport)params.ReturnValue;
}
UStreamlineLibraryDLSSG* UStreamlineLibraryDLSSG::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamlineBlueprint.StreamlineLibraryDLSSG");
    return (UStreamlineLibraryDLSSG*)res;
}
void UStreamlineLibraryDLSSG::SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode"));
    struct Params_SetDLSSGMode {
        UStreamlineDLSSGMode DLSSGMode; // 0x0
    }; // Size: 0x1
    Params_SetDLSSGMode params{};
    params.DLSSGMode = (UStreamlineDLSSGMode)DLSSGMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<UStreamlineDLSSGMode> UStreamlineLibraryDLSSG::GetSupportedDLSSGModes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes"));
    struct Params_GetSupportedDLSSGModes {
        TArray<UStreamlineDLSSGMode> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSupportedDLSSGModes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UStreamlineDLSSGMode>)params.ReturnValue;
}
void UStreamlineLibraryDLSSG::SetDLSSGFrames(int32_t Frames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames"));
    struct Params_SetDLSSGFrames {
        int32_t Frames; // 0x0
    }; // Size: 0x4
    Params_SetDLSSGFrames params{};
    params.Frames = (int32_t)Frames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UStreamlineLibraryDLSSG::IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported"));
    struct Params_IsDLSSGModeSupported {
        UStreamlineDLSSGMode DLSSGMode; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsDLSSGModeSupported params{};
    params.DLSSGMode = (UStreamlineDLSSGMode)DLSSGMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDLSSGMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode"));
    struct Params_GetDLSSGMode {
        UStreamlineDLSSGMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDLSSGMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStreamlineDLSSGMode)params.ReturnValue;
}
void UStreamlineLibraryDLSSG::GetDLSSGMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion"));
    struct Params_GetDLSSGMinimumDriverVersion {
        int32_t MinDriverVersionMajor; // 0x0
        int32_t MinDriverVersionMinor; // 0x4
    }; // Size: 0x8
    Params_GetDLSSGMinimumDriverVersion params{};
    params.MinDriverVersionMajor = (int32_t)MinDriverVersionMajor;
    params.MinDriverVersionMinor = (int32_t)MinDriverVersionMinor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MinDriverVersionMajor = params.MinDriverVersionMajor;
    MinDriverVersionMinor = params.MinDriverVersionMinor;
}
void UStreamlineLibraryDLSSG::GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming"));
    struct Params_GetDLSSGFrameTiming {
        float FrameRateInHertz; // 0x0
        int32_t FramesPresented; // 0x4
    }; // Size: 0x8
    Params_GetDLSSGFrameTiming params{};
    params.FrameRateInHertz = (float)FrameRateInHertz;
    params.FramesPresented = (int32_t)FramesPresented;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FrameRateInHertz = params.FrameRateInHertz;
    FramesPresented = params.FramesPresented;
}
int32_t UStreamlineLibraryDLSSG::GetDLSSGFrames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames"));
    struct Params_GetDLSSGFrames {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDLSSGFrames params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDefaultDLSSGMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode"));
    struct Params_GetDefaultDLSSGMode {
        UStreamlineDLSSGMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultDLSSGMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStreamlineDLSSGMode)params.ReturnValue;
}
