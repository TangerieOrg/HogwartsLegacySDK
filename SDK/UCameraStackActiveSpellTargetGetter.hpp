#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackActiveSpellTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    static UCameraStackActiveSpellTargetGetter* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
