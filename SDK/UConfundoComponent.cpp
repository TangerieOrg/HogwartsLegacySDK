#include "FConfundoData.hpp"
#include "UConfundoComponent.hpp"
#include "UStateEffectComponent.hpp"
UConfundoComponent* UConfundoComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConfundoComponent");
    return (UConfundoComponent*)res;
}
