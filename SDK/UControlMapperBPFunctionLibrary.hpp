#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UObject;
class UInputComponent;
#pragma pack(push, 1)
class UControlMapperBPFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UControlMapperBPFunctionLibrary* StaticClass();
    static float GetInputAxisValue(AActor* InputComponentOwner, FName InputAxisName);
    static void EnableCustomInput(UObject* InputReceiver, UInputComponent* InputComponent);
    static void DisableCustomInput(UObject* InputReceiver, UInputComponent* InputComponent);
}; // Size: 0x28
#pragma pack(pop)
