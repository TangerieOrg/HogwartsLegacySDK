#include "FTransform.hpp"
#include "UCR_Spider_C.hpp"
#include "UControlRig.hpp"
UCR_Spider_C* UCR_Spider_C::StaticClass() {
    static auto res = find_uobject("ControlRigBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Spider/CR_Spider.CR_Spider_C");
    return (UCR_Spider_C*)res;
}
