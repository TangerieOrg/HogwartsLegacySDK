#pragma once
#include <cstdint>
#include "EPlayerPerceptionEnableDisable.hpp"
#include "USceneRigActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_PlayerPerception : public USceneRigActionBase {
public:
    EPlayerPerceptionEnableDisable InteractTargeting; // 0x88
    EPlayerPerceptionEnableDisable AutoTargeting; // 0x89
    EPlayerPerceptionEnableDisable OppugnoTargeting; // 0x8a
    char pad_8b[0x5];
    UActorProvider* SpecialAutoTarget; // 0x90
    static USceneAction_PlayerPerception* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
