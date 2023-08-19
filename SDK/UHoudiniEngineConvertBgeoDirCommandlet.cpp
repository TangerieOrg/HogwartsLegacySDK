#include "UCommandlet.hpp"
#include "UHoudiniEngineConvertBgeoDirCommandlet.hpp"
UHoudiniEngineConvertBgeoDirCommandlet* UHoudiniEngineConvertBgeoDirCommandlet::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet");
    return (UHoudiniEngineConvertBgeoDirCommandlet*)res;
}
