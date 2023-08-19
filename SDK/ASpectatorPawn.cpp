#include "ADefaultPawn.hpp"
#include "ASpectatorPawn.hpp"
ASpectatorPawn* ASpectatorPawn::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SpectatorPawn");
    return (ASpectatorPawn*)res;
}
