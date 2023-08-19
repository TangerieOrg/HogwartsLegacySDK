#include "ACreature_Controller.hpp"
#include "ANPC_Controller.hpp"
#include "UCreatureUtilityContext.hpp"
#include "UCreature_PathFollowingComponent.hpp"
ACreature_Controller* ACreature_Controller::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_Controller");
    return (ACreature_Controller*)res;
}
