#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
struct FOptionalTriplet;
#pragma pack(push, 1)
class UOptionalTripletHelper : public UObject {
public:
    static UOptionalTripletHelper* StaticClass();
    static FVector ClampVec(FVector& InVec, FOptionalTriplet& InMin, FOptionalTriplet& InMax);
    static FRotator ClampRot(FRotator& InRot, FOptionalTriplet& InMin, FOptionalTriplet& InMax);
}; // Size: 0x28
#pragma pack(pop)
