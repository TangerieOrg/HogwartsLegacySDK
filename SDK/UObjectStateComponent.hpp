#pragma once
#include <cstdint>
#include "FObjectStateData.hpp"
#include "UBaseStateComponent.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UObjectStateComponent : public UBaseStateComponent {
public:
    FObjectStateData ObjectStateData; // 0x5a0
    static UObjectStateComponent* StaticClass();
    void SetTargetable(bool bTargetable);
    void SetStartBroken(bool StartBroken);
    void SetNeverAffectNavmesh(bool NeverAffectNavmesh);
    void SetImportant(bool bImportant);
    void SetHitSfx(UAkAudioEvent* InSfx);
    void SetDamageable(bool bDamageable);
    void SetCanHighlight(bool bCanHighlight);
    void SetBaseHealth(float baseHealth);
}; // Size: 0x638
#pragma pack(pop)
