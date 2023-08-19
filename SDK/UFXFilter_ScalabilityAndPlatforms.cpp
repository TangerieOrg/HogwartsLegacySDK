#include "EPhoenixScalabilityCategory.hpp"
#include "UFXFilter.hpp"
#include "UFXFilter_ScalabilityAndPlatforms.hpp"
UFXFilter_ScalabilityAndPlatforms* UFXFilter_ScalabilityAndPlatforms::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_ScalabilityAndPlatforms");
    return (UFXFilter_ScalabilityAndPlatforms*)res;
}
