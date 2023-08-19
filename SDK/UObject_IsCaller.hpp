#pragma once
#include <cstdint>
#include "UObjectProvider.hpp"
#pragma pack(push, 1)
class UObject_IsCaller : public UObjectProvider {
public:
    static UObject_IsCaller* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
