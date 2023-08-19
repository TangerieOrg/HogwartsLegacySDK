#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackSceneRigParameterTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    char pad_b0[0x20];
    static UCameraStackSceneRigParameterTargetGetter* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
