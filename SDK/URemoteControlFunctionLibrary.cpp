#include "AActor.hpp"
#include "FRemoteControlOptionalExposeArgs.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URemoteControlFunctionLibrary.hpp"
#include "URemoteControlPreset.hpp"
bool URemoteControlFunctionLibrary::ExposeFunction(URemoteControlPreset* Preset, UObject* SourceObject, FString Function, FRemoteControlOptionalExposeArgs Args) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeFunction"));
    struct Params_ExposeFunction {
        URemoteControlPreset* Preset; // 0x0
        UObject* SourceObject; // 0x8
        FString Function; // 0x10
        FRemoteControlOptionalExposeArgs Args; // 0x20
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_ExposeFunction params{};
    params.Preset = (URemoteControlPreset*)Preset;
    params.SourceObject = (UObject*)SourceObject;
    params.Function = (FString)Function;
    params.Args = (FRemoteControlOptionalExposeArgs)Args;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool URemoteControlFunctionLibrary::ExposeProperty(URemoteControlPreset* Preset, UObject* SourceObject, FString Property, FRemoteControlOptionalExposeArgs Args) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeProperty"));
    struct Params_ExposeProperty {
        URemoteControlPreset* Preset; // 0x0
        UObject* SourceObject; // 0x8
        FString Property; // 0x10
        FRemoteControlOptionalExposeArgs Args; // 0x20
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_ExposeProperty params{};
    params.Preset = (URemoteControlPreset*)Preset;
    params.SourceObject = (UObject*)SourceObject;
    params.Property = (FString)Property;
    params.Args = (FRemoteControlOptionalExposeArgs)Args;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
URemoteControlFunctionLibrary* URemoteControlFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlFunctionLibrary");
    return (URemoteControlFunctionLibrary*)res;
}
bool URemoteControlFunctionLibrary::ExposeActor(URemoteControlPreset* Preset, AActor* Actor, FRemoteControlOptionalExposeArgs Args) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeActor"));
    struct Params_ExposeActor {
        URemoteControlPreset* Preset; // 0x0
        AActor* Actor; // 0x8
        FRemoteControlOptionalExposeArgs Args; // 0x10
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_ExposeActor params{};
    params.Preset = (URemoteControlPreset*)Preset;
    params.Actor = (AActor*)Actor;
    params.Args = (FRemoteControlOptionalExposeArgs)Args;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
