#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULocalMessage : public UObject {
public:
    static ULocalMessage* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
