#include "AAncientMagicNova.hpp"
#include "UAncientMagicEffect.hpp"
#include "UAncientMagicEffect_Nova.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAncientMagicEffect_Nova* UAncientMagicEffect_Nova::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientMagicEffect_Nova");
    return (UAncientMagicEffect_Nova*)res;
}
void UAncientMagicEffect_Nova::NovaFinished(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicEffect_Nova.NovaFinished"));
    struct Params_NovaFinished {
        UObject* Object; // 0x0
    }; // Size: 0x8
    Params_NovaFinished params{};
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
}
