#include "AActor.hpp"
#include "AAncientMagicNova.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
AAncientMagicNova* AAncientMagicNova::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientMagicNova");
    return (AAncientMagicNova*)res;
}
void AAncientMagicNova::SetNotifyObject(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicNova.SetNotifyObject"));
    struct Params_SetNotifyObject {
        UObject* Object; // 0x0
    }; // Size: 0x8
    Params_SetNotifyObject params{};
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
}
