#pragma once
#include <cstdint>
#include "URPGAbilityCustomTargetEventListener.hpp"
class UClass;
class UObject;
struct FMunitionToInstigatorData;
#pragma pack(push, 1)
class URPGAbilityEventListener_OnTargetHitWithMunition : public URPGAbilityCustomTargetEventListener {
public:
    UClass* MunitionTypeFilter; // 0xa0
    static URPGAbilityEventListener_OnTargetHitWithMunition* StaticClass();
    void OnMunitionHit(UObject* Caller, FMunitionToInstigatorData& MunitionData);
}; // Size: 0xa8
#pragma pack(pop)
