#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class APostProcessVolumeWithBlendDomain;
#pragma pack(push, 1)
class AOverland_Global_Sky_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    APostProcessVolumeWithBlendDomain* Low_End_Fog; // 0x258
    static AOverland_Global_Sky_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Overland_Global_Sky(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
