#pragma once
#include <cstdint>
#include "UInteractionMechanic.hpp"
class UTransformGizmo;
class USingleClickInputBehavior;
class UTransformProxy;
#pragma pack(push, 1)
class UConstructionPlaneMechanic : public UInteractionMechanic {
public:
    char pad_30[0x98];
    UTransformGizmo* PlaneTransformGizmo; // 0xc8
    UTransformProxy* PlaneTransformProxy; // 0xd0
    char pad_d8[0x10];
    USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0xe8
    static UConstructionPlaneMechanic* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
