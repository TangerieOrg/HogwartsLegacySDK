#include "APlayerController.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UVirtualCursorFunctionLibrary.hpp"
UVirtualCursorFunctionLibrary* UVirtualCursorFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VirtualCursorFunctionLibrary");
    return (UVirtualCursorFunctionLibrary*)res;
}
void UVirtualCursorFunctionLibrary::SetCursorPostion(APlayerController* PC, float nx, float ny) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.SetCursorPostion"));
    struct Params_SetCursorPostion {
        APlayerController* PC; // 0x0
        float nx; // 0x8
        float ny; // 0xc
    }; // Size: 0x10
    Params_SetCursorPostion params{};
    params.PC = (APlayerController*)PC;
    params.nx = (float)nx;
    params.ny = (float)ny;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVirtualCursorFunctionLibrary::SetCursorPositionDirect(APlayerController* PC, float nx, float ny) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.SetCursorPositionDirect"));
    struct Params_SetCursorPositionDirect {
        APlayerController* PC; // 0x0
        float nx; // 0x8
        float ny; // 0xc
    }; // Size: 0x10
    Params_SetCursorPositionDirect params{};
    params.PC = (APlayerController*)PC;
    params.nx = (float)nx;
    params.ny = (float)ny;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget"));
    struct Params_IsCursorOverInteractableWidget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCursorOverInteractableWidget params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UVirtualCursorFunctionLibrary::SetAllowMouseClickInput(bool Allow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.SetAllowMouseClickInput"));
    struct Params_SetAllowMouseClickInput {
        bool Allow; // 0x0
    }; // Size: 0x1
    Params_SetAllowMouseClickInput params{};
    params.Allow = (bool)Allow;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UVirtualCursorFunctionLibrary::IsVirtualCursorEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.IsVirtualCursorEnabled"));
    struct Params_IsVirtualCursorEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVirtualCursorEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UVirtualCursorFunctionLibrary::GetCursorPositionDirect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.GetCursorPositionDirect"));
    struct Params_GetCursorPositionDirect {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCursorPositionDirect params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
bool UVirtualCursorFunctionLibrary::GetIsUsingVirtualCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.GetIsUsingVirtualCursor"));
    struct Params_GetIsUsingVirtualCursor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsUsingVirtualCursor params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UVirtualCursorFunctionLibrary::GetIsStickTouched() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.GetIsStickTouched"));
    struct Params_GetIsStickTouched {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsStickTouched params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UVirtualCursorFunctionLibrary::GetCursorPostion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.GetCursorPostion"));
    struct Params_GetCursorPostion {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCursorPostion params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UVirtualCursorFunctionLibrary::GetAnalogTriggerValues() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.GetAnalogTriggerValues"));
    struct Params_GetAnalogTriggerValues {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnalogTriggerValues params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UVirtualCursorFunctionLibrary::GetAnalogRightValues() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.GetAnalogRightValues"));
    struct Params_GetAnalogRightValues {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnalogRightValues params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UVirtualCursorFunctionLibrary::GetAnalogLeftValues() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.GetAnalogLeftValues"));
    struct Params_GetAnalogLeftValues {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnalogLeftValues params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UVirtualCursorFunctionLibrary::EnableVirtualCursor(APlayerController* PC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.EnableVirtualCursor"));
    struct Params_EnableVirtualCursor {
        APlayerController* PC; // 0x0
    }; // Size: 0x8
    Params_EnableVirtualCursor params{};
    params.PC = (APlayerController*)PC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVirtualCursorFunctionLibrary::DisableVirtualCursor(APlayerController* PC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VirtualCursorFunctionLibrary.DisableVirtualCursor"));
    struct Params_DisableVirtualCursor {
        APlayerController* PC; // 0x0
    }; // Size: 0x8
    Params_DisableVirtualCursor params{};
    params.PC = (APlayerController*)PC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
