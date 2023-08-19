#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UBaseProvider.hpp"
class UObject;
#pragma pack(push, 1)
class UTransformProvider : public UBaseProvider {
public:
    static UTransformProvider* StaticClass();
    FTransform GetTransformBP(UObject* Context, float TimeOffset);
}; // Size: 0x28
#pragma pack(pop)
