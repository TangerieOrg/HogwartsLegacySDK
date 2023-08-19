#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
class UObject;
struct FVector;
#pragma pack(push, 1)
class UBlendSpaceInputProvider : public UBaseProvider {
public:
    static UBlendSpaceInputProvider* StaticClass();
    bool GetBlendSpaceInput(UObject* Caller, FVector& BlendSpaceInput);
}; // Size: 0x28
#pragma pack(pop)
