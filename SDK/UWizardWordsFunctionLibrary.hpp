#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UWizardWordsFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UWizardWordsFunctionLibrary* StaticClass();
    static FString EncryptString(FString Word);
}; // Size: 0x28
#pragma pack(pop)
