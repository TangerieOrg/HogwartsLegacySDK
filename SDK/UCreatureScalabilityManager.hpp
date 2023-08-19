#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCreatureScalabilityManager : public UObject {
public:
    char pad_28[0x100];
    static UCreatureScalabilityManager* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
