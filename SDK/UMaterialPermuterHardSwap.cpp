#include "AActor.hpp"
#include "FLinearColor.hpp"
#include "FMaterialPermuterHardSwapRules.hpp"
#include "FMaterialPermuterHardSwapSimple.hpp"
#include "FMaterialSwapSharedMIDCache.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialPermuterHardSwap.hpp"
UMaterialPermuterHardSwap* UMaterialPermuterHardSwap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterHardSwap");
    return (UMaterialPermuterHardSwap*)res;
}
void UMaterialPermuterHardSwap::SwapFromdHardSwapCacheWithRules(AActor* Actor, FMaterialPermuterHardSwapRules Swap, FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.SwapFromdHardSwapCacheWithRules"));
    struct Params_SwapFromdHardSwapCacheWithRules {
        AActor* Actor; // 0x0
        FMaterialPermuterHardSwapRules Swap; // 0x8
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x140
        int32_t MaterialsSwapped; // 0x190
    }; // Size: 0x194
    Params_SwapFromdHardSwapCacheWithRules params{};
    params.Actor = (AActor*)Actor;
    params.Swap = (FMaterialPermuterHardSwapRules)Swap;
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialsSwapped = params.MaterialsSwapped;
    HardSwapCache = params.HardSwapCache;
}
void UMaterialPermuterHardSwap::SetMIDArrayScalarParameter(TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics, FName Parameter, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.SetMIDArrayScalarParameter"));
    struct Params_SetMIDArrayScalarParameter {
        TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics; // 0x0
        FName Parameter; // 0x10
        float Value; // 0x18
    }; // Size: 0x1c
    Params_SetMIDArrayScalarParameter params{};
    params.MaterialInstanceDynamics = (TArray<UMaterialInstanceDynamic*>)MaterialInstanceDynamics;
    params.Parameter = (FName)Parameter;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMaterialPermuterHardSwap::HardSwapActorWithRules(AActor* Actor, FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.HardSwapActorWithRules"));
    struct Params_HardSwapActorWithRules {
        AActor* Actor; // 0x0
        FMaterialPermuterHardSwapRules Swap; // 0x8
        int32_t MaterialsSwapped; // 0x140
        char pad_144[0x4];
        TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics; // 0x148
        bool bForceLoadMaterials; // 0x158
    }; // Size: 0x159
    Params_HardSwapActorWithRules params{};
    params.Actor = (AActor*)Actor;
    params.Swap = (FMaterialPermuterHardSwapRules)Swap;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    params.MaterialInstanceDynamics = (TArray<UMaterialInstanceDynamic*>)MaterialInstanceDynamics;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialsSwapped = params.MaterialsSwapped;
    MaterialInstanceDynamics = params.MaterialInstanceDynamics;
}
void UMaterialPermuterHardSwap::SwapFromdHardSwapCache(AActor* Actor, FMaterialPermuterHardSwapSimple Swap, FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.SwapFromdHardSwapCache"));
    struct Params_SwapFromdHardSwapCache {
        AActor* Actor; // 0x0
        FMaterialPermuterHardSwapSimple Swap; // 0x8
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x68
        int32_t MaterialsSwapped; // 0xb8
    }; // Size: 0xbc
    Params_SwapFromdHardSwapCache params{};
    params.Actor = (AActor*)Actor;
    params.Swap = (FMaterialPermuterHardSwapSimple)Swap;
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapCache = params.HardSwapCache;
    MaterialsSwapped = params.MaterialsSwapped;
}
void UMaterialPermuterHardSwap::HardSwapCacheToMaterials(FMaterialSwapSharedMIDCache& HardSwapCache, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.HardSwapCacheToMaterials"));
    struct Params_HardSwapCacheToMaterials {
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x0
        TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics; // 0x50
    }; // Size: 0x60
    Params_HardSwapCacheToMaterials params{};
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.MaterialInstanceDynamics = (TArray<UMaterialInstanceDynamic*>)MaterialInstanceDynamics;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapCache = params.HardSwapCache;
    MaterialInstanceDynamics = params.MaterialInstanceDynamics;
}
void UMaterialPermuterHardSwap::SwapActorsFromdHardSwapCacheWithRules(TArray<AActor*> Actors, FMaterialPermuterHardSwapRules Swap, FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.SwapActorsFromdHardSwapCacheWithRules"));
    struct Params_SwapActorsFromdHardSwapCacheWithRules {
        TArray<AActor*> Actors; // 0x0
        FMaterialPermuterHardSwapRules Swap; // 0x10
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x148
        int32_t MaterialsSwapped; // 0x198
    }; // Size: 0x19c
    Params_SwapActorsFromdHardSwapCacheWithRules params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.Swap = (FMaterialPermuterHardSwapRules)Swap;
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapCache = params.HardSwapCache;
    MaterialsSwapped = params.MaterialsSwapped;
}
void UMaterialPermuterHardSwap::SwapActorsFromdHardSwapCache(TArray<AActor*> Actors, FMaterialPermuterHardSwapSimple Swap, FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.SwapActorsFromdHardSwapCache"));
    struct Params_SwapActorsFromdHardSwapCache {
        TArray<AActor*> Actors; // 0x0
        FMaterialPermuterHardSwapSimple Swap; // 0x10
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x70
        int32_t MaterialsSwapped; // 0xc0
    }; // Size: 0xc4
    Params_SwapActorsFromdHardSwapCache params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.Swap = (FMaterialPermuterHardSwapSimple)Swap;
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapCache = params.HardSwapCache;
    MaterialsSwapped = params.MaterialsSwapped;
}
void UMaterialPermuterHardSwap::HardSwapActorsWithRules(TArray<AActor*> Actors, FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.HardSwapActorsWithRules"));
    struct Params_HardSwapActorsWithRules {
        TArray<AActor*> Actors; // 0x0
        FMaterialPermuterHardSwapRules Swap; // 0x10
        int32_t MaterialsSwapped; // 0x148
        char pad_14c[0x4];
        TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics; // 0x150
        bool bForceLoadMaterials; // 0x160
    }; // Size: 0x161
    Params_HardSwapActorsWithRules params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.Swap = (FMaterialPermuterHardSwapRules)Swap;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    params.MaterialInstanceDynamics = (TArray<UMaterialInstanceDynamic*>)MaterialInstanceDynamics;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialsSwapped = params.MaterialsSwapped;
    MaterialInstanceDynamics = params.MaterialInstanceDynamics;
}
void UMaterialPermuterHardSwap::HardSwapActorWithRulesNoMIDs(AActor* Actor, FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.HardSwapActorWithRulesNoMIDs"));
    struct Params_HardSwapActorWithRulesNoMIDs {
        AActor* Actor; // 0x0
        FMaterialPermuterHardSwapRules Swap; // 0x8
        int32_t MaterialsSwapped; // 0x140
        bool bForceLoadMaterials; // 0x144
    }; // Size: 0x145
    Params_HardSwapActorWithRulesNoMIDs params{};
    params.Actor = (AActor*)Actor;
    params.Swap = (FMaterialPermuterHardSwapRules)Swap;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialsSwapped = params.MaterialsSwapped;
}
void UMaterialPermuterHardSwap::SetMIDArrayVectorParameter(TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics, FName Parameter, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.SetMIDArrayVectorParameter"));
    struct Params_SetMIDArrayVectorParameter {
        TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics; // 0x0
        FName Parameter; // 0x10
        FLinearColor Value; // 0x18
    }; // Size: 0x28
    Params_SetMIDArrayVectorParameter params{};
    params.MaterialInstanceDynamics = (TArray<UMaterialInstanceDynamic*>)MaterialInstanceDynamics;
    params.Parameter = (FName)Parameter;
    params.Value = (FLinearColor)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMaterialPermuterHardSwap::HardSwapActorNoMIDs(AActor* Actor, FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.HardSwapActorNoMIDs"));
    struct Params_HardSwapActorNoMIDs {
        AActor* Actor; // 0x0
        FMaterialPermuterHardSwapSimple Swap; // 0x8
        int32_t MaterialsSwapped; // 0x68
        bool bForceLoadMaterials; // 0x6c
    }; // Size: 0x6d
    Params_HardSwapActorNoMIDs params{};
    params.Actor = (AActor*)Actor;
    params.Swap = (FMaterialPermuterHardSwapSimple)Swap;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialsSwapped = params.MaterialsSwapped;
}
void UMaterialPermuterHardSwap::HardSwapActors(TArray<AActor*> Actors, FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.HardSwapActors"));
    struct Params_HardSwapActors {
        TArray<AActor*> Actors; // 0x0
        FMaterialPermuterHardSwapSimple Swap; // 0x10
        int32_t MaterialsSwapped; // 0x70
        char pad_74[0x4];
        TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics; // 0x78
        bool bForceLoadMaterials; // 0x88
    }; // Size: 0x89
    Params_HardSwapActors params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.Swap = (FMaterialPermuterHardSwapSimple)Swap;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    params.MaterialInstanceDynamics = (TArray<UMaterialInstanceDynamic*>)MaterialInstanceDynamics;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialsSwapped = params.MaterialsSwapped;
    MaterialInstanceDynamics = params.MaterialInstanceDynamics;
}
void UMaterialPermuterHardSwap::HardSwapActor(AActor* Actor, FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.HardSwapActor"));
    struct Params_HardSwapActor {
        AActor* Actor; // 0x0
        FMaterialPermuterHardSwapSimple Swap; // 0x8
        int32_t MaterialsSwapped; // 0x68
        char pad_6c[0x4];
        TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics; // 0x70
        bool bForceLoadMaterials; // 0x80
    }; // Size: 0x81
    Params_HardSwapActor params{};
    params.Actor = (AActor*)Actor;
    params.Swap = (FMaterialPermuterHardSwapSimple)Swap;
    params.MaterialsSwapped = (int32_t)MaterialsSwapped;
    params.MaterialInstanceDynamics = (TArray<UMaterialInstanceDynamic*>)MaterialInstanceDynamics;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialsSwapped = params.MaterialsSwapped;
    MaterialInstanceDynamics = params.MaterialInstanceDynamics;
}
void UMaterialPermuterHardSwap::BuildHardSwapCacheWithRules(AActor* Actor, FMaterialPermuterHardSwapRules Swap, FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.BuildHardSwapCacheWithRules"));
    struct Params_BuildHardSwapCacheWithRules {
        AActor* Actor; // 0x0
        FMaterialPermuterHardSwapRules Swap; // 0x8
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x140
        bool bForceLoadMaterials; // 0x190
    }; // Size: 0x191
    Params_BuildHardSwapCacheWithRules params{};
    params.Actor = (AActor*)Actor;
    params.Swap = (FMaterialPermuterHardSwapRules)Swap;
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapCache = params.HardSwapCache;
}
void UMaterialPermuterHardSwap::BuildHardSwapCacheForActorsWithRules(TArray<AActor*> Actors, FMaterialPermuterHardSwapRules Swap, FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.BuildHardSwapCacheForActorsWithRules"));
    struct Params_BuildHardSwapCacheForActorsWithRules {
        TArray<AActor*> Actors; // 0x0
        FMaterialPermuterHardSwapRules Swap; // 0x10
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x148
        bool bForceLoadMaterials; // 0x198
    }; // Size: 0x199
    Params_BuildHardSwapCacheForActorsWithRules params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.Swap = (FMaterialPermuterHardSwapRules)Swap;
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapCache = params.HardSwapCache;
}
void UMaterialPermuterHardSwap::BuildHardSwapCacheForActors(TArray<AActor*> Actors, FMaterialPermuterHardSwapSimple Swap, FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.BuildHardSwapCacheForActors"));
    struct Params_BuildHardSwapCacheForActors {
        TArray<AActor*> Actors; // 0x0
        FMaterialPermuterHardSwapSimple Swap; // 0x10
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x70
        bool bForceLoadMaterials; // 0xc0
    }; // Size: 0xc1
    Params_BuildHardSwapCacheForActors params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.Swap = (FMaterialPermuterHardSwapSimple)Swap;
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapCache = params.HardSwapCache;
}
void UMaterialPermuterHardSwap::BuildHardSwapCache(AActor* Actor, FMaterialPermuterHardSwapSimple Swap, FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterHardSwap.BuildHardSwapCache"));
    struct Params_BuildHardSwapCache {
        AActor* Actor; // 0x0
        FMaterialPermuterHardSwapSimple Swap; // 0x8
        FMaterialSwapSharedMIDCache HardSwapCache; // 0x68
        bool bForceLoadMaterials; // 0xb8
    }; // Size: 0xb9
    Params_BuildHardSwapCache params{};
    params.Actor = (AActor*)Actor;
    params.Swap = (FMaterialPermuterHardSwapSimple)Swap;
    params.HardSwapCache = (FMaterialSwapSharedMIDCache)HardSwapCache;
    params.bForceLoadMaterials = (bool)bForceLoadMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapCache = params.HardSwapCache;
}
