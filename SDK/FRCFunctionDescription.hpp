#pragma once
#include <cstdint>
#include "FRCPropertyDescription.hpp"
#pragma pack(push, 1)
struct FRCFunctionDescription {
    FString Name; // 0x0
    FString Description; // 0x10
    TArray<FRCPropertyDescription> Arguments; // 0x20
}; // Size: 0x30
#pragma pack(pop)
