#include "UAxisToGameLogic.hpp"
#include "UInputToGameLogic.hpp"
UAxisToGameLogic* UAxisToGameLogic::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.AxisToGameLogic");
    return (UAxisToGameLogic*)res;
}
