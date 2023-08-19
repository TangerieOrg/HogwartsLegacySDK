#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
struct FTransform;
struct FXRDeviceId;
class UPrimitiveComponent;
#pragma pack(push, 1)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UXRAssetFunctionLibrary* StaticClass();
    static UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId);
    static UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform);
}; // Size: 0x28
#pragma pack(pop)
