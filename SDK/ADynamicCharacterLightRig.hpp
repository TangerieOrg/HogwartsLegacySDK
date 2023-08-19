#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EDynamicCharacterLightRigChannel.hpp"
#include "FBlendDomain.hpp"
#include "FDynamicCharacterLightRigLight.hpp"
#include "FDynamicLightAdaptationSettings.hpp"
class UObject;
class UClass;
#pragma pack(push, 1)
class ADynamicCharacterLightRig : public AActor {
public:
    float DayTemperature; // 0x248
    float NightTemperature; // 0x24c
    TArray<FDynamicCharacterLightRigLight> Lights; // 0x250
    EDynamicCharacterLightRigChannel LightingChannel; // 0x260
    char pad_261[0x7];
    FDynamicLightAdaptationSettings AdaptationSettings; // 0x268
    FBlendDomain BlendDomain; // 0x2c8
    bool bEnabled; // 0x300
    bool bUseAdaptationSettings; // 0x301
    bool bInitializedOwnerChannels; // 0x302
    char pad_303[0x5];
    static ADynamicCharacterLightRig* StaticClass();
    void LightRigEnabled(bool& Enabled);
    static void GetDynamicLightRig(AActor* ToActor, ADynamicCharacterLightRig*& DynamicLightRig);
    static void Get(AActor* Actor, ADynamicCharacterLightRig*& DynamicLightRig);
    void EnableLightRig(bool Enable);
    static void DynamicLightRigCinematicEnable(UObject* WorldContextObject);
    static void DynamicLightRigCinematicDisable(UObject* WorldContextObject, bool bDisable);
    static void DynamicLightRigCinematicDiabled(UObject* WorldContextObject, bool& bDisabled);
    void DisableLightRig();
    static void AttachDynamicLightRig(AActor* ToActor, UClass* DynamicLightRigClass, ADynamicCharacterLightRig*& DynamicLightRig, FName AttachSocket);
}; // Size: 0x308
#pragma pack(pop)
