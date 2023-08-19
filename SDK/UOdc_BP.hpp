#pragma once
#include <cstdint>
#include "UObject.hpp"
struct FVector;
#pragma pack(push, 1)
class UOdc_BP : public UObject {
public:
    static UOdc_BP* StaticClass();
    static bool GetNavmeshPoint(int32_t Layer, FVector& InLoc, float InRadius, float InUpDist, float InDownDist, FVector& OutLoc);
}; // Size: 0x28
#pragma pack(pop)
