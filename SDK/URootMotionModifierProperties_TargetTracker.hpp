#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "ERootMotionModTargetType.hpp"
#include "ETargetID\Type.hpp"
#include "FVector.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_TargetTracker : public URootMotionModifierProperties {
public:
    ERootMotionModTargetType TargetType; // 0x30
    char pad_31[0x3];
    FVector Offset; // 0x34
    bool bGetActorFromTracker; // 0x40
    ETargetID::Type GetActorFromTargetID; // 0x41
    ECustomInterpType::Type InterpType; // 0x42
    char pad_43[0x1];
    float InterpSpeed; // 0x44
    static URootMotionModifierProperties_TargetTracker* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
