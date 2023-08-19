#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVectorValueVelocity.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UVectorValueVelocityHelper : public UObject {
public:
    static UVectorValueVelocityHelper* StaticClass();
    static void Update(FVectorValueVelocity& Data, FVector& Value, float& DeltaSeconds);
    static FVectorValueVelocity Inverse(FVectorValueVelocity& Data);
    static void Get(FVectorValueVelocity& Data, FVector& OutValue, FVector& OutVelocity);
    static void Activate(FVectorValueVelocity& Data, FVector Value, FVector Velocity);
}; // Size: 0x28
#pragma pack(pop)
