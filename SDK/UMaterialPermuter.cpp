#include "AActor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMaterialPermuter.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
UMaterialPermuter* UMaterialPermuter::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuter");
    return (UMaterialPermuter*)res;
}
void UMaterialPermuter::MaterialPermuterSetBaseMaterial(UMeshComponent* Mesh, int32_t Index, UMaterialInterface* Material, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuter.MaterialPermuterSetBaseMaterial"));
    struct Params_MaterialPermuterSetBaseMaterial {
        UMeshComponent* Mesh; // 0x0
        int32_t Index; // 0x8
        char pad_c[0x4];
        UMaterialInterface* Material; // 0x10
        bool Success; // 0x18
    }; // Size: 0x19
    Params_MaterialPermuterSetBaseMaterial params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.Index = (int32_t)Index;
    params.Material = (UMaterialInterface*)Material;
    params.Success = (bool)Success;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Success = params.Success;
}
void UMaterialPermuter::MaterialPermuterClearAllSwaps(AActor* Actor, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuter.MaterialPermuterClearAllSwaps"));
    struct Params_MaterialPermuterClearAllSwaps {
        AActor* Actor; // 0x0
        bool bSuccess; // 0x8
    }; // Size: 0x9
    Params_MaterialPermuterClearAllSwaps params{};
    params.Actor = (AActor*)Actor;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UMaterialPermuter::MaterialPermuterPrepareSetBaseMaterials(UMeshComponent* Mesh, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuter.MaterialPermuterPrepareSetBaseMaterials"));
    struct Params_MaterialPermuterPrepareSetBaseMaterials {
        UMeshComponent* Mesh; // 0x0
        bool Success; // 0x8
    }; // Size: 0x9
    Params_MaterialPermuterPrepareSetBaseMaterials params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.Success = (bool)Success;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Success = params.Success;
}
void UMaterialPermuter::MaterialPermuterIsMeshSwapped(UMeshComponent* Mesh, bool& bIsSwapped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuter.MaterialPermuterIsMeshSwapped"));
    struct Params_MaterialPermuterIsMeshSwapped {
        UMeshComponent* Mesh; // 0x0
        bool bIsSwapped; // 0x8
    }; // Size: 0x9
    Params_MaterialPermuterIsMeshSwapped params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.bIsSwapped = (bool)bIsSwapped;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsSwapped = params.bIsSwapped;
}
void UMaterialPermuter::MaterialPermuterGetMeshSwapOwner(UMeshComponent* Mesh, UObject*& SwapOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuter.MaterialPermuterGetMeshSwapOwner"));
    struct Params_MaterialPermuterGetMeshSwapOwner {
        UMeshComponent* Mesh; // 0x0
        UObject* SwapOwner; // 0x8
    }; // Size: 0x10
    Params_MaterialPermuterGetMeshSwapOwner params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.SwapOwner = (UObject*)SwapOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SwapOwner = params.SwapOwner;
}
void UMaterialPermuter::MaterialPermuterClearMeshSwap(UMeshComponent* Mesh, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuter.MaterialPermuterClearMeshSwap"));
    struct Params_MaterialPermuterClearMeshSwap {
        UMeshComponent* Mesh; // 0x0
        bool bSuccess; // 0x8
    }; // Size: 0x9
    Params_MaterialPermuterClearMeshSwap params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
