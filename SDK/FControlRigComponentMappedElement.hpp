#pragma once
#include <cstdint>
#include "EControlRigComponentMapDirection.hpp"
#include "EControlRigComponentSpace.hpp"
#include "ERigElementType.hpp"
#include "FComponentReference.hpp"
#include "FTransform.hpp"
class USceneComponent;
#pragma pack(push, 1)
struct FControlRigComponentMappedElement {
    FComponentReference ComponentReference; // 0x0
    int32_t TransformIndex; // 0x28
    FName TransformName; // 0x2c
    ERigElementType ElementType; // 0x34
    char pad_35[0x3];
    FName ElementName; // 0x38
    EControlRigComponentMapDirection Direction; // 0x40
    char pad_41[0xf];
    FTransform Offset; // 0x50
    float weight; // 0x80
    EControlRigComponentSpace Space; // 0x84
    char pad_85[0x3];
    USceneComponent* SceneComponent; // 0x88
    int32_t ElementIndex; // 0x90
    int32_t SubIndex; // 0x94
    char pad_98[0x8];
}; // Size: 0xa0
#pragma pack(pop)
