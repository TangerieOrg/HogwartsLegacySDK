#include "ENpcReactFlyToLocationOption.hpp"
#include "UAblFlyToLocationTaskBase.hpp"
#include "UAblNpcReactFlyToLocation.hpp"
UAblNpcReactFlyToLocation* UAblNpcReactFlyToLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactFlyToLocation");
    return (UAblNpcReactFlyToLocation*)res;
}
