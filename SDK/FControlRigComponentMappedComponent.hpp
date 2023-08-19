#pragma once
#include <cstdint>
#include "EControlRigComponentMapDirection.hpp"
#include "ERigElementType.hpp"
class USceneComponent;
#pragma pack(push, 1)
struct FControlRigComponentMappedComponent {
    USceneComponent* Component; // 0x0
    FName ElementName; // 0x8
    ERigElementType ElementType; // 0x10
    EControlRigComponentMapDirection Direction; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
