#pragma once
#include <cstdint>
#include "UObjectPropertyBase.hpp"
#pragma pack(push, 1)
class UWeakObjectProperty : public UObjectPropertyBase {
public:
    static UWeakObjectProperty* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
