#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
#pragma pack(push, 1)
class UCameraFixupSetAnglesOperationState : public UCameraFixupOperationState {
public:
    char pad_40[0x10];
    static UCameraFixupSetAnglesOperationState* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
