#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FRotatorValueVelocity.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class URotatorValueVelocityHelper : public UObject {
public:
    static URotatorValueVelocityHelper* StaticClass();
    static void Update(FRotatorValueVelocity& Data, FRotator& Value, float& DeltaSeconds);
    static FRotatorValueVelocity Inverse(FRotatorValueVelocity& Data);
    static void Get(FRotatorValueVelocity& Data, FRotator& OutValue, FRotator& OutVelocity);
    static void Activate(FRotatorValueVelocity& Data, FRotator Value, FRotator Velocity);
}; // Size: 0x28
#pragma pack(pop)
