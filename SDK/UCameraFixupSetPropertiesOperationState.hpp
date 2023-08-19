#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
#pragma pack(push, 1)
class UCameraFixupSetPropertiesOperationState : public UCameraFixupOperationState {
public:
    char pad_40[0x10];
    static UCameraFixupSetPropertiesOperationState* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
