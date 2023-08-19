#include "ABroomItemTool.hpp"
#include "AInventoryItemTool.hpp"
#include "UAnimationArchitectAsset.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
ABroomItemTool* ABroomItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomItemTool");
    return (ABroomItemTool*)res;
}
void ABroomItemTool::SpawnAndMountBroom(bool bUseTransition, bool bInDestroyAfterMount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomItemTool.SpawnAndMountBroom"));
    struct Params_SpawnAndMountBroom {
        bool bUseTransition; // 0x0
        bool bInDestroyAfterMount; // 0x1
    }; // Size: 0x2
    Params_SpawnAndMountBroom params{};
    params.bUseTransition = (bool)bUseTransition;
    params.bInDestroyAfterMount = (bool)bInDestroyAfterMount;
    ProcessEvent(func, &params);
}
void ABroomItemTool::OnAnimsLoaded(bool bUseTransition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomItemTool.OnAnimsLoaded"));
    struct Params_OnAnimsLoaded {
        bool bUseTransition; // 0x0
    }; // Size: 0x1
    Params_OnAnimsLoaded params{};
    params.bUseTransition = (bool)bUseTransition;
    ProcessEvent(func, &params);
}
void ABroomItemTool::MountBroom(bool bUseTransition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomItemTool.MountBroom"));
    struct Params_MountBroom {
        bool bUseTransition; // 0x0
    }; // Size: 0x1
    Params_MountBroom params{};
    params.bUseTransition = (bool)bUseTransition;
    ProcessEvent(func, &params);
}
