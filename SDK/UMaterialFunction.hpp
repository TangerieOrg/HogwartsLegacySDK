#pragma once
#include <cstdint>
#include "UMaterialFunctionInterface.hpp"
#pragma pack(push, 1)
class UMaterialFunction : public UMaterialFunctionInterface {
public:
    FString Description; // 0x40
    uint8_t bExposeToLibrary : 1; // 0x50
    uint8_t bPrefixParameterNames : 1; // 0x50
    uint8_t pad_bitfield_50_2 : 6;
    char pad_51[0x7];
    static UMaterialFunction* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
