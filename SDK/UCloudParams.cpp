#include "UCloudParams.hpp"
#include "UObject.hpp"
UCloudParams* UCloudParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.CloudParams");
    return (UCloudParams*)res;
}
