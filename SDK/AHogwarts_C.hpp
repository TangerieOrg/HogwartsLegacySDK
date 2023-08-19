#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class AActor;
class ULevelStreaming;
class AStaticMeshActor;
class ULandscapeManager;
class UUIManager;
class UAvaStreamingManager;
#pragma pack(push, 1)
class AHogwarts_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    char pad_258[0x10];
    bool LoadedFromOverland; // 0x268
    char pad_269[0x2f];
    bool IsLevelLoadCritical; // 0x298
    char pad_299[0x7];
    AActor* PROXY_Rotated; // 0x2a0
    AActor* PROXY_AxisAligned; // 0x2a8
    AActor* PROXY_Origin; // 0x2b0
    AActor* Proxy_Ravenclaw; // 0x2b8
    AActor* Proxy_StoneBridge; // 0x2c0
    AActor* PROXY_ViaductBridge; // 0x2c8
    char pad_2d0[0x50];
    FTransform _0_Transform; // 0x320
    bool CritLoadComplete; // 0x350
    char pad_351[0x7];
    TArray<AActor*> StreamingVolumes; // 0x358
    char pad_368[0x668];
    FTransform StartNavPath; // 0x9d0
    char pad_a00[0x28];
    bool forceTECH; // 0xa28
    char pad_a29[0x16f];
    AActor* PROXY_Rotated_ExecuteUbergraph_Hogwarts_RefProperty; // 0xb98
    AActor* PROXY_AxisAligned_ExecuteUbergraph_Hogwarts_RefProperty; // 0xba0
    AStaticMeshActor* PROXY_Origin_ExecuteUbergraph_Hogwarts_RefProperty; // 0xba8
    AActor* PROXY_StoneBridge_ExecuteUbergraph_Hogwarts_RefProperty; // 0xbb0
    AActor* PROXY_ViaductBridge_ExecuteUbergraph_Hogwarts_RefProperty; // 0xbb8
    AActor* PROXY_Ravenclaw_ExecuteUbergraph_Hogwarts_RefProperty; // 0xbc0
    char pad_bc8[0x8];
    static AHogwarts_C* StaticClass();
    void ReceiveBeginPlay();
    void StreamingComplete();
    void ExecuteUbergraph_Hogwarts(int32_t EntryPoint, ULandscapeManager* CallFunc_Get_ReturnValue, ULevelStreaming* CallFunc_GetStreamingLevelAva_ReturnValue, bool CallFunc_IsLevelCritical_ReturnValue, ULandscapeManager* CallFunc_Get_ReturnValue_1, FString CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_2, UAvaStreamingManager* CallFunc_Get_ReturnValue_3, bool CallFunc_ForceLoadMaps_ReturnValue);
    void OverlandLoaded__DelegateSignature();
}; // Size: 0xbd0
#pragma pack(pop)
