#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCameraFixupOperationState : public UObject {
public:
    char pad_28[0x10];
    UObject* Context; // 0x38
    static UCameraFixupOperationState* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
