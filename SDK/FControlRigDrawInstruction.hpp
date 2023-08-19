#pragma once
#include <cstdint>
#include "EControlRigDrawSettings\Primitive.hpp"
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FControlRigDrawInstruction {
    FName Name; // 0x0
    EControlRigDrawSettings::Primitive PrimitiveType; // 0x8
    char pad_9[0x7];
    TArray<FVector> Positions; // 0x10
    FLinearColor Color; // 0x20
    float Thickness; // 0x30
    char pad_34[0xc];
    FTransform Transform; // 0x40
    char pad_70[0x30];
}; // Size: 0xa0
#pragma pack(pop)
