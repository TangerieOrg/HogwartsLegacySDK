#pragma once
#include <cstdint>
#include "UCameraStackBehavior.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorNoOp : public UCameraStackBehavior {
public:
    static UCameraStackBehaviorNoOp* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
