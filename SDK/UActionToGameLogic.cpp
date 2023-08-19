#include "UActionToGameLogic.hpp"
#include "UInputToGameLogic.hpp"
UActionToGameLogic* UActionToGameLogic::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.ActionToGameLogic");
    return (UActionToGameLogic*)res;
}
