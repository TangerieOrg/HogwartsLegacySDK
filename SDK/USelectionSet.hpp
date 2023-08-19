#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USelectionSet : public UObject {
public:
    char pad_28[0x18];
    static USelectionSet* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
