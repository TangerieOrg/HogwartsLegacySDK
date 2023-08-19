#pragma once
#include <cstdint>
#include "FAxis.hpp"
#include "FConstraintDescriptionEx.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAimConstraintDescription : public FConstraintDescriptionEx {
    FAxis LookAt_Axis; // 0x10
    FAxis LookUp_Axis; // 0x20
    bool bUseLookUp; // 0x30
    char pad_31[0x3];
    FVector LookUpTarget; // 0x34
}; // Size: 0x40
#pragma pack(pop)
