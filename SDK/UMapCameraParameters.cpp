#include "FVector2D.hpp"
#include "UDataAsset.hpp"
#include "UMapCameraParameters.hpp"
UMapCameraParameters* UMapCameraParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapCameraParameters");
    return (UMapCameraParameters*)res;
}
