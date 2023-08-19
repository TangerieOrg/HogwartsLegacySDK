#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UFXFilter : public UObject {
public:
    bool bIsNot; // 0x28
    char pad_29[0x7];
    static UFXFilter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
