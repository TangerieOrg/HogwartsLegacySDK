#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBaseProvider.hpp"
class UObject;
#pragma pack(push, 1)
class UVectorProvider : public UBaseProvider {
public:
    static UVectorProvider* StaticClass();
    FVector GetVectorBP(UObject* Context, float TimeOffset);
}; // Size: 0x28
#pragma pack(pop)
