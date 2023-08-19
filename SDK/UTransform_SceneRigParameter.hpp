#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Transform.hpp"
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_SceneRigParameter : public UTransformProvider {
public:
    FSceneRigParameterBinding_Transform BoundParameter; // 0x28
    static UTransform_SceneRigParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
