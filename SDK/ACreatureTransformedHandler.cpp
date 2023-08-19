#include "ACreatureMountHandler.hpp"
#include "ACreatureTransformedHandler.hpp"
#include "UClass.hpp"
ACreatureTransformedHandler* ACreatureTransformedHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureTransformedHandler");
    return (ACreatureTransformedHandler*)res;
}
