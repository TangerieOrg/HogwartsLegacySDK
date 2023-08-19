#pragma once
#include <cstdint>
#include "FRCFunctionDescription.hpp"
#include "FRCPropertyDescription.hpp"
class UClass;
#pragma pack(push, 1)
struct FDescribeObjectResponse {
    FString Name; // 0x0
    UClass* Class; // 0x10
    TArray<FRCPropertyDescription> Properties; // 0x18
    TArray<FRCFunctionDescription> Functions; // 0x28
}; // Size: 0x38
#pragma pack(pop)
