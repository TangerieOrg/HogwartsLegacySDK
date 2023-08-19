#pragma once
#include <cstdint>
#include "USceneRigParameter.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneRigParameter_Transform : public USceneRigParameter {
public:
    UTransformProvider* Value; // 0x38
    static USceneRigParameter_Transform* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
