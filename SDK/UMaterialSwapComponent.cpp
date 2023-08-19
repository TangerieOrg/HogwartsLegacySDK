#include "AActor.hpp"
#include "EMaterialSwapPriority.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapComponentHandle.hpp"
#include "FMaterialSwapInfo.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialSwap.hpp"
#include "UMaterialSwapComponent.hpp"
#include "UMeshComponent.hpp"
#include "UTexture.hpp"
void UMaterialSwapComponent::SetVector4Parameter(FName Name, FVector4 Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.SetVector4Parameter"));
    struct Params_SetVector4Parameter {
        FName Name; // 0x0
        char pad_8[0x8];
        FVector4 Value; // 0x10
    }; // Size: 0x20
    Params_SetVector4Parameter params{};
    params.Name = (FName)Name;
    params.Value = (FVector4)Value;
    ProcessEvent(func, &params);
}
void UMaterialSwapComponent::GetMaterialSwap(AActor* Actor, UMaterialSwapComponent*& MaterialSwapComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.GetMaterialSwap"));
    struct Params_GetMaterialSwap {
        AActor* Actor; // 0x0
        UMaterialSwapComponent* MaterialSwapComponent; // 0x8
    }; // Size: 0x10
    Params_GetMaterialSwap params{};
    params.Actor = (AActor*)Actor;
    params.MaterialSwapComponent = (UMaterialSwapComponent*)MaterialSwapComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialSwapComponent = params.MaterialSwapComponent;
}
UMaterialSwapComponent* UMaterialSwapComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapComponent");
    return (UMaterialSwapComponent*)res;
}
void UMaterialSwapComponent::SetTextureParameter(FName Name, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.SetTextureParameter"));
    struct Params_SetTextureParameter {
        FName Name; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SetTextureParameter params{};
    params.Name = (FName)Name;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
bool UMaterialSwapComponent::ValidSwap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.ValidSwap"));
    struct Params_ValidSwap {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ValidSwap params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMaterialSwapComponent::SetScalarParameter(FName Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.SetScalarParameter"));
    struct Params_SetScalarParameter {
        FName Name; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetScalarParameter params{};
    params.Name = (FName)Name;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
bool UMaterialSwapComponent::Swapped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.Swapped"));
    struct Params_Swapped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Swapped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMaterialSwapComponent::DestroySwap(AActor* Actor, bool unswap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.DestroySwap"));
    struct Params_DestroySwap {
        AActor* Actor; // 0x0
        bool unswap; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_DestroySwap params{};
    params.Actor = (AActor*)Actor;
    params.unswap = (bool)unswap;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMaterialSwapComponent::RestartSwap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.RestartSwap"));
    struct Params_RestartSwap {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RestartSwap params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMaterialSwapComponent::SetVectorParameter(FName Name, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.SetVectorParameter"));
    struct Params_SetVectorParameter {
        FName Name; // 0x0
        FVector Value; // 0x8
    }; // Size: 0x14
    Params_SetVectorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
}
void UMaterialSwapComponent::SetParameters(FMaterialSwapParameters& Params) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.SetParameters"));
    struct Params_SetParameters {
        FMaterialSwapParameters Params; // 0x0
    }; // Size: 0x50
    Params_SetParameters params{};
    params.Params = (FMaterialSwapParameters)Params;
    ProcessEvent(func, &params);
    Params = params.Params;
}
void UMaterialSwapComponent::SetColorParameter(FName Name, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.SetColorParameter"));
    struct Params_SetColorParameter {
        FName Name; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SetColorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
bool UMaterialSwapComponent::NewSwapAdvanced(FMaterialSwapInfo& SwapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.NewSwapAdvanced"));
    struct Params_NewSwapAdvanced {
        FMaterialSwapInfo SwapInfo; // 0x0
        bool ReturnValue; // 0x180
    }; // Size: 0x181
    Params_NewSwapAdvanced params{};
    params.SwapInfo = (FMaterialSwapInfo)SwapInfo;
    ProcessEvent(func, &params);
    SwapInfo = params.SwapInfo;
    return (bool)params.ReturnValue;
}
bool UMaterialSwapComponent::NewSwap(EMaterialSwapPriority Priority, FName Group, FName SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.NewSwap"));
    struct Params_NewSwap {
        EMaterialSwapPriority Priority; // 0x0
        char pad_1[0x3];
        FName Group; // 0x4
        FName SubType; // 0xc
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_NewSwap params{};
    params.Priority = (EMaterialSwapPriority)Priority;
    params.Group = (FName)Group;
    params.SubType = (FName)SubType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMaterialSwapComponent::HasMaterialSwap(AActor* Actor, bool& bHasMaterialSwap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.HasMaterialSwap"));
    struct Params_HasMaterialSwap {
        AActor* Actor; // 0x0
        bool bHasMaterialSwap; // 0x8
    }; // Size: 0x9
    Params_HasMaterialSwap params{};
    params.Actor = (AActor*)Actor;
    params.bHasMaterialSwap = (bool)bHasMaterialSwap;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bHasMaterialSwap = params.bHasMaterialSwap;
}
FMaterialSwapComponentHandle UMaterialSwapComponent::GetCurrentHandle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.GetCurrentHandle"));
    struct Params_GetCurrentHandle {
        FMaterialSwapComponentHandle ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentHandle params{};
    ProcessEvent(func, &params);
    return (FMaterialSwapComponentHandle)params.ReturnValue;
}
void UMaterialSwapComponent::EndSwap(bool AllowRestart, bool ReleaseSwap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.EndSwap"));
    struct Params_EndSwap {
        bool AllowRestart; // 0x0
        bool ReleaseSwap; // 0x1
    }; // Size: 0x2
    Params_EndSwap params{};
    params.AllowRestart = (bool)AllowRestart;
    params.ReleaseSwap = (bool)ReleaseSwap;
    ProcessEvent(func, &params);
}
bool UMaterialSwapComponent::DestroySwapComponent(UMaterialSwapComponent* MaterialSwapComponent, bool bUnswap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.DestroySwapComponent"));
    struct Params_DestroySwapComponent {
        UMaterialSwapComponent* MaterialSwapComponent; // 0x0
        bool bUnswap; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_DestroySwapComponent params{};
    params.MaterialSwapComponent = (UMaterialSwapComponent*)MaterialSwapComponent;
    params.bUnswap = (bool)bUnswap;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMaterialSwapComponent::CreateSwapAdvanced(AActor* Actor, UMaterialSwapComponent*& MaterialSwapComponent, FMaterialSwapInfo& SwapInfo, bool bAlwaysCreateNewComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.CreateSwapAdvanced"));
    struct Params_CreateSwapAdvanced {
        AActor* Actor; // 0x0
        UMaterialSwapComponent* MaterialSwapComponent; // 0x8
        FMaterialSwapInfo SwapInfo; // 0x10
        bool bAlwaysCreateNewComponent; // 0x190
        bool ReturnValue; // 0x191
    }; // Size: 0x192
    Params_CreateSwapAdvanced params{};
    params.Actor = (AActor*)Actor;
    params.MaterialSwapComponent = (UMaterialSwapComponent*)MaterialSwapComponent;
    params.SwapInfo = (FMaterialSwapInfo)SwapInfo;
    params.bAlwaysCreateNewComponent = (bool)bAlwaysCreateNewComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialSwapComponent = params.MaterialSwapComponent;
    SwapInfo = params.SwapInfo;
    return (bool)params.ReturnValue;
}
bool UMaterialSwapComponent::CreateSwap(AActor* Actor, UMaterialSwapComponent*& MaterialSwapComponent, EMaterialSwapPriority Priority, FName Group, FName SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.CreateSwap"));
    struct Params_CreateSwap {
        AActor* Actor; // 0x0
        UMaterialSwapComponent* MaterialSwapComponent; // 0x8
        EMaterialSwapPriority Priority; // 0x10
        char pad_11[0x3];
        FName Group; // 0x14
        FName SubType; // 0x1c
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_CreateSwap params{};
    params.Actor = (AActor*)Actor;
    params.MaterialSwapComponent = (UMaterialSwapComponent*)MaterialSwapComponent;
    params.Priority = (EMaterialSwapPriority)Priority;
    params.Group = (FName)Group;
    params.SubType = (FName)SubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialSwapComponent = params.MaterialSwapComponent;
    return (bool)params.ReturnValue;
}
bool UMaterialSwapComponent::CreateMeshSwap(UMeshComponent* MeshComponent, UMaterialSwapComponent*& MaterialSwapComponent, FMaterialSwapInfo& SwapInfo, bool bAlwaysCreateNewComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapComponent.CreateMeshSwap"));
    struct Params_CreateMeshSwap {
        UMeshComponent* MeshComponent; // 0x0
        UMaterialSwapComponent* MaterialSwapComponent; // 0x8
        FMaterialSwapInfo SwapInfo; // 0x10
        bool bAlwaysCreateNewComponent; // 0x190
        bool ReturnValue; // 0x191
    }; // Size: 0x192
    Params_CreateMeshSwap params{};
    params.MeshComponent = (UMeshComponent*)MeshComponent;
    params.MaterialSwapComponent = (UMaterialSwapComponent*)MaterialSwapComponent;
    params.SwapInfo = (FMaterialSwapInfo)SwapInfo;
    params.bAlwaysCreateNewComponent = (bool)bAlwaysCreateNewComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialSwapComponent = params.MaterialSwapComponent;
    SwapInfo = params.SwapInfo;
    return (bool)params.ReturnValue;
}
