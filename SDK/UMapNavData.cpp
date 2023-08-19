#include "FIntPoint.hpp"
#include "FMapBoundingBox.hpp"
#include "FMapTriangle.hpp"
#include "FVector.hpp"
#include "UMapNavData.hpp"
#include "UObject.hpp"
UMapNavData* UMapNavData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapNavData");
    return (UMapNavData*)res;
}
