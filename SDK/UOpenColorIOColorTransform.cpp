#include "UObject.hpp"
#include "UOpenColorIOColorTransform.hpp"
#include "UOpenColorIOConfiguration.hpp"
UOpenColorIOColorTransform* UOpenColorIOColorTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/OpenColorIO.OpenColorIOColorTransform");
    return (UOpenColorIOColorTransform*)res;
}
