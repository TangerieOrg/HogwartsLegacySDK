#include "UActorComponent.hpp"
#include "UAncientMagicEffect.hpp"
UAncientMagicEffect* UAncientMagicEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientMagicEffect");
    return (UAncientMagicEffect*)res;
}
