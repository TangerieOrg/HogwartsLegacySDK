#include "FComponentSync.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULODSyncComponent.hpp"
#include "UPrimitiveComponent.hpp"
ULODSyncComponent* ULODSyncComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LODSyncComponent");
    return (ULODSyncComponent*)res;
}
FString ULODSyncComponent::GetLODSyncDebugText() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LODSyncComponent.GetLODSyncDebugText"));
    struct Params_GetLODSyncDebugText {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLODSyncDebugText params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
