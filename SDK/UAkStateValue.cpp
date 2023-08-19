#include "UAkGroupValue.hpp"
#include "UAkStateValue.hpp"
UAkStateValue* UAkStateValue::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkStateValue");
    return (UAkStateValue*)res;
}
