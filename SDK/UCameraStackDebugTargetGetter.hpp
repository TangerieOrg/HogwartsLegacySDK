#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackDebugTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    static UCameraStackDebugTargetGetter* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
