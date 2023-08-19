#include "FRuntimeFloatCurve.hpp"
#include "UAnimMetaData.hpp"
#include "UAnimMetaDataNPCStrafe.hpp"
UAnimMetaDataNPCStrafe* UAnimMetaDataNPCStrafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimMetaDataNPCStrafe");
    return (UAnimMetaDataNPCStrafe*)res;
}
