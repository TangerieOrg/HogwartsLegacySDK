#include "EGlobalLightingBlendableInputType.hpp"
#include "FCustomBlendableVDHW.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableVDHW.hpp"
UGlobalLightingBlendableVDHW* UGlobalLightingBlendableVDHW::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableVDHW");
    return (UGlobalLightingBlendableVDHW*)res;
}
