#include "FName_GameLogicRealm.hpp"
#include "UControlMapperSettings.hpp"
#include "UObject.hpp"
UControlMapperSettings* UControlMapperSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.ControlMapperSettings");
    return (UControlMapperSettings*)res;
}
