#include "EControllerHand.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMotionControllerComponent.hpp"
#include "UMotionTrackedDeviceFunctionLibrary.hpp"
int32_t UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount"));
    struct Params_GetMotionTrackingEnabledControllerCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMotionTrackingEnabledControllerCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMotionTrackedDeviceFunctionLibrary* UMotionTrackedDeviceFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
    return (UMotionTrackedDeviceFunctionLibrary*)res;
}
void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault"));
    struct Params_SetIsControllerMotionTrackingEnabledByDefault {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetIsControllerMotionTrackingEnabledByDefault params{};
    params.Enable = (bool)Enable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource"));
    struct Params_IsMotionTrackingEnabledForSource {
        int32_t PlayerIndex; // 0x0
        FName SourceName; // 0x4
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsMotionTrackingEnabledForSource params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.SourceName = (FName)SourceName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(UMotionControllerComponent* MotionControllerComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent"));
    struct Params_IsMotionTrackingEnabledForComponent {
        UMotionControllerComponent* MotionControllerComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsMotionTrackingEnabledForComponent params{};
    params.MotionControllerComponent = (UMotionControllerComponent*)MotionControllerComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary"));
    struct Params_IsMotionTrackedDeviceCountManagementNecessary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMotionTrackedDeviceCountManagementNecessary params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice"));
    struct Params_IsMotionTrackingEnabledForDevice {
        int32_t PlayerIndex; // 0x0
        EControllerHand Hand; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_IsMotionTrackingEnabledForDevice params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.Hand = (EControllerHand)Hand;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking"));
    struct Params_IsMotionSourceTracking {
        int32_t PlayerIndex; // 0x0
        FName SourceName; // 0x4
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsMotionSourceTracking params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.SourceName = (FName)SourceName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount"));
    struct Params_GetMaximumMotionTrackedControllerCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaximumMotionTrackedControllerCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent"));
    struct Params_EnableMotionTrackingForComponent {
        UMotionControllerComponent* MotionControllerComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_EnableMotionTrackingForComponent params{};
    params.MotionControllerComponent = (UMotionControllerComponent*)MotionControllerComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName"));
    struct Params_GetActiveTrackingSystemName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveTrackingSystemName params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
TArray<FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources"));
    struct Params_EnumerateMotionSources {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EnumerateMotionSources params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource"));
    struct Params_EnableMotionTrackingOfSource {
        int32_t PlayerIndex; // 0x0
        FName SourceName; // 0x4
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_EnableMotionTrackingOfSource params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.SourceName = (FName)SourceName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice"));
    struct Params_EnableMotionTrackingOfDevice {
        int32_t PlayerIndex; // 0x0
        EControllerHand Hand; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_EnableMotionTrackingOfDevice params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.Hand = (EControllerHand)Hand;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource"));
    struct Params_DisableMotionTrackingOfSource {
        int32_t PlayerIndex; // 0x0
        FName SourceName; // 0x4
    }; // Size: 0xc
    Params_DisableMotionTrackingOfSource params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.SourceName = (FName)SourceName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice"));
    struct Params_DisableMotionTrackingOfDevice {
        int32_t PlayerIndex; // 0x0
        EControllerHand Hand; // 0x4
    }; // Size: 0x5
    Params_DisableMotionTrackingOfDevice params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.Hand = (EControllerHand)Hand;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer"));
    struct Params_DisableMotionTrackingOfControllersForPlayer {
        int32_t PlayerIndex; // 0x0
    }; // Size: 0x4
    Params_DisableMotionTrackingOfControllersForPlayer params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers"));
    struct Params_DisableMotionTrackingOfAllControllers {
    }; // Size: 0x0
    Params_DisableMotionTrackingOfAllControllers params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent"));
    struct Params_DisableMotionTrackingForComponent {
        UMotionControllerComponent* MotionControllerComponent; // 0x0
    }; // Size: 0x8
    Params_DisableMotionTrackingForComponent params{};
    params.MotionControllerComponent = (UMotionControllerComponent*)MotionControllerComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
