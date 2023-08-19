#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
class UCameraFixupNoiseOperations;
#pragma pack(push, 1)
class UCameraFixupNoiseOperationState : public UCameraFixupOperationState {
public:
    UCameraFixupNoiseOperations* CameraFixupNoiseOperations; // 0x40
    char pad_48[0x20];
    static UCameraFixupNoiseOperationState* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
