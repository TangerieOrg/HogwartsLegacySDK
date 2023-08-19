#include "UEnvironmentalGlobalsArachnophobiaMode.hpp"
#include "UEnvironmentalGlobalsScalarVar.hpp"
UEnvironmentalGlobalsArachnophobiaMode* UEnvironmentalGlobalsArachnophobiaMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvironmentalGlobalsArachnophobiaMode");
    return (UEnvironmentalGlobalsArachnophobiaMode*)res;
}
