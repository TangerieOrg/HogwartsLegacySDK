#include "UControlMapperPlayerInput.hpp"
#include "UPlayerInput.hpp"
UControlMapperPlayerInput* UControlMapperPlayerInput::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.ControlMapperPlayerInput");
    return (UControlMapperPlayerInput*)res;
}
