#pragma once
#include <cstdint>
#include "EControllerHand.hpp"
#include "ETrackingStatus.hpp"
#include "FVector.hpp"
#include "UPrimitiveComponent.hpp"
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
class UMotionControllerComponent : public UPrimitiveComponent {
public:
    int32_t PlayerIndex; // 0x480
    EControllerHand Hand; // 0x484
    char pad_485[0x3];
    FName MotionSource; // 0x488
    uint8_t bDisableLowLatencyUpdate : 1; // 0x490
    uint8_t pad_bitfield_490_1 : 7;
    char pad_491[0x3];
    ETrackingStatus CurrentTrackingStatus; // 0x494
    bool bDisplayDeviceModel; // 0x495
    char pad_496[0x2];
    FName DisplayModelSource; // 0x498
    UStaticMesh* CustomDisplayMesh; // 0x4a0
    TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x4a8
    char pad_4b8[0x68];
    UPrimitiveComponent* DisplayComponent; // 0x520
    char pad_528[0x18];
    static UMotionControllerComponent* StaticClass();
    void SetTrackingSource(EControllerHand NewSource);
    void SetTrackingMotionSource(FName NewSource);
    void SetShowDeviceModel(bool bShowControllerModel);
    void SetDisplayModelSource(FName NewDisplayModelSource);
    void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);
    void SetAssociatedPlayerIndex(int32_t NewPlayer);
    void OnMotionControllerUpdated();
    bool IsTracked();
    EControllerHand GetTrackingSource();
    float GetParameterValue(FName InName, bool& bValueFound);
    FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);
}; // Size: 0x540
#pragma pack(pop)
