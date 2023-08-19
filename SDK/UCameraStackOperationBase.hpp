#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCameraStackOperationBase : public UObject {
public:
    bool bEnabled; // 0x28
    char pad_29[0x7];
    static UCameraStackOperationBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
