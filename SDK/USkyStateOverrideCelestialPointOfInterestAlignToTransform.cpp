#include "USkyStateOverrideCelestialPointOfInterestAlignTo.hpp"
#include "USkyStateOverrideCelestialPointOfInterestAlignToTransform.hpp"
#include "UTransformProvider.hpp"
USkyStateOverrideCelestialPointOfInterestAlignToTransform* USkyStateOverrideCelestialPointOfInterestAlignToTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkyStateOverrideCelestialPointOfInterestAlignToTransform");
    return (USkyStateOverrideCelestialPointOfInterestAlignToTransform*)res;
}
