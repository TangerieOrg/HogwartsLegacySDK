#include "UFloatingPawnMovement.hpp"
#include "USpectatorPawnMovement.hpp"
USpectatorPawnMovement* USpectatorPawnMovement::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SpectatorPawnMovement");
    return (USpectatorPawnMovement*)res;
}
