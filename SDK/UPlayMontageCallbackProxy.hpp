#pragma once
#include <cstdint>
#include "UObject.hpp"
struct FBranchingPointNotifyPayload;
class UAnimMontage;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UPlayMontageCallbackProxy : public UObject {
public:
    char pad_28[0x80];
    static UPlayMontageCallbackProxy* StaticClass();
    void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    static UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
}; // Size: 0xa8
#pragma pack(pop)
