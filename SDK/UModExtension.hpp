#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UModExtension : public UObject {
public:
    static UModExtension* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
