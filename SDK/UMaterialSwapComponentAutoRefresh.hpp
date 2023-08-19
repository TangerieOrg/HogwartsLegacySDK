#pragma once
#include <cstdint>
#include "EMaterialSwapPriority.hpp"
#include "FMaterialSwapParameters.hpp"
#include "UMaterialSwapComponent.hpp"
class UMaterialSwapInfoObjectBase;
class AActor;
struct FMaterialSwapInfo;
#pragma pack(push, 1)
class UMaterialSwapComponentAutoRefresh : public UMaterialSwapComponent {
public:
    FMaterialSwapParameters Parameters; // 0xe0
    UMaterialSwapInfoObjectBase* SavedSwapInfo; // 0x130
    static UMaterialSwapComponentAutoRefresh* StaticClass();
    static void HasAutoRefreshMaterialSwap(AActor* Actor, bool& bHasMaterialSwap);
    static void GetAutoRefreshMaterialSwap(AActor* Actor, UMaterialSwapComponentAutoRefresh*& MaterialSwapAutoRefreshComponent);
    static bool CreateSwapAutoRefresh(AActor* Actor, UMaterialSwapComponentAutoRefresh*& MaterialSwapComponent, EMaterialSwapPriority Priority, FName Group, FName SubType);
    static bool CreateSwapAdvancedAutoRefresh(AActor* Actor, UMaterialSwapComponentAutoRefresh*& MaterialSwapComponent, FMaterialSwapInfo& SwapInfo);
}; // Size: 0x138
#pragma pack(pop)
