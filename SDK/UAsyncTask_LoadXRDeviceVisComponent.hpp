#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UPrimitiveComponent;
class AActor;
struct FTransform;
struct FXRDeviceId;
#pragma pack(push, 1)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x28];
    UPrimitiveComponent* SpawnedComponent; // 0x58
    static UAsyncTask_LoadXRDeviceVisComponent* StaticClass();
    static UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent);
    static UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent);
}; // Size: 0x60
#pragma pack(pop)
