#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
class UObject;
#pragma pack(push, 1)
class UFloatProvider : public UBaseProvider {
public:
    static UFloatProvider* StaticClass();
    float GetFloatBP(UObject* Context, float TimeOffset);
}; // Size: 0x28
#pragma pack(pop)
