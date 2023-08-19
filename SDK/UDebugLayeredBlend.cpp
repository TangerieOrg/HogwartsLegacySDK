#include "AActor.hpp"
#include "UDebugLayeredBlend.hpp"
#include "UDebugWindow.hpp"
UDebugLayeredBlend* UDebugLayeredBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.DebugLayeredBlend");
    return (UDebugLayeredBlend*)res;
}
