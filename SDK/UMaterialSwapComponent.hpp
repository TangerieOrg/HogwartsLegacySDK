#pragma once
#include <cstdint>
#include "EMaterialSwapPriority.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapComponentHandle.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UActorComponent.hpp"
class UMaterialSwap;
class UTexture;
struct FMaterialSwapParameters;
struct FMaterialSwapInfo;
class AActor;
class UMeshComponent;
#pragma pack(push, 1)
class UMaterialSwapComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    UMaterialSwap* MaterialSwap; // 0xd0
    char pad_d8[0x8];
    static UMaterialSwapComponent* StaticClass();
    bool ValidSwap();
    bool Swapped();
    void SetVectorParameter(FName Name, FVector Value);
    void SetVector4Parameter(FName Name, FVector4 Value);
    void SetTextureParameter(FName Name, UTexture* Value);
    void SetScalarParameter(FName Name, float Value);
    void SetParameters(FMaterialSwapParameters& Params);
    void SetColorParameter(FName Name, FLinearColor Value);
    bool RestartSwap();
    bool NewSwapAdvanced(FMaterialSwapInfo& SwapInfo);
    bool NewSwap(EMaterialSwapPriority Priority, FName Group, FName SubType);
    static void HasMaterialSwap(AActor* Actor, bool& bHasMaterialSwap);
    static void GetMaterialSwap(AActor* Actor, UMaterialSwapComponent*& MaterialSwapComponent);
    FMaterialSwapComponentHandle GetCurrentHandle();
    void EndSwap(bool AllowRestart, bool ReleaseSwap);
    static bool DestroySwapComponent(UMaterialSwapComponent* MaterialSwapComponent, bool bUnswap);
    static bool DestroySwap(AActor* Actor, bool unswap);
    static bool CreateSwapAdvanced(AActor* Actor, UMaterialSwapComponent*& MaterialSwapComponent, FMaterialSwapInfo& SwapInfo, bool bAlwaysCreateNewComponent);
    static bool CreateSwap(AActor* Actor, UMaterialSwapComponent*& MaterialSwapComponent, EMaterialSwapPriority Priority, FName Group, FName SubType);
    static bool CreateMeshSwap(UMeshComponent* MeshComponent, UMaterialSwapComponent*& MaterialSwapComponent, FMaterialSwapInfo& SwapInfo, bool bAlwaysCreateNewComponent);
}; // Size: 0xe0
#pragma pack(pop)
