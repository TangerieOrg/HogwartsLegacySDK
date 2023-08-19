#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FFXOverride;
#pragma pack(push, 1)
class UFXOverrideFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UFXOverrideFunctionLibrary* StaticClass();
    static bool IsMatch(FFXOverride& FXOverride);
}; // Size: 0x28
#pragma pack(pop)
