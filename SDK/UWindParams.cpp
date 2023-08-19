#include "UObject.hpp"
#include "UWindParams.hpp"
UWindParams* UWindParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WindParams");
    return (UWindParams*)res;
}
