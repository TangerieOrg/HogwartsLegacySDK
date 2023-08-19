#pragma once
#include <cstdint>
#include "ABP_Portcullis_Base_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
class UObject;
struct FLockManagerLock;
#pragma pack(push, 1)
class ABP_HW_ClocktowerPortcullis_C : public ABP_Portcullis_Base_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x390
    UStaticMeshComponent* PortculisFrameRight; // 0x398
    static ABP_HW_ClocktowerPortcullis_C* StaticClass();
    void LockChanged(UObject* Caller, FLockManagerLock& Lock);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HW_ClocktowerPortcullis(int32_t EntryPoint);
}; // Size: 0x3a0
#pragma pack(pop)
