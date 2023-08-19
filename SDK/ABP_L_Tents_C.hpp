#pragma once
#include <cstdint>
#include "ATent.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_L_Tents_C : public ATent {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    UChildActorComponent* ChildActor; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    TArray<void*> Meshes2; // 0x268
    static ABP_L_Tents_C* StaticClass();
    void UserConstructionScript();
    void SetTentMesh0();
    void ExecuteUbergraph_BP_L_Tents(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
