#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackNamedSecondaryTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    static UCameraStackNamedSecondaryTargetGetter* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
