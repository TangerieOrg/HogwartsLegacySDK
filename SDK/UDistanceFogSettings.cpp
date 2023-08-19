#include "FDistanceFog.hpp"
#include "UDataAsset.hpp"
#include "UDistanceFogSettings.hpp"
#include "UMaterialInterface.hpp"
#include "UMaterialParameterCollection.hpp"
UDistanceFogSettings* UDistanceFogSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DistanceFogSettings");
    return (UDistanceFogSettings*)res;
}
