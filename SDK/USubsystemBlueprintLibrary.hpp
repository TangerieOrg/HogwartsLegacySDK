#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UClass;
class UEngineSubsystem;
class UWorldSubsystem;
class APlayerController;
class UGameInstanceSubsystem;
class ULocalPlayerSubsystem;
#pragma pack(push, 1)
class USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static USubsystemBlueprintLibrary* StaticClass();
    static UWorldSubsystem* GetWorldSubsystem(UObject* ContextObject, UClass* Class);
    static ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, UClass* Class);
    static ULocalPlayerSubsystem* GetLocalPlayerSubsystem(UObject* ContextObject, UClass* Class);
    static UGameInstanceSubsystem* GetGameInstanceSubsystem(UObject* ContextObject, UClass* Class);
    static UEngineSubsystem* GetEngineSubsystem(UClass* Class);
}; // Size: 0x28
#pragma pack(pop)
