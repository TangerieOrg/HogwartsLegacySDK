#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
class UObject;
#pragma pack(push, 1)
class UBoolProvider : public UBaseProvider {
public:
    static UBoolProvider* StaticClass();
    bool GetBoolBP(UObject* Context);
}; // Size: 0x28
#pragma pack(pop)
