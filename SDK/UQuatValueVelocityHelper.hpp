#pragma once
#include <cstdint>
#include "FQuatValueVelocity.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UQuatValueVelocityHelper : public UObject {
public:
    static UQuatValueVelocityHelper* StaticClass();
    static void Update(FQuatValueVelocity& Data, FRotator& Value, float& DeltaSeconds);
    static FQuatValueVelocity Inverse(FQuatValueVelocity& Data);
    static void Get(FQuatValueVelocity& Data, FRotator& OutValue, FVector& OutVelocity);
    static void Activate(FQuatValueVelocity& Data, FRotator Value, FVector Velocity);
}; // Size: 0x28
#pragma pack(pop)
