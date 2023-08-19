#pragma once
#include <cstdint>
#include "FWorldFXGenericManageSettings.hpp"
#include "UWorldFXOctreeFX.hpp"
#pragma pack(push, 1)
class UWorldFXOctreeFXGenericManaged : public UWorldFXOctreeFX {
public:
    char pad_50[0x8];
    FWorldFXGenericManageSettings Manage; // 0x58
    char pad_5c[0x4];
    static UWorldFXOctreeFXGenericManaged* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
