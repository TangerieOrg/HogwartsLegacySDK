#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UBlueprintFunctionLibrary : public UObject {
public:
    static UBlueprintFunctionLibrary* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
