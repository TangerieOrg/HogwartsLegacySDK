#pragma once
#include <cstdint>
#include "FNavigationFilterArea.hpp"
#include "FNavigationFilterFlags.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNavigationQueryFilter : public UObject {
public:
    TArray<FNavigationFilterArea> Areas; // 0x28
    FNavigationFilterFlags IncludeFlags; // 0x38
    FNavigationFilterFlags ExcludeFlags; // 0x3c
    char pad_40[0x8];
    static UNavigationQueryFilter* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
