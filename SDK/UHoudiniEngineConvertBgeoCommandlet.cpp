#include "UCommandlet.hpp"
#include "UHoudiniEngineConvertBgeoCommandlet.hpp"
UHoudiniEngineConvertBgeoCommandlet* UHoudiniEngineConvertBgeoCommandlet::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet");
    return (UHoudiniEngineConvertBgeoCommandlet*)res;
}
