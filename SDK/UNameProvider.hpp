#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
class UObject;
#pragma pack(push, 1)
class UNameProvider : public UBaseProvider {
public:
    static UNameProvider* StaticClass();
    FName GetNameBP(UObject* Caller);
}; // Size: 0x28
#pragma pack(pop)
