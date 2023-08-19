#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetter.hpp"
#pragma pack(push, 1)
class UCameraStackAttachParentGetter : public UCameraStackSecondaryTargetGetter {
public:
    static UCameraStackAttachParentGetter* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
