#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UBaseProvider.hpp"
class UObject;
#pragma pack(push, 1)
class UColorProvider : public UBaseProvider {
public:
    static UColorProvider* StaticClass();
    FLinearColor GetColorBP(UObject* Context, float TimeOffset);
}; // Size: 0x28
#pragma pack(pop)
