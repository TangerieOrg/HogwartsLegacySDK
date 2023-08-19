#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackDuelingPartnerTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    static UCameraStackDuelingPartnerTargetGetter* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
