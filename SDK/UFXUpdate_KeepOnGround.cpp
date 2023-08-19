#include "UFXUpdate_KeepOnGround.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_KeepOnGround* UFXUpdate_KeepOnGround::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_KeepOnGround");
    return (UFXUpdate_KeepOnGround*)res;
}
