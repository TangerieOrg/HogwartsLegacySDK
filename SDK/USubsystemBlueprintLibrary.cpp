#include "APlayerController.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UEngineSubsystem.hpp"
#include "UFunction.hpp"
#include "UGameInstanceSubsystem.hpp"
#include "ULocalPlayerSubsystem.hpp"
#include "UObject.hpp"
#include "USubsystemBlueprintLibrary.hpp"
#include "UWorldSubsystem.hpp"
USubsystemBlueprintLibrary* USubsystemBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SubsystemBlueprintLibrary");
    return (USubsystemBlueprintLibrary*)res;
}
UEngineSubsystem* USubsystemBlueprintLibrary::GetEngineSubsystem(UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SubsystemBlueprintLibrary.GetEngineSubsystem"));
    struct Params_GetEngineSubsystem {
        UClass* Class; // 0x0
        UEngineSubsystem* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetEngineSubsystem params{};
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UEngineSubsystem*)params.ReturnValue;
}
UWorldSubsystem* USubsystemBlueprintLibrary::GetWorldSubsystem(UObject* ContextObject, UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SubsystemBlueprintLibrary.GetWorldSubsystem"));
    struct Params_GetWorldSubsystem {
        UObject* ContextObject; // 0x0
        UClass* Class; // 0x8
        UWorldSubsystem* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetWorldSubsystem params{};
    params.ContextObject = (UObject*)ContextObject;
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWorldSubsystem*)params.ReturnValue;
}
ULocalPlayerSubsystem* USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(UObject* ContextObject, UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubsystem"));
    struct Params_GetLocalPlayerSubsystem {
        UObject* ContextObject; // 0x0
        UClass* Class; // 0x8
        ULocalPlayerSubsystem* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetLocalPlayerSubsystem params{};
    params.ContextObject = (UObject*)ContextObject;
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULocalPlayerSubsystem*)params.ReturnValue;
}
ULocalPlayerSubsystem* USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubSystemFromPlayerController"));
    struct Params_GetLocalPlayerSubSystemFromPlayerController {
        APlayerController* PlayerController; // 0x0
        UClass* Class; // 0x8
        ULocalPlayerSubsystem* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetLocalPlayerSubSystemFromPlayerController params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULocalPlayerSubsystem*)params.ReturnValue;
}
UGameInstanceSubsystem* USubsystemBlueprintLibrary::GetGameInstanceSubsystem(UObject* ContextObject, UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SubsystemBlueprintLibrary.GetGameInstanceSubsystem"));
    struct Params_GetGameInstanceSubsystem {
        UObject* ContextObject; // 0x0
        UClass* Class; // 0x8
        UGameInstanceSubsystem* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetGameInstanceSubsystem params{};
    params.ContextObject = (UObject*)ContextObject;
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameInstanceSubsystem*)params.ReturnValue;
}
