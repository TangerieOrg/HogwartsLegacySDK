#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UBTCustomComponent;
#pragma pack(push, 1)
class UBTCustomBPFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UBTCustomBPFunctionLibrary* StaticClass();
    static void EnableBTCustomAction(UObject* InputReceiver, UBTCustomComponent* InputComponent);
    static void DisableBTCustomAction(UObject* InputReceiver, UBTCustomComponent* InputComponent);
}; // Size: 0x28
#pragma pack(pop)
