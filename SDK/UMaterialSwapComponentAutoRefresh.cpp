#include "AActor.hpp"
#include "EMaterialSwapPriority.hpp"
#include "FMaterialSwapInfo.hpp"
#include "FMaterialSwapParameters.hpp"
#include "UFunction.hpp"
#include "UMaterialSwapComponent.hpp"
#include "UMaterialSwapComponentAutoRefresh.hpp"
#include "UMaterialSwapInfoObjectBase.hpp"
UMaterialSwapComponentAutoRefresh* UMaterialSwapComponentAutoRefresh::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapComponentAutoRefresh");
    return (UMaterialSwapComponentAutoRefresh*)res;
}
void UMaterialSwapComponentAutoRefresh::HasAutoRefreshMaterialSwap(AActor* Actor, bool& bHasMaterialSwap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponentAutoRefresh.HasAutoRefreshMaterialSwap"));
    struct Params_HasAutoRefreshMaterialSwap {
        AActor* Actor; // 0x0
        bool bHasMaterialSwap; // 0x8
    }; // Size: 0x9
    Params_HasAutoRefreshMaterialSwap params{};
    params.Actor = (AActor*)Actor;
    params.bHasMaterialSwap = (bool)bHasMaterialSwap;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bHasMaterialSwap = params.bHasMaterialSwap;
}
void UMaterialSwapComponentAutoRefresh::GetAutoRefreshMaterialSwap(AActor* Actor, UMaterialSwapComponentAutoRefresh*& MaterialSwapAutoRefreshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponentAutoRefresh.GetAutoRefreshMaterialSwap"));
    struct Params_GetAutoRefreshMaterialSwap {
        AActor* Actor; // 0x0
        UMaterialSwapComponentAutoRefresh* MaterialSwapAutoRefreshComponent; // 0x8
    }; // Size: 0x10
    Params_GetAutoRefreshMaterialSwap params{};
    params.Actor = (AActor*)Actor;
    params.MaterialSwapAutoRefreshComponent = (UMaterialSwapComponentAutoRefresh*)MaterialSwapAutoRefreshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialSwapAutoRefreshComponent = params.MaterialSwapAutoRefreshComponent;
}
bool UMaterialSwapComponentAutoRefresh::CreateSwapAutoRefresh(AActor* Actor, UMaterialSwapComponentAutoRefresh*& MaterialSwapComponent, EMaterialSwapPriority Priority, FName Group, FName SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponentAutoRefresh.CreateSwapAutoRefresh"));
    struct Params_CreateSwapAutoRefresh {
        AActor* Actor; // 0x0
        UMaterialSwapComponentAutoRefresh* MaterialSwapComponent; // 0x8
        EMaterialSwapPriority Priority; // 0x10
        char pad_11[0x3];
        FName Group; // 0x14
        FName SubType; // 0x1c
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_CreateSwapAutoRefresh params{};
    params.Actor = (AActor*)Actor;
    params.MaterialSwapComponent = (UMaterialSwapComponentAutoRefresh*)MaterialSwapComponent;
    params.Priority = (EMaterialSwapPriority)Priority;
    params.Group = (FName)Group;
    params.SubType = (FName)SubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialSwapComponent = params.MaterialSwapComponent;
    return (bool)params.ReturnValue;
}
bool UMaterialSwapComponentAutoRefresh::CreateSwapAdvancedAutoRefresh(AActor* Actor, UMaterialSwapComponentAutoRefresh*& MaterialSwapComponent, FMaterialSwapInfo& SwapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponentAutoRefresh.CreateSwapAdvancedAutoRefresh"));
    struct Params_CreateSwapAdvancedAutoRefresh {
        AActor* Actor; // 0x0
        UMaterialSwapComponentAutoRefresh* MaterialSwapComponent; // 0x8
        FMaterialSwapInfo SwapInfo; // 0x10
        bool ReturnValue; // 0x190
    }; // Size: 0x191
    Params_CreateSwapAdvancedAutoRefresh params{};
    params.Actor = (AActor*)Actor;
    params.MaterialSwapComponent = (UMaterialSwapComponentAutoRefresh*)MaterialSwapComponent;
    params.SwapInfo = (FMaterialSwapInfo)SwapInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialSwapComponent = params.MaterialSwapComponent;
    SwapInfo = params.SwapInfo;
    return (bool)params.ReturnValue;
}
