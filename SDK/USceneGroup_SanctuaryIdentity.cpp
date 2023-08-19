#include "ESanctuaryIdentity.hpp"
#include "UFunction.hpp"
#include "USceneGroup_SanctuaryIdentity.hpp"
#include "UTimeRigGroup.hpp"
USceneGroup_SanctuaryIdentity* USceneGroup_SanctuaryIdentity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneGroup_SanctuaryIdentity");
    return (USceneGroup_SanctuaryIdentity*)res;
}
void USceneGroup_SanctuaryIdentity::OnIdentityChanged(ESanctuaryIdentity OldIdentity, ESanctuaryIdentity NewIdentity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneGroup_SanctuaryIdentity.OnIdentityChanged"));
    struct Params_OnIdentityChanged {
        ESanctuaryIdentity OldIdentity; // 0x0
        ESanctuaryIdentity NewIdentity; // 0x1
    }; // Size: 0x2
    Params_OnIdentityChanged params{};
    params.OldIdentity = (ESanctuaryIdentity)OldIdentity;
    params.NewIdentity = (ESanctuaryIdentity)NewIdentity;
    ProcessEvent(func, &params);
}
