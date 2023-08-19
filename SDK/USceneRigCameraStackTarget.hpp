#pragma once
#include <cstdint>
#include "UCameraStackTarget.hpp"
#pragma pack(push, 1)
class USceneRigCameraStackTarget : public UCameraStackTarget {
public:
    char pad_a0[0x10];
    static USceneRigCameraStackTarget* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
