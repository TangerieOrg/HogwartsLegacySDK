#pragma once
#include <cstdint>
#include "FScalarValueVelocity.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UScalarValueVelocityHelper : public UObject {
public:
    static UScalarValueVelocityHelper* StaticClass();
    static void Update(FScalarValueVelocity& Data, float& Value, float& DeltaSeconds);
    static FScalarValueVelocity Inverse(FScalarValueVelocity& Data);
    static void Get(FScalarValueVelocity& Data, float& OutValue, float& OutVelocity);
    static void Activate(FScalarValueVelocity& Data, float Value, float Velocity);
}; // Size: 0x28
#pragma pack(pop)
