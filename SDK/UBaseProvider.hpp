#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UBaseProvider : public UObject {
public:
    static UBaseProvider* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
