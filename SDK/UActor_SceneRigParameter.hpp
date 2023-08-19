#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Object.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_SceneRigParameter : public UActorProvider {
public:
    FSceneRigParameterBinding_Object BoundParameter; // 0x38
    static UActor_SceneRigParameter* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
