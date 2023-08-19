#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UNoMountHUDBase.hpp"
UNoMountHUDBase* UNoMountHUDBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NoMountHUDBase");
    return (UNoMountHUDBase*)res;
}
void UNoMountHUDBase::OnUseStateChanged(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NoMountHUDBase.OnUseStateChanged"));
    struct Params_OnUseStateChanged {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnUseStateChanged params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
