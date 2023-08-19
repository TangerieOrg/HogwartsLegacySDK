#include "UEnvironmentalGlobalsCustomScalarModMin.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModMin* UEnvironmentalGlobalsCustomScalarModMin::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMin");
    return (UEnvironmentalGlobalsCustomScalarModMin*)res;
}
