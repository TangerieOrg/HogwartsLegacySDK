#pragma once
#include <cstdint>
#include "EDoorState.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ADoor;
#pragma pack(push, 1)
class ULockableManagerFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static ULockableManagerFunctionLibrary* StaticClass();
    static void WaitForDoorAndSetState(FString DoorName, EDoorState DoorState, bool LockVisible, bool PlaySoundsAndEffects);
    static ADoor* FindNamedDoor(FString DoorName);
}; // Size: 0x28
#pragma pack(pop)
