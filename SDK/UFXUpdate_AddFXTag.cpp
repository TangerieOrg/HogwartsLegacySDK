#include "UFXUpdate.hpp"
#include "UFXUpdate_AddFXTag.hpp"
UFXUpdate_AddFXTag* UFXUpdate_AddFXTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_AddFXTag");
    return (UFXUpdate_AddFXTag*)res;
}
