#include "ANavigationObjectBase.hpp"
#include "APlayerStart.hpp"
APlayerStart* APlayerStart::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlayerStart");
    return (APlayerStart*)res;
}
