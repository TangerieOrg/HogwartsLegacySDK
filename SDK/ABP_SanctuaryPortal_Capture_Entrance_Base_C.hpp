#pragma once
#include <cstdint>
#include "ASanctuaryPortalCaptureEntrance.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UObject;
#pragma pack(push, 1)
class ABP_SanctuaryPortal_Capture_Entrance_Base_C : public ASanctuaryPortalCaptureEntrance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x270
    FHermesBPDelegateHandle RevokeControlEventHandle; // 0x278
    static ABP_SanctuaryPortal_Capture_Entrance_Base_C* StaticClass();
    void ReceiveBeginPlay();
    void BiomeEntryAboutToRevokeControl(UObject* Caller, FName& String);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_SanctuaryPortal_Capture_Entrance_Base(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
