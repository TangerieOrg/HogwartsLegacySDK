#include "FGroomConversionSettings.hpp"
#include "FHairGroupsInterpolation.hpp"
#include "UGroomImportOptions.hpp"
#include "UObject.hpp"
UGroomImportOptions* UGroomImportOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomImportOptions");
    return (UGroomImportOptions*)res;
}
