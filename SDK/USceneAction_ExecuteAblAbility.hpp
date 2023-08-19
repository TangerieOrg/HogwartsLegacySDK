#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UClass;
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_ExecuteAblAbility : public USceneRigObjectActionBase {
public:
    UClass* AblAbilityClass; // 0xa0
    bool PartialBodyAbility; // 0xa8
    char pad_a9[0x7];
    UActorProvider* OtherActor; // 0xb0
    static USceneAction_ExecuteAblAbility* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
