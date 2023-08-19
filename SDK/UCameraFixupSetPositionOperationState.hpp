#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
class UCameraFixupSetPositionMethodState;
#pragma pack(push, 1)
class UCameraFixupSetPositionOperationState : public UCameraFixupOperationState {
public:
    UCameraFixupSetPositionMethodState* MethodState; // 0x40
    static UCameraFixupSetPositionOperationState* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
