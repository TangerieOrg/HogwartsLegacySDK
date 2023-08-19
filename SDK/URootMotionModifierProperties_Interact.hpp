#pragma once
#include <cstdint>
#include "EInteractUseTargetTracker.hpp"
#include "ETargetID\Type.hpp"
#include "URootMotionModifierProperties.hpp"
class URootMotionModProperties_Interact;
#pragma pack(push, 1)
class URootMotionModifierProperties_Interact : public URootMotionModifierProperties {
public:
    EInteractUseTargetTracker UseTargetTracker; // 0x30
    bool bUseActorFromTracker; // 0x31
    ETargetID::Type SpecificTargetID; // 0x32
    char pad_33[0x5];
    URootMotionModProperties_Interact* Properties; // 0x38
    static URootMotionModifierProperties_Interact* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
