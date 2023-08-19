#include "UQualifierOptions.hpp"
#include "UTransfigurationActorsQualifierOptions.hpp"
UTransfigurationActorsQualifierOptions* UTransfigurationActorsQualifierOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.TransfigurationActorsQualifierOptions");
    return (UTransfigurationActorsQualifierOptions*)res;
}
