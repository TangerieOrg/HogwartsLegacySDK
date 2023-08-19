#pragma once
#include <cstdint>
#include "FPathCollectorPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPathCollector : public UObject {
public:
    TArray<FPathCollectorPath> ClosestPaths; // 0x28
    static UPathCollector* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
