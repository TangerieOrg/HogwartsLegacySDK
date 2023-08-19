#include "AExplosiveBarrel.hpp"
#include "AWaterBarrel.hpp"
AWaterBarrel* AWaterBarrel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WaterBarrel");
    return (AWaterBarrel*)res;
}
