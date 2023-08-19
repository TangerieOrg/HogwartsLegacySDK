#pragma once
#include <cstdint>
#include "UInteractiveGizmoBuilder.hpp"
#pragma pack(push, 1)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder {
public:
    char pad_28[0x98];
    static UTransformGizmoBuilder* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
