#pragma once
#include <cstdint>
#include "ABP_LargeBreakableWallBase_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class AActor;
#pragma pack(push, 1)
class ABP_BreakableWall_C : public ABP_LargeBreakableWallBase_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x378
    float BreakDirection; // 0x380
    float ForceOffset; // 0x384
    char pad_388[0x20];
    static ABP_BreakableWall_C* StaticClass();
    void ForceBreakActor(AActor* ActorToBreak);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BreakableWall(int32_t EntryPoint);
    void CustomPlayDepulssoVO__DelegateSignature();
    void HitWithDepulso__DelegateSignature();
}; // Size: 0x3a8
#pragma pack(pop)
