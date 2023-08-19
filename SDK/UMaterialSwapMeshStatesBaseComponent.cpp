#include "AActor.hpp"
#include "FMaterialSwapMeshStatesAndData.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialSwapMeshStatesBaseComponent.hpp"
UMaterialSwapMeshStatesBaseComponent* UMaterialSwapMeshStatesBaseComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStatesBaseComponent");
    return (UMaterialSwapMeshStatesBaseComponent*)res;
}
void UMaterialSwapMeshStatesBaseComponent::KillMaterialSwapMeshStatesComponent(UMaterialSwapMeshStatesBaseComponent* MaterialSwapMeshStatesComponent, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapMeshStatesBaseComponent.KillMaterialSwapMeshStatesComponent"));
    struct Params_KillMaterialSwapMeshStatesComponent {
        UMaterialSwapMeshStatesBaseComponent* MaterialSwapMeshStatesComponent; // 0x0
        bool bSuccess; // 0x8
    }; // Size: 0x9
    Params_KillMaterialSwapMeshStatesComponent params{};
    params.MaterialSwapMeshStatesComponent = (UMaterialSwapMeshStatesBaseComponent*)MaterialSwapMeshStatesComponent;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UMaterialSwapMeshStatesBaseComponent::KillAllMaterialSwapMeshStatesComponentsByTag(AActor* Target, FName Tag, int32_t& CountOfDestroyed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapMeshStatesBaseComponent.KillAllMaterialSwapMeshStatesComponentsByTag"));
    struct Params_KillAllMaterialSwapMeshStatesComponentsByTag {
        AActor* Target; // 0x0
        FName Tag; // 0x8
        int32_t CountOfDestroyed; // 0x10
    }; // Size: 0x14
    Params_KillAllMaterialSwapMeshStatesComponentsByTag params{};
    params.Target = (AActor*)Target;
    params.Tag = (FName)Tag;
    params.CountOfDestroyed = (int32_t)CountOfDestroyed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CountOfDestroyed = params.CountOfDestroyed;
}
void UMaterialSwapMeshStatesBaseComponent::CountAllMaterialSwapMeshStatesComponentsByTag(AActor* Target, FName Tag, int32_t& ActiveCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapMeshStatesBaseComponent.CountAllMaterialSwapMeshStatesComponentsByTag"));
    struct Params_CountAllMaterialSwapMeshStatesComponentsByTag {
        AActor* Target; // 0x0
        FName Tag; // 0x8
        int32_t ActiveCount; // 0x10
    }; // Size: 0x14
    Params_CountAllMaterialSwapMeshStatesComponentsByTag params{};
    params.Target = (AActor*)Target;
    params.Tag = (FName)Tag;
    params.ActiveCount = (int32_t)ActiveCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActiveCount = params.ActiveCount;
}
