#include "UCloudsWindParams.hpp"
#include "UObject.hpp"
UCloudsWindParams* UCloudsWindParams::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudsWindParams");
    return (UCloudsWindParams*)res;
}
