#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
class UFloatProvider;
#pragma pack(push, 1)
class USceneAction_SlaveToSpline : public USceneRigObjectActionBase {
public:
    UActorProvider* SplineActor; // 0xa0
    UFloatProvider* DistanceAlongSpline; // 0xa8
    static USceneAction_SlaveToSpline* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
