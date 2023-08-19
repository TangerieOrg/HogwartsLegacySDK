#include "UAblAbilityTaskScratchPad.hpp"
#include "UablNPCPhysicsTaskScratchPad.hpp"
UablNPCPhysicsTaskScratchPad* UablNPCPhysicsTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPCPhysicsTaskScratchPad");
    return (UablNPCPhysicsTaskScratchPad*)res;
}
