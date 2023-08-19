#pragma once
#include <cstdint>
#include "UProperty.hpp"
#pragma pack(push, 1)
class UDelegateProperty : public UProperty {
public:
    char pad_70[0x8];
    static UDelegateProperty* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
