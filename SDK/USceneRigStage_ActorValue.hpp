#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneRigStage_ActorValue : public USceneRigStage_ParameterValue {
public:
    UActorProvider* Provider; // 0x28
    static USceneRigStage_ActorValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
