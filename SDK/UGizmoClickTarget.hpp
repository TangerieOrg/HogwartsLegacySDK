#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGizmoClickTarget : public UInterface {
public:
    static UGizmoClickTarget* StaticClass();
    void UpdateHoverState(bool bHovering);
}; // Size: 0x28
#pragma pack(pop)
