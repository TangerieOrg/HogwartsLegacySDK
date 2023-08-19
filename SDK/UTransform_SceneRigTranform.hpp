#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
class USceneAction_Transform;
#pragma pack(push, 1)
class UTransform_SceneRigTranform : public UTransformProvider {
public:
    USceneAction_Transform* TransformAction; // 0x28
    static UTransform_SceneRigTranform* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
