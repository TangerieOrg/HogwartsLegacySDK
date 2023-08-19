#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FStencilManagerEnableInterfaceList.hpp"
#include "FStencilManagerMPCGlobals.hpp"
class UStencilManagerSettings;
class UStencilManagerExternalControls;
class UObject;
#pragma pack(push, 1)
class AStencilManagerSingleton : public AActor {
public:
    UStencilManagerSettings* Settings; // 0x248
    UStencilManagerExternalControls* ExternalControls; // 0x250
    TArray<FName> DisabledGroups; // 0x258
    FStencilManagerEnableInterfaceList EnableInterfaces; // 0x268
    TArray<UObject*> HardReferences; // 0x278
    char pad_288[0x230];
    float StencilBlend; // 0x4b8
    bool bUpdatedStencilBlend; // 0x4bc
    char pad_4bd[0x3];
    FStencilManagerMPCGlobals MPCGlobals; // 0x4c0
    char pad_4cc[0x4];
    TArray<FName> ConsoleDisabledGroups; // 0x4d0
    bool bConsoleDisableStencil; // 0x4e0
    bool bDisableStencil; // 0x4e1
    char pad_4e2[0x6];
    static AStencilManagerSingleton* StaticClass();
    static void SetStencilPlayerNearFadeDisable(UObject* WorldContextObject, bool bPlayerNearFadeDisable);
    static void SetStencilBlend(UObject* WorldContextObject, float blendVal);
    static void SetOutdoorsDaytimeBoost(UObject* WorldContextObject, float boostVal);
}; // Size: 0x4e8
#pragma pack(pop)
