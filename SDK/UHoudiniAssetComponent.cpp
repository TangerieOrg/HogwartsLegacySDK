#include "ECollisionTraceFlag.hpp"
#include "FBodyInstance.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "UAssetUserData.hpp"
#include "UFoliageType_InstancedStaticMesh.hpp"
#include "UFunction.hpp"
#include "UHoudiniAssetComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
UHoudiniAssetComponent* UHoudiniAssetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent");
    return (UHoudiniAssetComponent*)res;
}
int32_t UHoudiniAssetComponent::GetAssetId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniEngineRuntime.HoudiniAssetComponent.GetAssetId"));
    struct Params_GetAssetId {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAssetId params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
