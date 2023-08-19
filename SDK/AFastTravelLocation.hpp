#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbEditorButtonWidget.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class AFastTravelLocation : public AActor {
public:
    char pad_248[0x8];
    FString LocationIdName; // 0x250
    FDbSingleColumnInfo RegionId; // 0x260
    bool bIsSaveLocation; // 0x2e8
    char pad_2e9[0x3];
    FVector HUDOffset; // 0x2ec
    FDbEditorButtonWidget AddButton; // 0x2f8
    static AFastTravelLocation* StaticClass();
    void Unlock();
    void SetAvailable(bool availableIn);
    void Lock();
    void Handle_SetAvailable(bool availableIn);
    void GetInteractLocationBP(FVector& WorldLocation);
    bool GetAvailable();
    void AdjustCogTargetPoint(FVector Location);
    void AdjustBeaconWorldLocation(FString Name, FVector& WorldLocation);
    void Activate(bool ACTIVE);
}; // Size: 0x378
#pragma pack(pop)
