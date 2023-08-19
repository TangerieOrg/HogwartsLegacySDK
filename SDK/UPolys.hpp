#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPolys : public UObject {
public:
    char pad_28[0x10];
    static UPolys* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
