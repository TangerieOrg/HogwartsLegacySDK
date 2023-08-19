#pragma once
#include <cstdint>
#include "ABP_SpiderBase_Medium_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ABP_Spider_Woodlouse_C : public ABP_SpiderBase_Medium_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2590
    char pad_2598[0x8];
    static ABP_Spider_Woodlouse_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spider_Woodlouse(int32_t EntryPoint);
}; // Size: 0x25a0
#pragma pack(pop)
