#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableBase.hpp"
UGlobalLightingBlendable* UGlobalLightingBlendable::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendable");
    return (UGlobalLightingBlendable*)res;
}
