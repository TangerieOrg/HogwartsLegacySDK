#include "FDateTime.hpp"
#include "FGeocentricOrbit.hpp"
#include "FGeocentricOrbitResources.hpp"
#include "FGeocentricOrbitsAdvanced.hpp"
#include "FGeocentricOrbitsShow.hpp"
#include "FTopographicObserver.hpp"
#include "UGeocentricOrbitsComponent.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
UGeocentricOrbitsComponent* UGeocentricOrbitsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GeocentricOrbitsComponent");
    return (UGeocentricOrbitsComponent*)res;
}
