#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
#pragma pack(push, 1)
class UObjectProvider : public UBaseProvider {
public:
    static UObjectProvider* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
