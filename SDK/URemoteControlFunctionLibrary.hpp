#pragma once
#include <cstdint>
#include "FRemoteControlOptionalExposeArgs.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class URemoteControlPreset;
class UObject;
class AActor;
#pragma pack(push, 1)
class URemoteControlFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static URemoteControlFunctionLibrary* StaticClass();
    static bool ExposeProperty(URemoteControlPreset* Preset, UObject* SourceObject, FString Property, FRemoteControlOptionalExposeArgs Args);
    static bool ExposeFunction(URemoteControlPreset* Preset, UObject* SourceObject, FString Function, FRemoteControlOptionalExposeArgs Args);
    static bool ExposeActor(URemoteControlPreset* Preset, AActor* Actor, FRemoteControlOptionalExposeArgs Args);
}; // Size: 0x28
#pragma pack(pop)
