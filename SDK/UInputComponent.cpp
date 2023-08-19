#include "EControllerAnalogStick\Type.hpp"
#include "FCachedKeyToActionInfo.hpp"
#include "FKey.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
UInputComponent* UInputComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputComponent");
    return (UInputComponent*)res;
}
float UInputComponent::GetControllerKeyTimeDown(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.GetControllerKeyTimeDown"));
    struct Params_GetControllerKeyTimeDown {
        FKey Key; // 0x0
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetControllerKeyTimeDown params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UInputComponent::WasControllerKeyJustReleased(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.WasControllerKeyJustReleased"));
    struct Params_WasControllerKeyJustReleased {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_WasControllerKeyJustReleased params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInputComponent::WasControllerKeyJustPressed(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.WasControllerKeyJustPressed"));
    struct Params_WasControllerKeyJustPressed {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_WasControllerKeyJustPressed params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInputComponent::IsControllerKeyDown(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.IsControllerKeyDown"));
    struct Params_IsControllerKeyDown {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsControllerKeyDown params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UInputComponent::GetControllerMouseDelta(float& DeltaX, float& DeltaY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.GetControllerMouseDelta"));
    struct Params_GetControllerMouseDelta {
        float DeltaX; // 0x0
        float DeltaY; // 0x4
    }; // Size: 0x8
    Params_GetControllerMouseDelta params{};
    params.DeltaX = (float)DeltaX;
    params.DeltaY = (float)DeltaY;
    ProcessEvent(func, &params);
    DeltaX = params.DeltaX;
    DeltaY = params.DeltaY;
}
void UInputComponent::GetTouchState(int32_t FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.GetTouchState"));
    struct Params_GetTouchState {
        int32_t FingerIndex; // 0x0
        float LocationX; // 0x4
        float LocationY; // 0x8
        bool bIsCurrentlyPressed; // 0xc
    }; // Size: 0xd
    Params_GetTouchState params{};
    params.FingerIndex = (int32_t)FingerIndex;
    params.LocationX = (float)LocationX;
    params.LocationY = (float)LocationY;
    params.bIsCurrentlyPressed = (bool)bIsCurrentlyPressed;
    ProcessEvent(func, &params);
    LocationX = params.LocationX;
    LocationY = params.LocationY;
    bIsCurrentlyPressed = params.bIsCurrentlyPressed;
}
FVector UInputComponent::GetControllerVectorKeyState(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.GetControllerVectorKeyState"));
    struct Params_GetControllerVectorKeyState {
        FKey Key; // 0x0
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetControllerVectorKeyState params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UInputComponent::GetControllerAnalogStickState(EControllerAnalogStick::Type WhichStick, float& StickX, float& StickY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.GetControllerAnalogStickState"));
    struct Params_GetControllerAnalogStickState {
        EControllerAnalogStick::Type WhichStick; // 0x0
        char pad_1[0x3];
        float StickX; // 0x4
        float StickY; // 0x8
    }; // Size: 0xc
    Params_GetControllerAnalogStickState params{};
    params.WhichStick = (EControllerAnalogStick::Type)WhichStick;
    params.StickX = (float)StickX;
    params.StickY = (float)StickY;
    ProcessEvent(func, &params);
    StickX = params.StickX;
    StickY = params.StickY;
}
float UInputComponent::GetControllerAnalogKeyState(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputComponent.GetControllerAnalogKeyState"));
    struct Params_GetControllerAnalogKeyState {
        FKey Key; // 0x0
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetControllerAnalogKeyState params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
