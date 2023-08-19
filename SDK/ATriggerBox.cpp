#include "ATriggerBase.hpp"
#include "ATriggerBox.hpp"
ATriggerBox* ATriggerBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TriggerBox");
    return (ATriggerBox*)res;
}
