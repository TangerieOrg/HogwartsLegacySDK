#include "UAbleSettings.hpp"
#include "UObject.hpp"
UAbleSettings* UAbleSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AbleSettings");
    return (UAbleSettings*)res;
}
