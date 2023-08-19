#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_PerformTaskExecute : public USceneRigObjectActionBase {
public:
    UActorProvider* PerformTaskActor; // 0xa0
    static USceneAction_PerformTaskExecute* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
