#include "UObject.hpp"
#include "USplineMetadata.hpp"
USplineMetadata* USplineMetadata::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SplineMetadata");
    return (USplineMetadata*)res;
}
