#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UMultiFX2_Base;
class UCurveFloat;
class UClass;
class UCurveVector;
class AActor;
#pragma pack(push, 1)
class ALeviosoSpellTool : public AFireOnceSpellTool {
public:
    TArray<UMultiFX2_Base*> LeviosoFX2; // 0x870
    float MassMax; // 0x880
    float LinearDamping; // 0x884
    float AngularDamping; // 0x888
    float BeingClimbedLinearDamping; // 0x88c
    float BeingClimbedAngularDamping; // 0x890
    bool NoSimulatingWhenBeingClimbed; // 0x894
    char pad_895[0x3];
    float HoverForce; // 0x898
    float RagdollHoverForce; // 0x89c
    float HoverHeight; // 0x8a0
    float MinDiff; // 0x8a4
    float MaxDiff; // 0x8a8
    float TorqueScale; // 0x8ac
    UCurveFloat* HoverTargetOffset; // 0x8b0
    UCurveVector* HoverTargetRotation; // 0x8b8
    bool UpdateHeight; // 0x8c0
    char pad_8c1[0x3];
    float NoSupportDropRate; // 0x8c4
    float SupportTraceLength; // 0x8c8
    char pad_8cc[0x4];
    UClass* AOEMunition; // 0x8d0
    TArray<AActor*> IgnoreActors; // 0x8d8
    char pad_8e8[0x10];
    static ALeviosoSpellTool* StaticClass();
}; // Size: 0x8f8
#pragma pack(pop)
