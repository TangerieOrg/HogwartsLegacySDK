#pragma once
#include <cstdint>
#include "UInteractiveGizmoBuilder.hpp"
#pragma pack(push, 1)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder {
public:
    char pad_28[0x98];
    static UIntervalGizmoBuilder* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
