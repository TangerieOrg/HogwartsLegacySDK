#pragma once
#include <cstdint>
#include "ELightClippingPlanesFilterType.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ULocalLightComponent;
class ALightClippingPlanes;
class UObject;
class ULevel;
#pragma pack(push, 1)
class ULightClippingPlanesSupportLibrary : public UBlueprintFunctionLibrary {
public:
    static ULightClippingPlanesSupportLibrary* StaticClass();
    static void GetLightClippingPlanesSource(ULocalLightComponent* LightComponent, ALightClippingPlanes*& LightClippingPlanesActor);
    static void GetAllWorldLightsWithTag(UObject* WorldContextObject, FName LightTag, TArray<ULocalLightComponent*>& Lights);
    static void GetAllWithLightClippingPlanesActor(ALightClippingPlanes* LightClippingPlanesActor, TArray<ULocalLightComponent*>& Lights, ELightClippingPlanesFilterType FilterType);
    static void GetAllLevelLightsWithTag(ULevel* Level, FName LightTag, TArray<ULocalLightComponent*>& Lights);
    static void FindAndAssignLightClippingPlanesSource(FName LightTag, ALightClippingPlanes* LightClippingPlanesActor, int32_t& AssignedLights, bool bForceEvenIfAlreadySet, bool bInvertClippingPlanes);
    static void ClearLightClippingSource(ULocalLightComponent* LightComponent);
    static void ClearAllLightClippingPlanesSource(ALightClippingPlanes* LightClippingPlanesActor, int32_t& UnassignedLights);
    static void AssignLightClippingPlanesSource(ULocalLightComponent* LightComponent, ALightClippingPlanes* LightClippingPlanesActor, bool& bSuccess, bool bInvertClippingPlanes);
}; // Size: 0x28
#pragma pack(pop)
