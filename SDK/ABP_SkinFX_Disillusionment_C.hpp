#pragma once
#include <cstdint>
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class AActor;
#pragma pack(push, 1)
class ABP_SkinFX_Disillusionment_C : public ABP_SkinFX_Graph_Parent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5d0
    static ABP_SkinFX_Disillusionment_C* StaticClass();
    void SkinFXNotifyStart();
    void SkinFXNotifyKill();
    void ExecuteUbergraph_BP_SkinFX_Disillusionment(int32_t EntryPoint, AActor* CallFunc_SkinFXGetAffectedActor_AffectedActor);
}; // Size: 0x5d8
#pragma pack(pop)
