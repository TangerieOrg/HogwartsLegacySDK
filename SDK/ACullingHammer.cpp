#include "AActor.hpp"
#include "ACullingHammer.hpp"
#include "FCrackFillerPostProcessSettings.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UPostProcessComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
ACullingHammer* ACullingHammer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CullingHammer");
    return (ACullingHammer*)res;
}
void ACullingHammer::RebuildBlocker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CullingHammer.RebuildBlocker"));
    struct Params_RebuildBlocker {
    }; // Size: 0x0
    Params_RebuildBlocker params{};
    ProcessEvent(func, &params);
}
void ACullingHammer::EnableCrackFillerPostProcess(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CullingHammer.EnableCrackFillerPostProcess"));
    struct Params_EnableCrackFillerPostProcess {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_EnableCrackFillerPostProcess params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
