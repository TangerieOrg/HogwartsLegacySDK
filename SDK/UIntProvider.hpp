#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
class UObject;
#pragma pack(push, 1)
class UIntProvider : public UBaseProvider {
public:
    static UIntProvider* StaticClass();
    int32_t GetIntBP(UObject* Context);
}; // Size: 0x28
#pragma pack(pop)
