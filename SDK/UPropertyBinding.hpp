#pragma once
#include <cstdint>
#include "FDynamicPropertyPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPropertyBinding : public UObject {
public:
    char pad_28[0x8];
    FDynamicPropertyPath SourcePath; // 0x30
    FName DestinationProperty; // 0x58
    static UPropertyBinding* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
