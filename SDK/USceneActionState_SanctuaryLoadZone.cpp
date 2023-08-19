#include "UFunction.hpp"
#include "USceneActionState_SanctuaryLoadZone.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_SanctuaryLoadZone* USceneActionState_SanctuaryLoadZone::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_SanctuaryLoadZone");
    return (USceneActionState_SanctuaryLoadZone*)res;
}
void USceneActionState_SanctuaryLoadZone::OnZoneLoadedAndVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_SanctuaryLoadZone.OnZoneLoadedAndVisible"));
    struct Params_OnZoneLoadedAndVisible {
    }; // Size: 0x0
    Params_OnZoneLoadedAndVisible params{};
    ProcessEvent(func, &params);
}
