#pragma once
#include <cstdint>
#include "UObjectPropertyBase.hpp"
#pragma pack(push, 1)
class ULazyObjectProperty : public UObjectPropertyBase {
public:
    static ULazyObjectProperty* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
