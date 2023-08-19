#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UBlueprintExtension : public UObject {
public:
    static UBlueprintExtension* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
