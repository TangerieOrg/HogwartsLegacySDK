#include "UObject.hpp"
#include "UStreamlineSettings.hpp"
UStreamlineSettings* UStreamlineSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamlineRHI.StreamlineSettings");
    return (UStreamlineSettings*)res;
}
