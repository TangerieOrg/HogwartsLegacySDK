#pragma once
#include <cstdint>
#include "FLeviosoData.hpp"
#include "UStateEffectComponent.hpp"
class AMunitionType_Base;
class UCurveVector;
class AActor;
class UPrimitiveComponent;
class UCurveFloat;
#pragma pack(push, 1)
class ULeviosoComponent : public UStateEffectComponent {
public:
    FLeviosoData LeviosoData; // 0x190
    AMunitionType_Base* ActiveMunition; // 0x220
    UPrimitiveComponent* SavedPhysMesh; // 0x228
    char pad_230[0x10];
    UCurveFloat* SavedHoverTargetOffset; // 0x240
    UCurveVector* SavedHoverTargetRotation; // 0x248
    TArray<AActor*> IgnoreActors; // 0x250
    char pad_260[0x58];
    static ULeviosoComponent* StaticClass();
    void SetIgnoreActors(TArray<AActor*> i_Ingores);
    void SetFloorHeight(float Height);
    void SetData(FLeviosoData InData);
}; // Size: 0x2b8
#pragma pack(pop)
