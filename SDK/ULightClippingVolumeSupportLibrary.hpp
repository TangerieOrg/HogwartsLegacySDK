#pragma once
#include <cstdint>
#include "ELightClippingProviderVolumeMode.hpp"
#include "ELightClippingVolumeFilterType.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ULocalLightComponent;
class ALightClippingVolume;
#pragma pack(push, 1)
class ULightClippingVolumeSupportLibrary : public UBlueprintFunctionLibrary {
public:
    static ULightClippingVolumeSupportLibrary* StaticClass();
    static void GetLightClippingVolumeSource(ULocalLightComponent* LightComponent, ALightClippingVolume*& LightClippingVolumeActor);
    static void GetAllWithLightClippingVolumeActor(ALightClippingVolume* LightClippingVolumeActor, TArray<ULocalLightComponent*>& Lights, ELightClippingVolumeFilterType FilterType);
    static void FindAndAssignLightClippingVolumeSource(FName LightTag, ALightClippingVolume* LightClippingVolumeActor, int32_t& AssignedLights, bool bForceEvenIfAlreadySet, ELightClippingProviderVolumeMode VolumeMode);
    static void ClearLightClippingSource(ULocalLightComponent* LightComponent);
    static void ClearAllLightClippingVolumeSource(ALightClippingVolume* LightClippingVolumeActor, int32_t& UnassignedLights);
    static void AssignLightClippingVolumeSource(ULocalLightComponent* LightComponent, ALightClippingVolume* LightClippingVolumeActor, bool& bSuccess, ELightClippingProviderVolumeMode VolumeMode);
}; // Size: 0x28
#pragma pack(pop)
