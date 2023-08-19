#pragma once
#include <cstdint>
#include "ABP_SkinFX_ApparateParent_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ABP_SkinFX_ApparateLoop_C : public ABP_SkinFX_ApparateParent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x670
    static ABP_SkinFX_ApparateLoop_C* StaticClass();
    void SkinFXNotifyStart();
    void OnApparateFinished();
    void OnDisapparateFinished();
    void ExecuteUbergraph_BP_SkinFX_ApparateLoop(int32_t EntryPoint);
}; // Size: 0x678
#pragma pack(pop)
