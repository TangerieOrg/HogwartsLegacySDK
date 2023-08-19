#include "AActor.hpp"
#include "APhoenixMapRegion.hpp"
#include "ERegionType.hpp"
#include "ESplineMeshAxis\Type.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UMaterialInstanceDynamic.hpp"
APhoenixMapRegion* APhoenixMapRegion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixMapRegion");
    return (APhoenixMapRegion*)res;
}
