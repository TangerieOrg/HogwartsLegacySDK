#pragma once
#include <cstdint>
#include "UPropertyValue.hpp"
#pragma pack(push, 1)
class UPropertyValueSoftObject : public UPropertyValue {
public:
    static UPropertyValueSoftObject* StaticClass();
}; // Size: 0x1b8
#pragma pack(pop)
