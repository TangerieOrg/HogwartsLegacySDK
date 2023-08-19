#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UDynamicBlueprintBinding : public UObject {
public:
    static UDynamicBlueprintBinding* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
