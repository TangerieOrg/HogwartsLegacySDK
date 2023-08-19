#include "UObject.hpp"
#include "UUsdPrimTwin.hpp"
UUsdPrimTwin* UUsdPrimTwin::StaticClass() {
    static auto res = find_uobject("Class /Script/USDStage.UsdPrimTwin");
    return (UUsdPrimTwin*)res;
}
