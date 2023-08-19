#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class AStaticMeshActor;
#pragma pack(push, 1)
class AHN_BB_Nav_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    AStaticMeshActor* SM_DoNotDelete_OnlyForNavGeneration_ExecuteUbergraph_HN_BB_Nav_RefProperty; // 0x258
    static AHN_BB_Nav_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_HN_BB_Nav(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
