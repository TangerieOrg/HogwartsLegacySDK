#include "UAkGroupValue.hpp"
#include "UAkSwitchValue.hpp"
UAkSwitchValue* UAkSwitchValue::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSwitchValue");
    return (UAkSwitchValue*)res;
}
