#include "FGroomHairGroupPreview.hpp"
#include "UGroomHairGroupsPreview.hpp"
#include "UObject.hpp"
UGroomHairGroupsPreview* UGroomHairGroupsPreview::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomHairGroupsPreview");
    return (UGroomHairGroupsPreview*)res;
}
