#pragma once
#include <cstdint>
#include "UProperty.hpp"
#pragma pack(push, 1)
class UMulticastDelegateProperty : public UProperty {
public:
    char pad_70[0x8];
    static UMulticastDelegateProperty* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
