#include "ADoor.hpp"
#include "EDoorState.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULockableManagerFunctionLibrary.hpp"
ULockableManagerFunctionLibrary* ULockableManagerFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockableManagerFunctionLibrary");
    return (ULockableManagerFunctionLibrary*)res;
}
void ULockableManagerFunctionLibrary::WaitForDoorAndSetState(FString DoorName, EDoorState DoorState, bool LockVisible, bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManagerFunctionLibrary.WaitForDoorAndSetState"));
    struct Params_WaitForDoorAndSetState {
        FString DoorName; // 0x0
        EDoorState DoorState; // 0x10
        bool LockVisible; // 0x11
        bool PlaySoundsAndEffects; // 0x12
    }; // Size: 0x13
    Params_WaitForDoorAndSetState params{};
    params.DoorName = (FString)DoorName;
    params.DoorState = (EDoorState)DoorState;
    params.LockVisible = (bool)LockVisible;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ADoor* ULockableManagerFunctionLibrary::FindNamedDoor(FString DoorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManagerFunctionLibrary.FindNamedDoor"));
    struct Params_FindNamedDoor {
        FString DoorName; // 0x0
        ADoor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindNamedDoor params{};
    params.DoorName = (FString)DoorName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ADoor*)params.ReturnValue;
}
