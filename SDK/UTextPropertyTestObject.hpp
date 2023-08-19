#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTextPropertyTestObject : public UObject {
public:
    char pad_28[0x48];
    static UTextPropertyTestObject* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
